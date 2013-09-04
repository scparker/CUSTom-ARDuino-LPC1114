/*
  TwoWire.cpp - TWI/I2C library for Wiring & Arduino
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 
  Modified 2012 by Todd Krein (todd@krein.org) to implement repeated starts
*/

extern "C" {
  #include <stdlib.h>
  #include <string.h>
  #include <inttypes.h>
}

#include "Wire.h"
#include "Arduino.h"

// Initialize Class Variables //////////////////////////////////////////////////

// I2C buffers and variables
#define FAST_MODE_PLUS	      1
#define I2C_BUFSIZE           128
#define MAX_TIMEOUT	      0x00FFFFFF

#define I2CMASTER	      0x01
#define I2CSLAVE	      0x02

#define PCF8594_ADDR	      0xA0
#define READ_WRITE	      0x01

#define RD_BIT		      0x01

#define I2C_IDLE	      0
#define I2C_STARTED	      1
#define I2C_RESTARTED	      2
#define I2C_REPEATED_START    3
#define DATA_ACK              4
#define DATA_NACK	      5
#define I2C_BUSY              6
#define I2C_NO_DATA           7
#define I2C_NACK_ON_ADDRESS   8
#define I2C_NACK_ON_DATA      9
#define I2C_ARBITRATION_LOST  10
#define I2C_TIME_OUT          11
#define I2C_OK                12

#define I2CONSET_I2EN         (0x1<<6)  /* I2C Control Set Register */
#define I2CONSET_AA           (0x1<<2)
#define I2CONSET_SI           (0x1<<3)
#define I2CONSET_STO          (0x1<<4)
#define I2CONSET_STA          (0x1<<5)

#define I2CONCLR_AAC          (0x1<<2)  /* I2C Control clear Register */
#define I2CONCLR_SIC          (0x1<<3)
#define I2CONCLR_STAC         (0x1<<5)
#define I2CONCLR_I2ENC        (0x1<<6)

#define I2DAT_I2C             0x00000000  /* I2C Data Reg */
#define I2ADR_I2C             0x00000000  /* I2C Slave Address Reg */
#define I2SCLH_SCLH           0x000000F0  /* I2C SCL Duty Cycle High Reg */
#define I2SCLL_SCLL           0x000000F0  /* I2C SCL Duty Cycle Low Reg */
#define I2SCLH_HS_SCLH        0x0000003C  /* Fast Plus I2C SCL Duty Cycle High Reg */
#define I2SCLL_HS_SCLL        0x0000003C  /* Fast Plus I2C SCL Duty Cycle Low Reg */

volatile uint32_t I2CMasterState = I2C_IDLE;
volatile uint32_t I2CSlaveState = I2C_IDLE;
volatile uint32_t timeout = 0;

volatile uint32_t I2CMode;

volatile uint8_t I2CMasterBuffer[I2C_BUFSIZE];
volatile uint8_t I2CSlaveBuffer[I2C_BUFSIZE];
volatile uint32_t I2CCount = 0;
volatile uint32_t I2CReadLength;
volatile uint32_t I2CReadIndex;
volatile uint32_t I2CWriteLength;

volatile uint32_t RdIndex = 0;
volatile uint32_t WrIndex = 0;

