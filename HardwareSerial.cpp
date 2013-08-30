/*
  HardwareSerial.cpp - Hardware serial library for Wiring
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
  
  Modified 23 November 2006 by David A. Mellis
  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"
#include "wiring_private.h"

#include "HardwareSerial.h"

//  UART buffers and variables
#define UART_BAUD_RATE        9600
#define UART_RX_BUFFER_LENGTH 64
#define UART_TX_BUFFER_LENGTH 256

uint8_t uart_rx_buffer[UART_RX_BUFFER_LENGTH];
uint8_t uart_rx_insert_idx, uart_rx_extract_idx;
uint8_t uart_tx_buffer[UART_TX_BUFFER_LENGTH];
uint8_t uart_tx_insert_idx, uart_tx_extract_idx;
uint8_t uart_tx_running;
#define uart_data_available() ((uart_rx_extract_idx-uart_rx_insert_idx)!=0)

//  UART handler
void UART_IRQHandler(void) {
  static volatile uint8_t iid, temp;

  while (((iid = U0IIR) & 0x01) == 0) {            // Service all interrupts
    switch (iid & 0x0E) {	                    
      case (3 << 1):                                // Receive Line Status
	U0LSR;                                     // Read LSR to clear
	break;
      case (6 << 1):             	            // Character Timeout
      case (2 << 1):                	            // Receive Data Available
	do {
	  temp = (uart_rx_insert_idx + 1) % UART_RX_BUFFER_LENGTH;
          uart_rx_buffer[uart_rx_insert_idx] = U0RBR;
          if (temp != uart_rx_extract_idx)			  
	    uart_rx_insert_idx = temp;                            
	} while (U0LSR & 0x01);
	break;
      case (1 << 1):               		    // THR Empty
	while (U0LSR & 0x20) {
	  if (uart_tx_insert_idx != uart_tx_extract_idx) {	   
	    U0THR = uart_tx_buffer[uart_tx_extract_idx++];
	    uart_tx_extract_idx %= UART_TX_BUFFER_LENGTH;
	  } else
	    uart_tx_running = 0;       				   
	  break;
        }
	break;
      default:           			    // Unknown Interrupt
        U0LSR;
	U0RBR;
	break;
    }
  }
}

// Constructors ////////////////////////////////////////////////////////////////

HardwareSerial::HardwareSerial()
{

}

// Public Methods //////////////////////////////////////////////////////////////

void HardwareSerial::begin(unsigned long baud)
{
  IOCON_PIO1_6 = 0xD1;  // UART RXD
  IOCON_PIO1_7 = 0xD1;  // UART TXD

  //  UART Setup -> Serial.begin()
  UARTCLKDIV = 0x1;
  U0LCR = 0x83;             	 
  U0DLM = (48000000 / 16 / baud ) / 256;
  U0DLL = (48000000 / 16 / baud ) % 256;
  U0LCR = 0x03;				
  U0FCR = 0x07;				
  U0LSR;				
  while (( U0LSR & 0x60) != 0x60 );	
  while ( U0LSR & 0x01 ) { U0RBR; }
  uart_tx_extract_idx = uart_tx_insert_idx = 0;
  uart_rx_extract_idx = uart_rx_insert_idx = 0;
  uart_tx_running = 0;
  ISER = 0x200000;
  U0IER = 0x07;
}

void HardwareSerial::end()
{

}

int HardwareSerial::available(void)
{
  return ((uart_rx_extract_idx-uart_rx_insert_idx)!=0);
}

int HardwareSerial::peek(void)
{
  if (uart_rx_extract_idx==uart_rx_insert_idx) {
    return -1;
  } else {
    return uart_rx_buffer[uart_rx_extract_idx];
  }
}

int HardwareSerial::read(void)
{
  uint8_t ch;
  
  if (uart_rx_insert_idx == uart_rx_extract_idx) // check if character is available
    return -1;

  ch = uart_rx_buffer[uart_rx_extract_idx++]; // get character, bump pointer
  uart_rx_extract_idx %= UART_RX_BUFFER_LENGTH; // limit the pointer
  return ch;
}

void HardwareSerial::flush()
{

}

size_t HardwareSerial::write(uint8_t ch)
{
  uint16_t temp;

  temp = (uart_tx_insert_idx + 1) % UART_TX_BUFFER_LENGTH;

  if (temp == uart_tx_extract_idx)
    return -1;                          // no room
  
  //NVIC_DisableIRQ(UART_IRQn);
  bitClear(ISER,21);

  // check if in process of sending data
  if (uart_tx_running)
    {
      // add to queue
      uart_tx_buffer[uart_tx_insert_idx] = (uint8_t)ch;
      uart_tx_insert_idx = temp;
    }
  else
    {
      // set running flag and write to output register
      uart_tx_running = 1;
      U0THR = (uint8_t)ch;
    }

  bitSet(ISER,21);

  return (uint8_t)ch;
}

#if 0 
int HardwareSerial::write(char *string)
{
  register char ch;

  while ((ch = *string) && (write(ch) >= 0))
    string++;
  
  return 0;
}
#endif

HardwareSerial::operator bool() {
	return true;
}

// Preinstantiate Objects //////////////////////////////////////////////////////