void I2C_IRQHandler(void) 
{
  uint8_t StatValue;

  timeout = 0;
  /* this handler deals with master read and master write only */
  StatValue = I2C0STAT;
  switch ( StatValue )
  {
	case 0x08:			/* A Start condition is issued. */
	WrIndex = 0;
	I2C0DAT = I2CMasterBuffer[WrIndex++];
	I2C0CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
	break;
	
	case 0x10:			/* A repeated started is issued */
	RdIndex = 0;
	/* Send SLA with R bit set, */
	I2C0DAT = I2CMasterBuffer[WrIndex++];
	I2C0CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
	break;
	
	case 0x18:			/* Regardless, it's a ACK */
	if ( I2CWriteLength == 1 )
	{
	  I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
	  I2CMasterState = I2C_NO_DATA;
	}
	else
	 {
	   I2C0DAT = I2CMasterBuffer[WrIndex++];
	 }
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x28:	/* Data byte has been transmitted, regardless ACK or NACK */
	 if ( WrIndex < I2CWriteLength )
	 {   
	   I2C0DAT = I2CMasterBuffer[WrIndex++]; /* this should be the last one */
	 }
	 else
	 {
	   if ( I2CReadLength != 0 )
	   {
		 I2C0CONSET = I2CONSET_STA;	/* Set Repeated-start flag */
	   }
	   else
	   {
		 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
		 I2CMasterState = I2C_OK;
	   }
	 }
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x30:
	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
	 I2CMasterState = I2C_NACK_ON_DATA;
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x40:	/* Master Receive, SLA_R has been sent */
	 if ( (RdIndex + 1) < I2CReadLength )
	 {
	   /* Will go to State 0x50 */
	   I2C0CONSET = I2CONSET_AA;	/* assert ACK after data is received */
	 }
	 else
	 {
	   /* Will go to State 0x58 */
	   I2C0CONCLR = I2CONCLR_AAC;	/* assert NACK after data is received */
	 }
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x50:	/* Data byte has been received, regardless following ACK or NACK */
	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
	 if ( (RdIndex + 1) < I2CReadLength )
	 {   
	   I2C0CONSET = I2CONSET_AA;	/* assert ACK after data is received */
	 }
	 else
	 {
	   I2C0CONCLR = I2CONCLR_AAC;	/* assert NACK on last byte */
	 }
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x58:
	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
	 I2CMasterState = I2C_OK;
	 I2C0CONSET = I2CONSET_STO;	/* Set Stop flag */ 
	 I2C0CONCLR = I2CONCLR_SIC;	/* Clear SI flag */
	 break;

	 case 0x20:		/* regardless, it's a NACK */
	 case 0x48:
	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
	 I2CMasterState = I2C_NACK_ON_ADDRESS;
	 I2C0CONCLR = I2CONCLR_SIC;
	 break;

	 case 0x38:		/* Arbitration lost, in this example, we don't
					 deal with multiple master situation */
	 default:
	 I2CMasterState = I2C_ARBITRATION_LOST;
	 I2C0CONCLR = I2CONCLR_SIC;	
	 break;
   }
   return;
 }

 /*****************************************************************************
 ** Function name:		I2CInit
 **
 ** Descriptions:		Initialize I2C controller
 **
 ** parameters:			I2c mode is either MASTER or SLAVE
 ** Returned value:		true or false, return false if the I2C
 **				interrupt handler was not installed correctly
 ** 
 *****************************************************************************/
 uint32_t I2CInit( uint32_t I2cMode )
 {
   PRESETCTRL |= (0x1<<1);
   SYSAHBCLKCTRL |= (1<<5);
   IOCON_PIO0_4 &= ~0x3F;	/*  I2C I/O config */
   IOCON_PIO0_4 |= 0x01;		/* I2C SCL */
   IOCON_PIO0_5 &= ~0x3F;	
   IOCON_PIO0_5 |= 0x01;		/* I2C SDA */

   /*--- Clear flags ---*/
   I2C0CONCLR = I2CONCLR_AAC | I2CONCLR_SIC | I2CONCLR_STAC | I2CONCLR_I2ENC;    

   /*--- Reset registers ---*/
 #if FAST_MODE_PLUS
   IOCON_PIO0_4 |= (0x2<<8);
   IOCON_PIO0_5 |= (0x2<<8);
   I2C0SCLL   = I2SCLL_HS_SCLL;
   I2C0SCLH   = I2SCLH_HS_SCLH;
 #else
   I2C0SCLL   = I2SCLL_SCLL;
   I2C0SCLH   = I2SCLH_SCLH;
 #endif

   if ( I2cMode == I2CSLAVE )
   {
	 I2C0ADR0 = PCF8594_ADDR;
   }    

   /* Enable the I2C Interrupt */
   bitSet(ISER, 15);

   I2C0CONSET = I2CONSET_I2EN;
   return( 1 );
 }

 /*****************************************************************************
 ** Function name:		I2CEngine
 **
 ** Descriptions:		The routine to complete a I2C transaction
 **				from start to stop. All the intermittent
 **				steps are handled in the interrupt handler.
 **				Before this routine is called, the read
 **				length, write length, I2C master buffer,
 **				and I2C command fields need to be filled.
 **				see i2cmst.c for more details. 
 **
 ** parameters:			None
 ** Returned value:		true or false, return false only if the
 **				start condition can never be generated and
 **				timed out. 
 ** 
 *****************************************************************************/
 uint32_t I2CEngine( void ) 
 {
   RdIndex = 0;
   WrIndex = 0;

   /*--- Issue a start condition ---*/
   I2C0CONSET = I2CONSET_STA;	/* Set Start flag */

   I2CMasterState = I2C_BUSY;	

   while ( I2CMasterState == I2C_BUSY )
   {
	 if ( timeout >= MAX_TIMEOUT )
	 {
	   I2CMasterState = I2C_TIME_OUT;
	   break;
	 }
	 timeout++;
   }    
   I2C0CONCLR = I2CONCLR_STAC;

   return ( I2CMasterState );
 }

 // Constructors ////////////////////////////////////////////////////////////////

 TwoWire::TwoWire()
 {
 }

 // Public Methods //////////////////////////////////////////////////////////////

 void TwoWire::begin(void)
 {
   I2CInit(I2CMASTER);
 }

 uint8_t TwoWire::requestFrom(uint8_t address, uint8_t quantity, uint8_t sendStop)
 {
   I2CReadLength = quantity;
   I2CReadIndex = 0;
   I2CMasterBuffer[1] = address;
   I2CMasterBuffer[2] = I2CMasterBuffer[0] | RD_BIT;
   I2CWriteLength += 1;
   return 0;
 }

 uint8_t TwoWire::requestFrom(uint8_t address, uint8_t quantity)
 {
   return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 }

 uint8_t TwoWire::requestFrom(int address, int quantity)
 {
   return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 }

 uint8_t TwoWire::requestFrom(int address, int quantity, int sendStop)
 {
   return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)sendStop);
 }

 void TwoWire::beginTransmission(uint8_t address)
 {
   I2CWriteLength = 1;
   I2CReadLength = 0;
   I2CMasterBuffer[0] = address;
 }

 void TwoWire::beginTransmission(int address)
 {
   beginTransmission((uint8_t)address);
 }

 //
 //	Originally, 'endTransmission' was an f(void) function.
 //	It has been modified to take one parameter indicating
 //	whether or not a STOP should be performed on the bus.
 //	Calling endTransmission(false) allows a sketch to 
 //	perform a repeated start. 
 //
 //	WARNING: Nothing in the library keeps track of whether
 //	the bus tenure has been properly ended with a STOP. It
 //	is very possible to leave the bus in a hung state if
 //	no call to endTransmission(true) is made. Some I2C
 //	devices will behave oddly if they do not see a STOP.
 //
uint8_t TwoWire::endTransmission(uint8_t sendStop)
{
  return I2CEngine();
}

//	This provides backwards compatibility with the original
//	definition, and expected behaviour, of endTransmission
//
uint8_t TwoWire::endTransmission(void)
{
  return endTransmission(true);
}

size_t TwoWire::write(uint8_t data)
{
  I2CMasterBuffer[I2CWriteLength] = data;
  I2CWriteLength++;
  return 1;
}

// must be called in:
// slave tx event callback
// or after beginTransmission(address)
size_t TwoWire::write(uint8_t *data, size_t quantity)
{
  if(1){
    // in master transmitter mode
    for(size_t i = 0; i < quantity; ++i){
      write(data[i]);
    }
  }else{
    // in slave send mode
    // reply to master
    //twi_transmit(data, quantity);
  }
  return quantity;
}

// must be called in:
// slave rx event callback
// or after requestFrom(address, numBytes)
uint8_t TwoWire::read(void)
{
  int value = -1;
  
  if(I2CReadIndex<I2CReadLength)
    value = I2CSlaveBuffer[I2CReadIndex++];

  return value;
}


// Preinstantiate Objects //////////////////////////////////////////////////////

TwoWire Wire = TwoWire();

