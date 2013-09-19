ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 1


   1              		.cpu cortex-m0
   2              		.fpu softvfp
   3              		.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
   4              		.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
   5              		.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
   6              		.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
   7              		.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
   8              		.eabi_attribute 26, 1	@ Tag_ABI_enum_size
   9              		.eabi_attribute 30, 4	@ Tag_ABI_optimization_goals
  10              		.eabi_attribute 34, 0	@ Tag_CPU_unaligned_access
  11              		.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
  12              		.file	"Wire.cpp"
  13              	@ GNU C++ (GNU Tools for ARM Embedded Processors) version 4.7.4 20130613 (release) [ARM/embedded-4_
  14              	@	compiled by GNU C version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.9.00), GMP vers
  15              	@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
  16              	@ options passed:  -I . -imultilib armv6-m
  17              	@ -iprefix /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
  18              	@ -isysroot /Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../arm-none-eabi
  19              	@ -MD out/Wire.d -MF out/Wire.d -MP -MQ out/Wire.o -D__USES_INITFINI__
  20              	@ Wire.cpp -mcpu=cortex-m0 -mthumb -auxbase-strip out/Wire.o -g -ggdb3 -Os
  21              	@ -std=gnu++98 -ffunction-sections -fdata-sections -fno-rtti
  22              	@ -fno-exceptions -fverbose-asm
  23              	@ options enabled:  -fauto-inc-dec -fbranch-count-reg -fcaller-saves
  24              	@ -fcombine-stack-adjustments -fcommon -fcompare-elim -fcprop-registers
  25              	@ -fcrossjumping -fcse-follow-jumps -fdata-sections -fdebug-types-section
  26              	@ -fdefer-pop -fdelete-null-pointer-checks -fdevirtualize -fdwarf2-cfi-asm
  27              	@ -fearly-inlining -feliminate-unused-debug-types -fexpensive-optimizations
  28              	@ -fforward-propagate -ffunction-cse -ffunction-sections -fgcse -fgcse-lm
  29              	@ -fgnu-runtime -fguess-branch-probability -fident -fif-conversion
  30              	@ -fif-conversion2 -findirect-inlining -finline -finline-atomics
  31              	@ -finline-functions -finline-functions-called-once
  32              	@ -finline-small-functions -fipa-cp -fipa-profile -fipa-pure-const
  33              	@ -fipa-reference -fipa-sra -fira-hoist-pressure -fira-share-save-slots
  34              	@ -fira-share-spill-slots -fivopts -fkeep-static-consts
  35              	@ -fleading-underscore -fmath-errno -fmerge-constants -fmerge-debug-strings
  36              	@ -fomit-frame-pointer -foptimize-register-move -foptimize-sibling-calls
  37              	@ -fpartial-inlining -fpeephole -fpeephole2 -fprefetch-loop-arrays
  38              	@ -freg-struct-return -fregmove -frename-registers -freorder-blocks
  39              	@ -freorder-functions -frerun-cse-after-loop
  40              	@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
  41              	@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
  42              	@ -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
  43              	@ -fsched-stalled-insns-dep -fschedule-insns2 -fsection-anchors
  44              	@ -fshow-column -fshrink-wrap -fsigned-zeros -fsplit-ivs-in-unroller
  45              	@ -fsplit-wide-types -fstrict-aliasing -fstrict-overflow
  46              	@ -fstrict-volatile-bitfields -fthread-jumps -ftoplevel-reorder
  47              	@ -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp
  48              	@ -ftree-ch -ftree-copy-prop -ftree-copyrename -ftree-cselim -ftree-dce
  49              	@ -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
  50              	@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  51              	@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
  52              	@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink
  53              	@ -ftree-slp-vectorize -ftree-sra -ftree-switch-conversion
  54              	@ -ftree-tail-merge -ftree-ter -ftree-vect-loop-version -ftree-vrp
  55              	@ -funit-at-a-time -funroll-loops -fvar-tracking -fvar-tracking-assignments
  56              	@ -fverbose-asm -fweb -fzero-initialized-in-bss -mlittle-endian
  57              	@ -msched-prolog -mthumb -mvectorize-with-neon-quad
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 2


  58              	
  59              		.text
  60              	.Ltext0:
  61              		.cfi_sections	.debug_frame
  62              		.section	.text._Z14I2C_IRQHandlerv,"ax",%progbits
  63              		.align	1
  64              		.global	_Z14I2C_IRQHandlerv
  65              		.code	16
  66              		.thumb_func
  67              		.type	_Z14I2C_IRQHandlerv, %function
  68              	_Z14I2C_IRQHandlerv:
  69              	.LFB51:
  70              		.file 1 "Wire.cpp"
   1:Wire.cpp      **** /*
   2:Wire.cpp      ****   TwoWire.cpp - TWI/I2C library for Wiring & Arduino
   3:Wire.cpp      ****   Copyright (c) 2006 Nicholas Zambetti.  All right reserved.
   4:Wire.cpp      **** 
   5:Wire.cpp      ****   This library is free software; you can redistribute it and/or
   6:Wire.cpp      ****   modify it under the terms of the GNU Lesser General Public
   7:Wire.cpp      ****   License as published by the Free Software Foundation; either
   8:Wire.cpp      ****   version 2.1 of the License, or (at your option) any later version.
   9:Wire.cpp      **** 
  10:Wire.cpp      ****   This library is distributed in the hope that it will be useful,
  11:Wire.cpp      ****   but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:Wire.cpp      ****   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:Wire.cpp      ****   Lesser General Public License for more details.
  14:Wire.cpp      **** 
  15:Wire.cpp      ****   You should have received a copy of the GNU Lesser General Public
  16:Wire.cpp      ****   License along with this library; if not, write to the Free Software
  17:Wire.cpp      ****   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  18:Wire.cpp      ****  
  19:Wire.cpp      ****   Modified 2012 by Todd Krein (todd@krein.org) to implement repeated starts
  20:Wire.cpp      **** */
  21:Wire.cpp      **** 
  22:Wire.cpp      **** extern "C" {
  23:Wire.cpp      ****   #include <stdlib.h>
  24:Wire.cpp      ****   #include <string.h>
  25:Wire.cpp      ****   #include <inttypes.h>
  26:Wire.cpp      **** }
  27:Wire.cpp      **** 
  28:Wire.cpp      **** #include "Wire.h"
  29:Wire.cpp      **** #include "Arduino.h"
  30:Wire.cpp      **** 
  31:Wire.cpp      **** // Initialize Class Variables //////////////////////////////////////////////////
  32:Wire.cpp      **** 
  33:Wire.cpp      **** // I2C buffers and variables
  34:Wire.cpp      **** #define FAST_MODE_PLUS	      1
  35:Wire.cpp      **** #define I2C_BUFSIZE           128
  36:Wire.cpp      **** #define MAX_TIMEOUT	      0x00FFFFFF
  37:Wire.cpp      **** 
  38:Wire.cpp      **** #define I2CMASTER	      0x01
  39:Wire.cpp      **** #define I2CSLAVE	      0x02
  40:Wire.cpp      **** 
  41:Wire.cpp      **** #define PCF8594_ADDR	      0xA0
  42:Wire.cpp      **** #define READ_WRITE	      0x01
  43:Wire.cpp      **** 
  44:Wire.cpp      **** #define RD_BIT		      0x01
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 3


  45:Wire.cpp      **** 
  46:Wire.cpp      **** #define I2C_IDLE	      0
  47:Wire.cpp      **** #define I2C_STARTED	      1
  48:Wire.cpp      **** #define I2C_RESTARTED	      2
  49:Wire.cpp      **** #define I2C_REPEATED_START    3
  50:Wire.cpp      **** #define DATA_ACK              4
  51:Wire.cpp      **** #define DATA_NACK	      5
  52:Wire.cpp      **** #define I2C_BUSY              6
  53:Wire.cpp      **** #define I2C_NO_DATA           7
  54:Wire.cpp      **** #define I2C_NACK_ON_ADDRESS   8
  55:Wire.cpp      **** #define I2C_NACK_ON_DATA      9
  56:Wire.cpp      **** #define I2C_ARBITRATION_LOST  10
  57:Wire.cpp      **** #define I2C_TIME_OUT          11
  58:Wire.cpp      **** #define I2C_OK                12
  59:Wire.cpp      **** 
  60:Wire.cpp      **** #define I2CONSET_I2EN         (0x1<<6)  /* I2C Control Set Register */
  61:Wire.cpp      **** #define I2CONSET_AA           (0x1<<2)
  62:Wire.cpp      **** #define I2CONSET_SI           (0x1<<3)
  63:Wire.cpp      **** #define I2CONSET_STO          (0x1<<4)
  64:Wire.cpp      **** #define I2CONSET_STA          (0x1<<5)
  65:Wire.cpp      **** 
  66:Wire.cpp      **** #define I2CONCLR_AAC          (0x1<<2)  /* I2C Control clear Register */
  67:Wire.cpp      **** #define I2CONCLR_SIC          (0x1<<3)
  68:Wire.cpp      **** #define I2CONCLR_STAC         (0x1<<5)
  69:Wire.cpp      **** #define I2CONCLR_I2ENC        (0x1<<6)
  70:Wire.cpp      **** 
  71:Wire.cpp      **** #define I2DAT_I2C             0x00000000  /* I2C Data Reg */
  72:Wire.cpp      **** #define I2ADR_I2C             0x00000000  /* I2C Slave Address Reg */
  73:Wire.cpp      **** #define I2SCLH_SCLH           0x000000F0  /* I2C SCL Duty Cycle High Reg */
  74:Wire.cpp      **** #define I2SCLL_SCLL           0x000000F0  /* I2C SCL Duty Cycle Low Reg */
  75:Wire.cpp      **** #define I2SCLH_HS_SCLH        0x0000003C  /* Fast Plus I2C SCL Duty Cycle High Reg */
  76:Wire.cpp      **** #define I2SCLL_HS_SCLL        0x0000003C  /* Fast Plus I2C SCL Duty Cycle Low Reg */
  77:Wire.cpp      **** 
  78:Wire.cpp      **** volatile uint32_t I2CMasterState = I2C_IDLE;
  79:Wire.cpp      **** volatile uint32_t I2CSlaveState = I2C_IDLE;
  80:Wire.cpp      **** volatile uint32_t timeout = 0;
  81:Wire.cpp      **** 
  82:Wire.cpp      **** volatile uint32_t I2CMode;
  83:Wire.cpp      **** 
  84:Wire.cpp      **** volatile uint8_t I2CMasterBuffer[I2C_BUFSIZE];
  85:Wire.cpp      **** volatile uint8_t I2CSlaveBuffer[I2C_BUFSIZE];
  86:Wire.cpp      **** volatile uint32_t I2CCount = 0;
  87:Wire.cpp      **** volatile uint32_t I2CReadLength;
  88:Wire.cpp      **** volatile uint32_t I2CReadIndex;
  89:Wire.cpp      **** volatile uint32_t I2CWriteLength;
  90:Wire.cpp      **** 
  91:Wire.cpp      **** volatile uint32_t RdIndex = 0;
  92:Wire.cpp      **** volatile uint32_t WrIndex = 0;
  93:Wire.cpp      **** 
  94:Wire.cpp      **** void I2C_IRQHandler(void) 
  95:Wire.cpp      **** {
  71              		.loc 1 95 0
  72              		.cfi_startproc
  73              	.LBB10:
  96:Wire.cpp      ****   uint8_t StatValue;
  97:Wire.cpp      **** 
  98:Wire.cpp      ****   timeout = 0;
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 4


  74              		.loc 1 98 0
  75 0000 474B     		ldr	r3, .L43	@ tmp171,
  76 0002 0021     		mov	r1, #0	@ tmp172,
  99:Wire.cpp      ****   /* this handler deals with master read and master write only */
 100:Wire.cpp      ****   StatValue = I2C0STAT;
  77              		.loc 1 100 0
  78 0004 4748     		ldr	r0, .L43+4	@ tmp173,
  79              	.LBE10:
  95:Wire.cpp      **** {
  80              		.loc 1 95 0
  81 0006 10B5     		push	{r4, lr}	@
  82              	.LCFI0:
  83              		.cfi_def_cfa_offset 8
  84              		.cfi_offset 4, -8
  85              		.cfi_offset 14, -4
  86              	.LBB11:
  98:Wire.cpp      ****   timeout = 0;
  87              		.loc 1 98 0
  88 0008 1960     		str	r1, [r3]	@ tmp172, timeout
  89              		.loc 1 100 0
  90 000a 0268     		ldr	r2, [r0]	@ D.7192, MEM[(volatile uint32_t *)1073741828B]
  91              	.LVL0:
 101:Wire.cpp      ****   switch ( StatValue )
 102:Wire.cpp      ****   {
 103:Wire.cpp      **** 	case 0x08:			/* A Start condition is issued. */
 104:Wire.cpp      **** 	WrIndex = 0;
 105:Wire.cpp      **** 	I2C0DAT = I2CMasterBuffer[WrIndex++];
 106:Wire.cpp      **** 	I2C0CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
 107:Wire.cpp      **** 	break;
 108:Wire.cpp      **** 	
 109:Wire.cpp      **** 	case 0x10:			/* A repeated started is issued */
 110:Wire.cpp      **** 	RdIndex = 0;
 111:Wire.cpp      **** 	/* Send SLA with R bit set, */
 112:Wire.cpp      **** 	I2C0DAT = I2CMasterBuffer[WrIndex++];
 113:Wire.cpp      **** 	I2C0CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
 114:Wire.cpp      **** 	break;
 115:Wire.cpp      **** 	
 116:Wire.cpp      **** 	case 0x18:			/* Regardless, it's a ACK */
 117:Wire.cpp      **** 	if ( I2CWriteLength == 1 )
 118:Wire.cpp      **** 	{
 119:Wire.cpp      **** 	  I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 120:Wire.cpp      **** 	  I2CMasterState = I2C_NO_DATA;
 121:Wire.cpp      **** 	}
 122:Wire.cpp      **** 	else
 123:Wire.cpp      **** 	 {
 124:Wire.cpp      **** 	   I2C0DAT = I2CMasterBuffer[WrIndex++];
 125:Wire.cpp      **** 	 }
 126:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 127:Wire.cpp      **** 	 break;
 128:Wire.cpp      **** 
 129:Wire.cpp      **** 	 case 0x28:	/* Data byte has been transmitted, regardless ACK or NACK */
 130:Wire.cpp      **** 	 if ( WrIndex < I2CWriteLength )
 131:Wire.cpp      **** 	 {   
 132:Wire.cpp      **** 	   I2C0DAT = I2CMasterBuffer[WrIndex++]; /* this should be the last one */
 133:Wire.cpp      **** 	 }
 134:Wire.cpp      **** 	 else
 135:Wire.cpp      **** 	 {
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 5


 136:Wire.cpp      **** 	   if ( I2CReadLength != 0 )
 137:Wire.cpp      **** 	   {
 138:Wire.cpp      **** 		 I2C0CONSET = I2CONSET_STA;	/* Set Repeated-start flag */
 139:Wire.cpp      **** 	   }
 140:Wire.cpp      **** 	   else
 141:Wire.cpp      **** 	   {
 142:Wire.cpp      **** 		 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 143:Wire.cpp      **** 		 I2CMasterState = I2C_OK;
 144:Wire.cpp      **** 	   }
 145:Wire.cpp      **** 	 }
 146:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 147:Wire.cpp      **** 	 break;
 148:Wire.cpp      **** 
 149:Wire.cpp      **** 	 case 0x30:
 150:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 151:Wire.cpp      **** 	 I2CMasterState = I2C_NACK_ON_DATA;
 152:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 153:Wire.cpp      **** 	 break;
 154:Wire.cpp      **** 
 155:Wire.cpp      **** 	 case 0x40:	/* Master Receive, SLA_R has been sent */
 156:Wire.cpp      **** 	 if ( (RdIndex + 1) < I2CReadLength )
 157:Wire.cpp      **** 	 {
 158:Wire.cpp      **** 	   /* Will go to State 0x50 */
 159:Wire.cpp      **** 	   I2C0CONSET = I2CONSET_AA;	/* assert ACK after data is received */
 160:Wire.cpp      **** 	 }
 161:Wire.cpp      **** 	 else
 162:Wire.cpp      **** 	 {
 163:Wire.cpp      **** 	   /* Will go to State 0x58 */
 164:Wire.cpp      **** 	   I2C0CONCLR = I2CONCLR_AAC;	/* assert NACK after data is received */
 165:Wire.cpp      **** 	 }
 166:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 167:Wire.cpp      **** 	 break;
 168:Wire.cpp      **** 
 169:Wire.cpp      **** 	 case 0x50:	/* Data byte has been received, regardless following ACK or NACK */
 170:Wire.cpp      **** 	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
 171:Wire.cpp      **** 	 if ( (RdIndex + 1) < I2CReadLength )
 172:Wire.cpp      **** 	 {   
 173:Wire.cpp      **** 	   I2C0CONSET = I2CONSET_AA;	/* assert ACK after data is received */
 174:Wire.cpp      **** 	 }
 175:Wire.cpp      **** 	 else
 176:Wire.cpp      **** 	 {
 177:Wire.cpp      **** 	   I2C0CONCLR = I2CONCLR_AAC;	/* assert NACK on last byte */
 178:Wire.cpp      **** 	 }
 179:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 180:Wire.cpp      **** 	 break;
 181:Wire.cpp      **** 
 182:Wire.cpp      **** 	 case 0x58:
 183:Wire.cpp      **** 	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
 184:Wire.cpp      **** 	 I2CMasterState = I2C_OK;
 185:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;	/* Set Stop flag */ 
 186:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;	/* Clear SI flag */
 187:Wire.cpp      **** 	 break;
 188:Wire.cpp      **** 
 189:Wire.cpp      **** 	 case 0x20:		/* regardless, it's a NACK */
 190:Wire.cpp      **** 	 case 0x48:
 191:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 192:Wire.cpp      **** 	 I2CMasterState = I2C_NACK_ON_ADDRESS;
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 6


 193:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;
 194:Wire.cpp      **** 	 break;
 195:Wire.cpp      **** 
 196:Wire.cpp      **** 	 case 0x38:		/* Arbitration lost, in this example, we don't
 197:Wire.cpp      **** 					 deal with multiple master situation */
 198:Wire.cpp      **** 	 default:
 199:Wire.cpp      **** 	 I2CMasterState = I2C_ARBITRATION_LOST;
 200:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;	
 201:Wire.cpp      **** 	 break;
 202:Wire.cpp      ****    }
 203:Wire.cpp      ****    return;
 204:Wire.cpp      ****  }
 205:Wire.cpp      **** 
 206:Wire.cpp      ****  /*****************************************************************************
 207:Wire.cpp      ****  ** Function name:		I2CInit
 208:Wire.cpp      ****  **
 209:Wire.cpp      ****  ** Descriptions:		Initialize I2C controller
 210:Wire.cpp      ****  **
 211:Wire.cpp      ****  ** parameters:			I2c mode is either MASTER or SLAVE
 212:Wire.cpp      ****  ** Returned value:		true or false, return false if the I2C
 213:Wire.cpp      ****  **				interrupt handler was not installed correctly
 214:Wire.cpp      ****  ** 
 215:Wire.cpp      ****  *****************************************************************************/
 216:Wire.cpp      ****  uint32_t I2CInit( uint32_t I2cMode )
 217:Wire.cpp      ****  {
 218:Wire.cpp      ****    PRESETCTRL |= (0x1<<1);
 219:Wire.cpp      ****    SYSAHBCLKCTRL |= (1<<5);
 220:Wire.cpp      ****    IOCON_PIO0_4 &= ~0x3F;	/*  I2C I/O config */
 221:Wire.cpp      ****    IOCON_PIO0_4 |= 0x01;		/* I2C SCL */
 222:Wire.cpp      ****    IOCON_PIO0_5 &= ~0x3F;	
 223:Wire.cpp      ****    IOCON_PIO0_5 |= 0x01;		/* I2C SDA */
 224:Wire.cpp      **** 
 225:Wire.cpp      ****    /*--- Clear flags ---*/
 226:Wire.cpp      ****    I2C0CONCLR = I2CONCLR_AAC | I2CONCLR_SIC | I2CONCLR_STAC | I2CONCLR_I2ENC;    
 227:Wire.cpp      **** 
 228:Wire.cpp      ****    /*--- Reset registers ---*/
 229:Wire.cpp      ****  #if FAST_MODE_PLUS
 230:Wire.cpp      ****    IOCON_PIO0_4 |= (0x2<<8);
 231:Wire.cpp      ****    IOCON_PIO0_5 |= (0x2<<8);
 232:Wire.cpp      ****    I2C0SCLL   = I2SCLL_HS_SCLL;
 233:Wire.cpp      ****    I2C0SCLH   = I2SCLH_HS_SCLH;
 234:Wire.cpp      ****  #else
 235:Wire.cpp      ****    I2C0SCLL   = I2SCLL_SCLL;
 236:Wire.cpp      ****    I2C0SCLH   = I2SCLH_SCLH;
 237:Wire.cpp      ****  #endif
 238:Wire.cpp      **** 
 239:Wire.cpp      ****    if ( I2cMode == I2CSLAVE )
 240:Wire.cpp      ****    {
 241:Wire.cpp      **** 	 I2C0ADR0 = PCF8594_ADDR;
 242:Wire.cpp      ****    }    
 243:Wire.cpp      **** 
 244:Wire.cpp      ****    /* Enable the I2C Interrupt */
 245:Wire.cpp      ****    bitSet(ISER, 15);
 246:Wire.cpp      **** 
 247:Wire.cpp      ****    I2C0CONSET = I2CONSET_I2EN;
 248:Wire.cpp      ****    return( 1 );
 249:Wire.cpp      ****  }
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 7


 250:Wire.cpp      **** 
 251:Wire.cpp      ****  /*****************************************************************************
 252:Wire.cpp      ****  ** Function name:		I2CEngine
 253:Wire.cpp      ****  **
 254:Wire.cpp      ****  ** Descriptions:		The routine to complete a I2C transaction
 255:Wire.cpp      ****  **				from start to stop. All the intermittent
 256:Wire.cpp      ****  **				steps are handled in the interrupt handler.
 257:Wire.cpp      ****  **				Before this routine is called, the read
 258:Wire.cpp      ****  **				length, write length, I2C master buffer,
 259:Wire.cpp      ****  **				and I2C command fields need to be filled.
 260:Wire.cpp      ****  **				see i2cmst.c for more details. 
 261:Wire.cpp      ****  **
 262:Wire.cpp      ****  ** parameters:			None
 263:Wire.cpp      ****  ** Returned value:		true or false, return false only if the
 264:Wire.cpp      ****  **				start condition can never be generated and
 265:Wire.cpp      ****  **				timed out. 
 266:Wire.cpp      ****  ** 
 267:Wire.cpp      ****  *****************************************************************************/
 268:Wire.cpp      ****  uint32_t I2CEngine( void ) 
 269:Wire.cpp      ****  {
 270:Wire.cpp      ****    RdIndex = 0;
 271:Wire.cpp      ****    WrIndex = 0;
 272:Wire.cpp      **** 
 273:Wire.cpp      ****    /*--- Issue a start condition ---*/
 274:Wire.cpp      ****    I2C0CONSET = I2CONSET_STA;	/* Set Start flag */
 275:Wire.cpp      **** 
 276:Wire.cpp      ****    I2CMasterState = I2C_BUSY;	
 277:Wire.cpp      **** 
 278:Wire.cpp      ****    while ( I2CMasterState == I2C_BUSY )
 279:Wire.cpp      ****    {
 280:Wire.cpp      **** 	 if ( timeout >= MAX_TIMEOUT )
 281:Wire.cpp      **** 	 {
 282:Wire.cpp      **** 	   I2CMasterState = I2C_TIME_OUT;
 283:Wire.cpp      **** 	   break;
 284:Wire.cpp      **** 	 }
 285:Wire.cpp      **** 	 timeout++;
 286:Wire.cpp      ****    }    
 287:Wire.cpp      ****    I2C0CONCLR = I2CONCLR_STAC;
 288:Wire.cpp      **** 
 289:Wire.cpp      ****    return ( I2CMasterState );
 290:Wire.cpp      ****  }
 291:Wire.cpp      **** 
 292:Wire.cpp      ****  // Constructors ////////////////////////////////////////////////////////////////
 293:Wire.cpp      **** 
 294:Wire.cpp      ****  TwoWire::TwoWire()
 295:Wire.cpp      ****  {
 296:Wire.cpp      ****  }
 297:Wire.cpp      **** 
 298:Wire.cpp      ****  // Public Methods //////////////////////////////////////////////////////////////
 299:Wire.cpp      **** 
 300:Wire.cpp      ****  void TwoWire::begin(void)
 301:Wire.cpp      ****  {
 302:Wire.cpp      ****    I2CInit(I2CMASTER);
 303:Wire.cpp      ****  }
 304:Wire.cpp      **** 
 305:Wire.cpp      ****  uint8_t TwoWire::requestFrom(uint8_t address, uint8_t quantity, uint8_t sendStop)
 306:Wire.cpp      ****  {
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 8


 307:Wire.cpp      ****    I2CReadLength = quantity;
 308:Wire.cpp      ****    I2CReadIndex = 0;
 309:Wire.cpp      ****    I2CMasterBuffer[1] = address;
 310:Wire.cpp      ****    I2CMasterBuffer[2] = I2CMasterBuffer[0] | RD_BIT;
 311:Wire.cpp      ****    I2CWriteLength += 1;
 312:Wire.cpp      ****    return 0;
 313:Wire.cpp      ****  }
 314:Wire.cpp      **** 
 315:Wire.cpp      ****  uint8_t TwoWire::requestFrom(uint8_t address, uint8_t quantity)
 316:Wire.cpp      ****  {
 317:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 318:Wire.cpp      ****  }
 319:Wire.cpp      **** 
 320:Wire.cpp      ****  uint8_t TwoWire::requestFrom(int address, int quantity)
 321:Wire.cpp      ****  {
 322:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 323:Wire.cpp      ****  }
 324:Wire.cpp      **** 
 325:Wire.cpp      ****  uint8_t TwoWire::requestFrom(int address, int quantity, int sendStop)
 326:Wire.cpp      ****  {
 327:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)sendStop);
 328:Wire.cpp      ****  }
 329:Wire.cpp      **** 
 330:Wire.cpp      ****  void TwoWire::beginTransmission(uint8_t address)
 331:Wire.cpp      ****  {
 332:Wire.cpp      ****    I2CWriteLength = 1;
 333:Wire.cpp      ****    I2CReadLength = 0;
 334:Wire.cpp      ****    I2CMasterBuffer[0] = address;
 335:Wire.cpp      ****  }
 336:Wire.cpp      **** 
 337:Wire.cpp      ****  void TwoWire::beginTransmission(int address)
 338:Wire.cpp      ****  {
 339:Wire.cpp      ****    beginTransmission((uint8_t)address);
 340:Wire.cpp      ****  }
 341:Wire.cpp      **** 
 342:Wire.cpp      ****  //
 343:Wire.cpp      ****  //	Originally, 'endTransmission' was an f(void) function.
 344:Wire.cpp      ****  //	It has been modified to take one parameter indicating
 345:Wire.cpp      ****  //	whether or not a STOP should be performed on the bus.
 346:Wire.cpp      ****  //	Calling endTransmission(false) allows a sketch to 
 347:Wire.cpp      ****  //	perform a repeated start. 
 348:Wire.cpp      ****  //
 349:Wire.cpp      ****  //	WARNING: Nothing in the library keeps track of whether
 350:Wire.cpp      ****  //	the bus tenure has been properly ended with a STOP. It
 351:Wire.cpp      ****  //	is very possible to leave the bus in a hung state if
 352:Wire.cpp      ****  //	no call to endTransmission(true) is made. Some I2C
 353:Wire.cpp      ****  //	devices will behave oddly if they do not see a STOP.
 354:Wire.cpp      ****  //
 355:Wire.cpp      **** uint8_t TwoWire::endTransmission(uint8_t sendStop)
 356:Wire.cpp      **** {
 357:Wire.cpp      ****   return I2CEngine();
 358:Wire.cpp      **** }
 359:Wire.cpp      **** 
 360:Wire.cpp      **** //	This provides backwards compatibility with the original
 361:Wire.cpp      **** //	definition, and expected behaviour, of endTransmission
 362:Wire.cpp      **** //
 363:Wire.cpp      **** uint8_t TwoWire::endTransmission(void)
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 9


 364:Wire.cpp      **** {
 365:Wire.cpp      ****   return endTransmission(true);
 366:Wire.cpp      **** }
 367:Wire.cpp      **** 
 368:Wire.cpp      **** size_t TwoWire::write(uint8_t data)
 369:Wire.cpp      **** {
 370:Wire.cpp      ****   I2CMasterBuffer[I2CWriteLength] = data;
 371:Wire.cpp      ****   I2CWriteLength++;
 372:Wire.cpp      ****   return 1;
 373:Wire.cpp      **** }
 374:Wire.cpp      **** 
 375:Wire.cpp      **** // must be called in:
 376:Wire.cpp      **** // slave tx event callback
 377:Wire.cpp      **** // or after beginTransmission(address)
 378:Wire.cpp      **** size_t TwoWire::write(uint8_t *data, size_t quantity)
 379:Wire.cpp      **** {
 380:Wire.cpp      ****   if(1){
 381:Wire.cpp      ****     // in master transmitter mode
 382:Wire.cpp      ****     for(size_t i = 0; i < quantity; ++i){
 383:Wire.cpp      ****       write(data[i]);
 384:Wire.cpp      ****     }
 385:Wire.cpp      ****   }else{
 386:Wire.cpp      ****     // in slave send mode
 387:Wire.cpp      ****     // reply to master
 388:Wire.cpp      ****     //twi_transmit(data, quantity);
 389:Wire.cpp      ****   }
 390:Wire.cpp      ****   return quantity;
 391:Wire.cpp      **** }
 392:Wire.cpp      **** 
 393:Wire.cpp      **** // must be called in:
 394:Wire.cpp      **** // slave rx event callback
 395:Wire.cpp      **** // or after requestFrom(address, numBytes)
 396:Wire.cpp      **** uint8_t TwoWire::read(void)
 397:Wire.cpp      **** {
 398:Wire.cpp      ****   int value = -1;
 399:Wire.cpp      ****   
 400:Wire.cpp      ****   if(I2CReadIndex<I2CReadLength)
 401:Wire.cpp      ****     value = I2CSlaveBuffer[I2CReadIndex++];
 402:Wire.cpp      **** 
 403:Wire.cpp      ****   return value;
 404:Wire.cpp      **** }
 405:Wire.cpp      **** 
 406:Wire.cpp      **** 
 407:Wire.cpp      **** // Preinstantiate Objects //////////////////////////////////////////////////////
 408:Wire.cpp      **** 
 409:Wire.cpp      **** TwoWire Wire = TwoWire();
  92              		.loc 1 409 0
  93 000c D4B2     		uxtb	r4, r2	@ tmp174, D.7192
  94 000e 464A     		ldr	r2, .L43+8	@ tmp276,
  95              	.LVL1:
 101:Wire.cpp      ****   switch ( StatValue )
  96              		.loc 1 101 0
  97 0010 282C     		cmp	r4, #40	@ tmp174,
  98 0012 42D0     		beq	.L7	@,
  99 0014 0CDC     		bgt	.L12	@,
 100 0016 102C     		cmp	r4, #16	@ tmp174,
 101 0018 27D0     		beq	.L4	@,
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 10


 102 001a 04DC     		bgt	.L13	@,
 103 001c 082C     		cmp	r4, #8	@ tmp174,
 104 001e 79D1     		bne	.L2	@,
 104:Wire.cpp      **** 	WrIndex = 0;
 105              		.loc 1 104 0
 106 0020 424B     		ldr	r3, .L43+12	@ tmp176,
 107 0022 1960     		str	r1, [r3]	@ tmp172, WrIndex
 108 0024 24E0     		b	.L38	@
 109              	.L13:
 101:Wire.cpp      ****   switch ( StatValue )
 110              		.loc 1 101 0
 111 0026 182C     		cmp	r4, #24	@ tmp174,
 112 0028 2BD0     		beq	.L5	@,
 113 002a 202C     		cmp	r4, #32	@ tmp174,
 114 002c 72D1     		bne	.L2	@,
 115 002e 69E0     		b	.L6	@
 116              	.L12:
 117 0030 482C     		cmp	r4, #72	@ tmp174,
 118 0032 67D0     		beq	.L6	@,
 119 0034 05DC     		bgt	.L14	@,
 120 0036 302C     		cmp	r4, #48	@ tmp174,
 121 0038 48D0     		beq	.L8	@,
 122 003a 402C     		cmp	r4, #64	@ tmp174,
 123 003c 6AD1     		bne	.L2	@,
 156:Wire.cpp      **** 	 if ( (RdIndex + 1) < I2CReadLength )
 124              		.loc 1 156 0
 125 003e 3C4B     		ldr	r3, .L43+16	@ tmp232,
 126 0040 53E0     		b	.L40	@
 127              	.L14:
 101:Wire.cpp      ****   switch ( StatValue )
 128              		.loc 1 101 0
 129 0042 502C     		cmp	r4, #80	@ tmp174,
 130 0044 48D0     		beq	.L10	@,
 131 0046 582C     		cmp	r4, #88	@ tmp174,
 132 0048 64D1     		bne	.L2	@,
 183:Wire.cpp      **** 	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
 133              		.loc 1 183 0
 134 004a 394B     		ldr	r3, .L43+16	@ tmp255,
 135 004c 3948     		ldr	r0, .L43+20	@ tmp256,
 136 004e 1968     		ldr	r1, [r3]	@ RdIndex.40, RdIndex
 137 0050 0468     		ldr	r4, [r0]	@ D.7250, MEM[(volatile uint32_t *)1073741832B]
 138 0052 3948     		ldr	r0, .L43+24	@ tmp257,
 139 0054 E4B2     		uxtb	r4, r4	@ D.7251, D.7250
 140 0056 4454     		strb	r4, [r0, r1]	@ D.7251, I2CSlaveBuffer
 141 0058 0131     		add	r1, r1, #1	@ RdIndex.41,
 142 005a 1960     		str	r1, [r3]	@ RdIndex.41, RdIndex
 184:Wire.cpp      **** 	 I2CMasterState = I2C_OK;
 143              		.loc 1 184 0
 144 005c 374B     		ldr	r3, .L43+28	@ tmp260,
 145 005e 0C21     		mov	r1, #12	@ tmp261,
 185:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;	/* Set Stop flag */ 
 146              		.loc 1 185 0
 147 0060 8024     		mov	r4, #128	@ tmp281,
 184:Wire.cpp      **** 	 I2CMasterState = I2C_OK;
 148              		.loc 1 184 0
 149 0062 1960     		str	r1, [r3]	@ tmp261, I2CMasterState
 185:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;	/* Set Stop flag */ 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 11


 150              		.loc 1 185 0
 151 0064 1021     		mov	r1, #16	@ tmp263,
 152 0066 E305     		lsl	r3, r4, #23	@ tmp262, tmp281,
 153 0068 56E0     		b	.L33	@
 154              	.L4:
 110:Wire.cpp      **** 	RdIndex = 0;
 155              		.loc 1 110 0
 156 006a 314B     		ldr	r3, .L43+16	@ tmp186,
 157 006c 1960     		str	r1, [r3]	@ tmp172, RdIndex
 112:Wire.cpp      **** 	I2C0DAT = I2CMasterBuffer[WrIndex++];
 158              		.loc 1 112 0
 159 006e 2F4B     		ldr	r3, .L43+12	@ tmp188,
 160              	.L38:
 161 0070 1968     		ldr	r1, [r3]	@ WrIndex.19, WrIndex
 162 0072 3348     		ldr	r0, .L43+32	@ tmp189,
 163 0074 445C     		ldrb	r4, [r0, r1]	@ tmp191,* WrIndex.19
 164 0076 2F48     		ldr	r0, .L43+20	@ tmp192,
 165 0078 0131     		add	r1, r1, #1	@ WrIndex.20,
 166 007a 0460     		str	r4, [r0]	@ D.7203,
 167 007c 1960     		str	r1, [r3]	@ WrIndex.20, WrIndex
 113:Wire.cpp      **** 	I2C0CONCLR = (I2CONCLR_SIC | I2CONCLR_STAC);
 168              		.loc 1 113 0
 169 007e 2823     		mov	r3, #40	@ tmp195,
 170 0080 4CE0     		b	.L34	@
 171              	.L5:
 117:Wire.cpp      **** 	if ( I2CWriteLength == 1 )
 172              		.loc 1 117 0
 173 0082 3049     		ldr	r1, .L43+36	@ tmp196,
 174 0084 0B68     		ldr	r3, [r1]	@ I2CWriteLength.22, I2CWriteLength
 175 0086 012B     		cmp	r3, #1	@ I2CWriteLength.22,
 176 0088 05D1     		bne	.L16	@,
 119:Wire.cpp      **** 	  I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 177              		.loc 1 119 0
 178 008a 8024     		mov	r4, #128	@ tmp286,
 179 008c E105     		lsl	r1, r4, #23	@ tmp197, tmp286,
 180 008e 1020     		mov	r0, #16	@ tmp198,
 181 0090 0860     		str	r0, [r1]	@ tmp198, MEM[(volatile uint32_t *)1073741824B]
 120:Wire.cpp      **** 	  I2CMasterState = I2C_NO_DATA;
 182              		.loc 1 120 0
 183 0092 0721     		mov	r1, #7	@ tmp200,
 184 0094 3FE0     		b	.L36	@
 185              	.L16:
 124:Wire.cpp      **** 	   I2C0DAT = I2CMasterBuffer[WrIndex++];
 186              		.loc 1 124 0
 187 0096 254B     		ldr	r3, .L43+12	@ tmp201,
 188 0098 05E0     		b	.L41	@
 189              	.L7:
 130:Wire.cpp      **** 	 if ( WrIndex < I2CWriteLength )
 190              		.loc 1 130 0
 191 009a 244B     		ldr	r3, .L43+12	@ tmp209,
 192 009c 294C     		ldr	r4, .L43+36	@ tmp210,
 193 009e 1868     		ldr	r0, [r3]	@ WrIndex.26, WrIndex
 194 00a0 2168     		ldr	r1, [r4]	@ I2CWriteLength.27, I2CWriteLength
 195 00a2 8842     		cmp	r0, r1	@ WrIndex.26, I2CWriteLength.27
 196 00a4 06D2     		bcs	.L18	@,
 197              	.L41:
 132:Wire.cpp      **** 	   I2C0DAT = I2CMasterBuffer[WrIndex++]; /* this should be the last one */
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 12


 198              		.loc 1 132 0
 199 00a6 1968     		ldr	r1, [r3]	@ WrIndex.28, WrIndex
 200 00a8 2548     		ldr	r0, .L43+32	@ tmp212,
 201 00aa 445C     		ldrb	r4, [r0, r1]	@ tmp214,* WrIndex.28
 202 00ac 2148     		ldr	r0, .L43+20	@ tmp215,
 203 00ae 0131     		add	r1, r1, #1	@ WrIndex.29,
 204 00b0 0460     		str	r4, [r0]	@ D.7222,
 205 00b2 31E0     		b	.L33	@
 206              	.L18:
 136:Wire.cpp      **** 	   if ( I2CReadLength != 0 )
 207              		.loc 1 136 0
 208 00b4 244B     		ldr	r3, .L43+40	@ tmp217,
 209 00b6 8024     		mov	r4, #128	@ tmp285,
 210 00b8 1868     		ldr	r0, [r3]	@ I2CReadLength.31, I2CReadLength
 211 00ba E305     		lsl	r3, r4, #23	@ tmp277, tmp285,
 212 00bc 0028     		cmp	r0, #0	@ I2CReadLength.31,
 213 00be 01D0     		beq	.L20	@,
 138:Wire.cpp      **** 		 I2C0CONSET = I2CONSET_STA;	/* Set Repeated-start flag */
 214              		.loc 1 138 0
 215 00c0 2021     		mov	r1, #32	@ tmp219,
 216 00c2 29E0     		b	.L33	@
 217              	.L20:
 142:Wire.cpp      **** 		 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 218              		.loc 1 142 0
 219 00c4 1021     		mov	r1, #16	@ tmp221,
 220 00c6 1960     		str	r1, [r3]	@ tmp221, MEM[(volatile uint32_t *)1073741824B]
 143:Wire.cpp      **** 		 I2CMasterState = I2C_OK;
 221              		.loc 1 143 0
 222 00c8 0C21     		mov	r1, #12	@ tmp223,
 223 00ca 24E0     		b	.L36	@
 224              	.L8:
 150:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 225              		.loc 1 150 0
 226 00cc 8023     		mov	r3, #128	@ tmp284,
 227 00ce 1021     		mov	r1, #16	@ tmp227,
 228 00d0 DC05     		lsl	r4, r3, #23	@ tmp226, tmp284,
 229 00d2 2160     		str	r1, [r4]	@ tmp227, MEM[(volatile uint32_t *)1073741824B]
 151:Wire.cpp      **** 	 I2CMasterState = I2C_NACK_ON_DATA;
 230              		.loc 1 151 0
 231 00d4 0921     		mov	r1, #9	@ tmp229,
 232 00d6 1EE0     		b	.L36	@
 233              	.L10:
 170:Wire.cpp      **** 	 I2CSlaveBuffer[RdIndex++] = I2C0DAT;
 234              		.loc 1 170 0
 235 00d8 154B     		ldr	r3, .L43+16	@ tmp241,
 236 00da 1648     		ldr	r0, .L43+20	@ tmp242,
 237 00dc 1968     		ldr	r1, [r3]	@ RdIndex.35, RdIndex
 238 00de 0468     		ldr	r4, [r0]	@ D.7239, MEM[(volatile uint32_t *)1073741832B]
 239 00e0 1548     		ldr	r0, .L43+24	@ tmp243,
 240 00e2 E4B2     		uxtb	r4, r4	@ D.7240, D.7239
 241 00e4 4454     		strb	r4, [r0, r1]	@ D.7240, I2CSlaveBuffer
 242 00e6 0131     		add	r1, r1, #1	@ RdIndex.36,
 243 00e8 1960     		str	r1, [r3]	@ RdIndex.36, RdIndex
 244              	.L40:
 171:Wire.cpp      **** 	 if ( (RdIndex + 1) < I2CReadLength )
 245              		.loc 1 171 0
 246 00ea 1C68     		ldr	r4, [r3]	@ RdIndex.38, RdIndex
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 13


 247 00ec 164B     		ldr	r3, .L43+40	@ tmp247,
 248 00ee 0134     		add	r4, r4, #1	@ tmp248,
 249 00f0 1968     		ldr	r1, [r3]	@ I2CReadLength.39, I2CReadLength
 250 00f2 0420     		mov	r0, #4	@ tmp278,
 251 00f4 8C42     		cmp	r4, r1	@ tmp248, I2CReadLength.39
 252 00f6 03D2     		bcs	.L23	@,
 173:Wire.cpp      **** 	   I2C0CONSET = I2CONSET_AA;	/* assert ACK after data is received */
 253              		.loc 1 173 0
 254 00f8 8024     		mov	r4, #128	@ tmp282,
 255 00fa E305     		lsl	r3, r4, #23	@ tmp249, tmp282,
 256 00fc 1860     		str	r0, [r3]	@ tmp278,
 257 00fe 0CE0     		b	.L35	@
 258              	.L23:
 177:Wire.cpp      **** 	   I2C0CONCLR = I2CONCLR_AAC;	/* assert NACK on last byte */
 259              		.loc 1 177 0
 260 0100 1060     		str	r0, [r2]	@ tmp278,
 261 0102 0AE0     		b	.L35	@
 262              	.L6:
 191:Wire.cpp      **** 	 I2C0CONSET = I2CONSET_STO;      /* Set Stop flag */
 263              		.loc 1 191 0
 264 0104 8020     		mov	r0, #128	@ tmp280,
 265 0106 1021     		mov	r1, #16	@ tmp267,
 266 0108 C405     		lsl	r4, r0, #23	@ tmp266, tmp280,
 267 010a 2160     		str	r1, [r4]	@ tmp267, MEM[(volatile uint32_t *)1073741824B]
 192:Wire.cpp      **** 	 I2CMasterState = I2C_NACK_ON_ADDRESS;
 268              		.loc 1 192 0
 269 010c 0B49     		ldr	r1, .L43+28	@ tmp268,
 270 010e 0823     		mov	r3, #8	@ tmp269,
 271 0110 0B60     		str	r3, [r1]	@ tmp269, I2CMasterState
 272 0112 03E0     		b	.L34	@
 273              	.L2:
 199:Wire.cpp      **** 	 I2CMasterState = I2C_ARBITRATION_LOST;
 274              		.loc 1 199 0
 275 0114 0A21     		mov	r1, #10	@ tmp273,
 276              	.L36:
 277 0116 094B     		ldr	r3, .L43+28	@ tmp272,
 278              	.L33:
 279 0118 1960     		str	r1, [r3]	@ tmp273,
 280              	.L35:
 200:Wire.cpp      **** 	 I2C0CONCLR = I2CONCLR_SIC;	
 281              		.loc 1 200 0
 282 011a 0823     		mov	r3, #8	@ tmp275,
 283              	.L34:
 284 011c 1360     		str	r3, [r2]	@ tmp275,
 285              	.LBE11:
 204:Wire.cpp      ****  }
 286              		.loc 1 204 0
 287              		@ sp needed for prologue	@
 288 011e 10BD     		pop	{r4, pc}
 289              	.L44:
 290              		.align	2
 291              	.L43:
 292 0120 00000000 		.word	.LANCHOR0
 293 0124 04000040 		.word	1073741828
 294 0128 18000040 		.word	1073741848
 295 012c 00000000 		.word	.LANCHOR1
 296 0130 00000000 		.word	.LANCHOR3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 14


 297 0134 08000040 		.word	1073741832
 298 0138 00000000 		.word	.LANCHOR7
 299 013c 00000000 		.word	.LANCHOR5
 300 0140 00000000 		.word	.LANCHOR2
 301 0144 00000000 		.word	.LANCHOR4
 302 0148 00000000 		.word	.LANCHOR6
 303              		.cfi_endproc
 304              	.LFE51:
 305              		.size	_Z14I2C_IRQHandlerv, .-_Z14I2C_IRQHandlerv
 306              		.section	.text._Z7I2CInitm,"ax",%progbits
 307              		.align	1
 308              		.global	_Z7I2CInitm
 309              		.code	16
 310              		.thumb_func
 311              		.type	_Z7I2CInitm, %function
 312              	_Z7I2CInitm:
 313              	.LFB52:
 217:Wire.cpp      ****  {
 314              		.loc 1 217 0
 315              		.cfi_startproc
 316              	.LVL2:
 218:Wire.cpp      ****    PRESETCTRL |= (0x1<<1);
 317              		.loc 1 218 0
 318 0000 1D4B     		ldr	r3, .L47	@ tmp154,
 319 0002 0221     		mov	r1, #2	@ tmp155,
 320 0004 1A68     		ldr	r2, [r3]	@ D.7159, MEM[(volatile uint32_t *)1074036740B]
 217:Wire.cpp      ****  {
 321              		.loc 1 217 0
 322 0006 30B5     		push	{r4, r5, lr}	@
 323              	.LCFI1:
 324              		.cfi_def_cfa_offset 12
 325              		.cfi_offset 4, -12
 326              		.cfi_offset 5, -8
 327              		.cfi_offset 14, -4
 218:Wire.cpp      ****    PRESETCTRL |= (0x1<<1);
 328              		.loc 1 218 0
 329 0008 0A43     		orr	r2, r1	@ D.7160, tmp155
 219:Wire.cpp      ****    SYSAHBCLKCTRL |= (1<<5);
 330              		.loc 1 219 0
 331 000a 1C4C     		ldr	r4, .L47+4	@ tmp157,
 218:Wire.cpp      ****    PRESETCTRL |= (0x1<<1);
 332              		.loc 1 218 0
 333 000c 1A60     		str	r2, [r3]	@ D.7160, MEM[(volatile uint32_t *)1074036740B]
 219:Wire.cpp      ****    SYSAHBCLKCTRL |= (1<<5);
 334              		.loc 1 219 0
 335 000e 2568     		ldr	r5, [r4]	@ D.7162, MEM[(volatile uint32_t *)1074036864B]
 336 0010 2023     		mov	r3, #32	@ tmp158,
 220:Wire.cpp      ****    IOCON_PIO0_4 &= ~0x3F;	/*  I2C I/O config */
 337              		.loc 1 220 0
 338 0012 1B4A     		ldr	r2, .L47+8	@ tmp160,
 219:Wire.cpp      ****    SYSAHBCLKCTRL |= (1<<5);
 339              		.loc 1 219 0
 340 0014 1D43     		orr	r5, r3	@ D.7163, tmp158
 341 0016 2560     		str	r5, [r4]	@ D.7163, MEM[(volatile uint32_t *)1074036864B]
 220:Wire.cpp      ****    IOCON_PIO0_4 &= ~0x3F;	/*  I2C I/O config */
 342              		.loc 1 220 0
 343 0018 1168     		ldr	r1, [r2]	@ D.7165, MEM[(volatile uint32_t *)1074020400B]
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 15


 344 001a 3F24     		mov	r4, #63	@ tmp161,
 345 001c A143     		bic	r1, r4	@ D.7166, tmp161
 346 001e 1160     		str	r1, [r2]	@ D.7166, MEM[(volatile uint32_t *)1074020400B]
 221:Wire.cpp      ****    IOCON_PIO0_4 |= 0x01;		/* I2C SCL */
 347              		.loc 1 221 0
 348 0020 1568     		ldr	r5, [r2]	@ D.7167, MEM[(volatile uint32_t *)1074020400B]
 349 0022 0121     		mov	r1, #1	@ tmp164,
 222:Wire.cpp      ****    IOCON_PIO0_5 &= ~0x3F;	
 350              		.loc 1 222 0
 351 0024 174B     		ldr	r3, .L47+12	@ tmp166,
 221:Wire.cpp      ****    IOCON_PIO0_4 |= 0x01;		/* I2C SCL */
 352              		.loc 1 221 0
 353 0026 0D43     		orr	r5, r1	@ D.7168, tmp164
 354 0028 1560     		str	r5, [r2]	@ D.7168, MEM[(volatile uint32_t *)1074020400B]
 222:Wire.cpp      ****    IOCON_PIO0_5 &= ~0x3F;	
 355              		.loc 1 222 0
 356 002a 1D68     		ldr	r5, [r3]	@ D.7170, MEM[(volatile uint32_t *)1074020404B]
 357 002c A543     		bic	r5, r4	@ D.7170, tmp161
 358 002e 1D60     		str	r5, [r3]	@ D.7171, MEM[(volatile uint32_t *)1074020404B]
 223:Wire.cpp      ****    IOCON_PIO0_5 |= 0x01;		/* I2C SDA */
 359              		.loc 1 223 0
 360 0030 1D68     		ldr	r5, [r3]	@ D.7172, MEM[(volatile uint32_t *)1074020404B]
 226:Wire.cpp      ****    I2C0CONCLR = I2CONCLR_AAC | I2CONCLR_SIC | I2CONCLR_STAC | I2CONCLR_I2ENC;    
 361              		.loc 1 226 0
 362 0032 6C24     		mov	r4, #108	@ tmp173,
 223:Wire.cpp      ****    IOCON_PIO0_5 |= 0x01;		/* I2C SDA */
 363              		.loc 1 223 0
 364 0034 2943     		orr	r1, r5	@ D.7173, D.7172
 365 0036 1960     		str	r1, [r3]	@ D.7173, MEM[(volatile uint32_t *)1074020404B]
 226:Wire.cpp      ****    I2C0CONCLR = I2CONCLR_AAC | I2CONCLR_SIC | I2CONCLR_STAC | I2CONCLR_I2ENC;    
 366              		.loc 1 226 0
 367 0038 1349     		ldr	r1, .L47+16	@ tmp172,
 368 003a 0C60     		str	r4, [r1]	@ tmp173, MEM[(volatile uint32_t *)1073741848B]
 230:Wire.cpp      ****    IOCON_PIO0_4 |= (0x2<<8);
 369              		.loc 1 230 0
 370 003c 1568     		ldr	r5, [r2]	@ D.7175, MEM[(volatile uint32_t *)1074020400B]
 371 003e 8024     		mov	r4, #128	@ tmp194,
 372 0040 A100     		lsl	r1, r4, #2	@ tmp175, tmp194,
 373 0042 0D43     		orr	r5, r1	@ D.7176, tmp175
 374 0044 1560     		str	r5, [r2]	@ D.7176, MEM[(volatile uint32_t *)1074020400B]
 231:Wire.cpp      ****    IOCON_PIO0_5 |= (0x2<<8);
 375              		.loc 1 231 0
 376 0046 1A68     		ldr	r2, [r3]	@ D.7177, MEM[(volatile uint32_t *)1074020404B]
 232:Wire.cpp      ****    I2C0SCLL   = I2SCLL_HS_SCLL;
 377              		.loc 1 232 0
 378 0048 104D     		ldr	r5, .L47+20	@ tmp180,
 231:Wire.cpp      ****    IOCON_PIO0_5 |= (0x2<<8);
 379              		.loc 1 231 0
 380 004a 1143     		orr	r1, r2	@ D.7178, D.7177
 233:Wire.cpp      ****    I2C0SCLH   = I2SCLH_HS_SCLH;
 381              		.loc 1 233 0
 382 004c 104C     		ldr	r4, .L47+24	@ tmp182,
 231:Wire.cpp      ****    IOCON_PIO0_5 |= (0x2<<8);
 383              		.loc 1 231 0
 384 004e 1960     		str	r1, [r3]	@ D.7178, MEM[(volatile uint32_t *)1074020404B]
 232:Wire.cpp      ****    I2C0SCLL   = I2SCLL_HS_SCLL;
 385              		.loc 1 232 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 16


 386 0050 3C23     		mov	r3, #60	@ tmp181,
 387 0052 2B60     		str	r3, [r5]	@ tmp181, MEM[(volatile uint32_t *)1073741844B]
 233:Wire.cpp      ****    I2C0SCLH   = I2SCLH_HS_SCLH;
 388              		.loc 1 233 0
 389 0054 2360     		str	r3, [r4]	@ tmp181, MEM[(volatile uint32_t *)1073741840B]
 239:Wire.cpp      ****    if ( I2cMode == I2CSLAVE )
 390              		.loc 1 239 0
 391 0056 0228     		cmp	r0, #2	@ I2cMode,
 392 0058 02D1     		bne	.L46	@,
 241:Wire.cpp      **** 	 I2C0ADR0 = PCF8594_ADDR;
 393              		.loc 1 241 0
 394 005a 0E49     		ldr	r1, .L47+28	@ tmp184,
 395 005c A020     		mov	r0, #160	@ tmp185,
 396              	.LVL3:
 397 005e 0860     		str	r0, [r1]	@ tmp185, MEM[(volatile uint32_t *)1073741836B]
 398              	.L46:
 245:Wire.cpp      ****    bitSet(ISER, 15);
 399              		.loc 1 245 0
 400 0060 0D4B     		ldr	r3, .L47+32	@ tmp186,
 401 0062 8022     		mov	r2, #128	@ tmp192,
 402 0064 1D68     		ldr	r5, [r3]	@ D.7186, MEM[(volatile uint32_t *)3758153984B]
 403 0066 1402     		lsl	r4, r2, #8	@ tmp187, tmp192,
 404 0068 2C43     		orr	r4, r5	@ D.7187, D.7186
 247:Wire.cpp      ****    I2C0CONSET = I2CONSET_I2EN;
 405              		.loc 1 247 0
 406 006a 8021     		mov	r1, #128	@ tmp193,
 245:Wire.cpp      ****    bitSet(ISER, 15);
 407              		.loc 1 245 0
 408 006c 1C60     		str	r4, [r3]	@ D.7187, MEM[(volatile uint32_t *)3758153984B]
 247:Wire.cpp      ****    I2C0CONSET = I2CONSET_I2EN;
 409              		.loc 1 247 0
 410 006e 4020     		mov	r0, #64	@ tmp190,
 411 0070 CB05     		lsl	r3, r1, #23	@ tmp189, tmp193,
 412 0072 1860     		str	r0, [r3]	@ tmp190, MEM[(volatile uint32_t *)1073741824B]
 249:Wire.cpp      ****  }
 413              		.loc 1 249 0
 414              		@ sp needed for prologue	@
 415 0074 0120     		mov	r0, #1	@,
 416 0076 30BD     		pop	{r4, r5, pc}
 417              	.L48:
 418              		.align	2
 419              	.L47:
 420 0078 04800440 		.word	1074036740
 421 007c 80800440 		.word	1074036864
 422 0080 30400440 		.word	1074020400
 423 0084 34400440 		.word	1074020404
 424 0088 18000040 		.word	1073741848
 425 008c 14000040 		.word	1073741844
 426 0090 10000040 		.word	1073741840
 427 0094 0C000040 		.word	1073741836
 428 0098 00E100E0 		.word	-536813312
 429              		.cfi_endproc
 430              	.LFE52:
 431              		.size	_Z7I2CInitm, .-_Z7I2CInitm
 432              		.section	.text._Z9I2CEnginev,"ax",%progbits
 433              		.align	1
 434              		.global	_Z9I2CEnginev
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 17


 435              		.code	16
 436              		.thumb_func
 437              		.type	_Z9I2CEnginev, %function
 438              	_Z9I2CEnginev:
 439              	.LFB53:
 269:Wire.cpp      ****  {
 440              		.loc 1 269 0
 441              		.cfi_startproc
 270:Wire.cpp      ****    RdIndex = 0;
 442              		.loc 1 270 0
 443 0000 0F4A     		ldr	r2, .L54	@ tmp140,
 271:Wire.cpp      ****    WrIndex = 0;
 444              		.loc 1 271 0
 445 0002 1048     		ldr	r0, .L54+4	@ tmp142,
 270:Wire.cpp      ****    RdIndex = 0;
 446              		.loc 1 270 0
 447 0004 0023     		mov	r3, #0	@ tmp141,
 448 0006 1360     		str	r3, [r2]	@ tmp141, RdIndex
 271:Wire.cpp      ****    WrIndex = 0;
 449              		.loc 1 271 0
 450 0008 0360     		str	r3, [r0]	@ tmp141, WrIndex
 274:Wire.cpp      ****    I2C0CONSET = I2CONSET_STA;	/* Set Start flag */
 451              		.loc 1 274 0
 452 000a 8023     		mov	r3, #128	@ tmp160,
 453 000c DA05     		lsl	r2, r3, #23	@ tmp144, tmp160,
 276:Wire.cpp      ****    I2CMasterState = I2C_BUSY;	
 454              		.loc 1 276 0
 455 000e 0E4B     		ldr	r3, .L54+8	@ tmp146,
 274:Wire.cpp      ****    I2C0CONSET = I2CONSET_STA;	/* Set Start flag */
 456              		.loc 1 274 0
 457 0010 2021     		mov	r1, #32	@ tmp145,
 276:Wire.cpp      ****    I2CMasterState = I2C_BUSY;	
 458              		.loc 1 276 0
 459 0012 0620     		mov	r0, #6	@ tmp147,
 274:Wire.cpp      ****    I2C0CONSET = I2CONSET_STA;	/* Set Start flag */
 460              		.loc 1 274 0
 461 0014 1160     		str	r1, [r2]	@ tmp145, MEM[(volatile uint32_t *)1073741824B]
 276:Wire.cpp      ****    I2CMasterState = I2C_BUSY;	
 462              		.loc 1 276 0
 463 0016 1860     		str	r0, [r3]	@ tmp147, I2CMasterState
 464              	.L50:
 278:Wire.cpp      ****    while ( I2CMasterState == I2C_BUSY )
 465              		.loc 1 278 0 discriminator 1
 466 0018 1968     		ldr	r1, [r3]	@ I2CMasterState.12, I2CMasterState
 467 001a 0629     		cmp	r1, #6	@ I2CMasterState.12,
 468 001c 0BD1     		bne	.L52	@,
 469              	.L53:
 280:Wire.cpp      **** 	 if ( timeout >= MAX_TIMEOUT )
 470              		.loc 1 280 0
 471 001e 0B4A     		ldr	r2, .L54+12	@ tmp148,
 472 0020 0B49     		ldr	r1, .L54+16	@ tmp149,
 473 0022 1068     		ldr	r0, [r2]	@ timeout.14, timeout
 474 0024 8842     		cmp	r0, r1	@ timeout.14, tmp149
 475 0026 02D9     		bls	.L51	@,
 282:Wire.cpp      **** 	   I2CMasterState = I2C_TIME_OUT;
 476              		.loc 1 282 0
 477 0028 0B22     		mov	r2, #11	@ tmp151,
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 18


 478 002a 1A60     		str	r2, [r3]	@ tmp151, I2CMasterState
 283:Wire.cpp      **** 	   break;
 479              		.loc 1 283 0
 480 002c 03E0     		b	.L52	@
 481              	.L51:
 285:Wire.cpp      **** 	 timeout++;
 482              		.loc 1 285 0
 483 002e 1068     		ldr	r0, [r2]	@ timeout.15, timeout
 484 0030 0130     		add	r0, r0, #1	@ timeout.16,
 485 0032 1060     		str	r0, [r2]	@ timeout.16, timeout
 486 0034 F0E7     		b	.L50	@
 487              	.L52:
 287:Wire.cpp      ****    I2C0CONCLR = I2CONCLR_STAC;
 488              		.loc 1 287 0
 489 0036 0748     		ldr	r0, .L54+20	@ tmp155,
 490 0038 2021     		mov	r1, #32	@ tmp156,
 491 003a 0160     		str	r1, [r0]	@ tmp156, MEM[(volatile uint32_t *)1073741848B]
 289:Wire.cpp      ****    return ( I2CMasterState );
 492              		.loc 1 289 0
 493 003c 1868     		ldr	r0, [r3]	@ D.7156, I2CMasterState
 290:Wire.cpp      ****  }
 494              		.loc 1 290 0
 495              		@ sp needed for prologue	@
 496 003e 7047     		bx	lr
 497              	.L55:
 498              		.align	2
 499              	.L54:
 500 0040 00000000 		.word	.LANCHOR3
 501 0044 00000000 		.word	.LANCHOR1
 502 0048 00000000 		.word	.LANCHOR5
 503 004c 00000000 		.word	.LANCHOR0
 504 0050 FEFFFF00 		.word	16777214
 505 0054 18000040 		.word	1073741848
 506              		.cfi_endproc
 507              	.LFE53:
 508              		.size	_Z9I2CEnginev, .-_Z9I2CEnginev
 509              		.section	.text._ZN7TwoWireC2Ev,"ax",%progbits
 510              		.align	1
 511              		.global	_ZN7TwoWireC2Ev
 512              		.code	16
 513              		.thumb_func
 514              		.type	_ZN7TwoWireC2Ev, %function
 515              	_ZN7TwoWireC2Ev:
 516              	.LFB55:
 294:Wire.cpp      ****  TwoWire::TwoWire()
 517              		.loc 1 294 0
 518              		.cfi_startproc
 519              	.LVL4:
 296:Wire.cpp      ****  }
 520              		.loc 1 296 0
 521              		@ sp needed for prologue	@
 522 0000 7047     		bx	lr
 523              		.cfi_endproc
 524              	.LFE55:
 525              		.size	_ZN7TwoWireC2Ev, .-_ZN7TwoWireC2Ev
 526              		.global	_ZN7TwoWireC1Ev
 527              		.thumb_set _ZN7TwoWireC1Ev,_ZN7TwoWireC2Ev
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 19


 528              		.section	.text._ZN7TwoWire5beginEv,"ax",%progbits
 529              		.align	1
 530              		.global	_ZN7TwoWire5beginEv
 531              		.code	16
 532              		.thumb_func
 533              		.type	_ZN7TwoWire5beginEv, %function
 534              	_ZN7TwoWire5beginEv:
 535              	.LFB57:
 301:Wire.cpp      ****  {
 536              		.loc 1 301 0
 537              		.cfi_startproc
 538              	.LVL5:
 539 0000 08B5     		push	{r3, lr}	@
 540              	.LCFI2:
 541              		.cfi_def_cfa_offset 8
 542              		.cfi_offset 3, -8
 543              		.cfi_offset 14, -4
 302:Wire.cpp      ****    I2CInit(I2CMASTER);
 544              		.loc 1 302 0
 545 0002 0120     		mov	r0, #1	@,
 546              	.LVL6:
 547 0004 FFF7FEFF 		bl	_Z7I2CInitm	@
 548              	.LVL7:
 303:Wire.cpp      ****  }
 549              		.loc 1 303 0
 550              		@ sp needed for prologue	@
 551 0008 08BD     		pop	{r3, pc}
 552              		.cfi_endproc
 553              	.LFE57:
 554              		.size	_ZN7TwoWire5beginEv, .-_ZN7TwoWire5beginEv
 555              		.section	.text._ZN7TwoWire11requestFromEhhh,"ax",%progbits
 556              		.align	1
 557              		.global	_ZN7TwoWire11requestFromEhhh
 558              		.code	16
 559              		.thumb_func
 560              		.type	_ZN7TwoWire11requestFromEhhh, %function
 561              	_ZN7TwoWire11requestFromEhhh:
 562              	.LFB58:
 306:Wire.cpp      ****  {
 563              		.loc 1 306 0
 564              		.cfi_startproc
 565              	.LVL8:
 307:Wire.cpp      ****    I2CReadLength = quantity;
 566              		.loc 1 307 0
 567 0000 074B     		ldr	r3, .L60	@ tmp144,
 568              	.LVL9:
 308:Wire.cpp      ****    I2CReadIndex = 0;
 569              		.loc 1 308 0
 570 0002 0020     		mov	r0, #0	@ tmp146,
 571              	.LVL10:
 307:Wire.cpp      ****    I2CReadLength = quantity;
 572              		.loc 1 307 0
 573 0004 1A60     		str	r2, [r3]	@ quantity, I2CReadLength
 309:Wire.cpp      ****    I2CMasterBuffer[1] = address;
 574              		.loc 1 309 0
 575 0006 074B     		ldr	r3, .L60+4	@ tmp147,
 308:Wire.cpp      ****    I2CReadIndex = 0;
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 20


 576              		.loc 1 308 0
 577 0008 074A     		ldr	r2, .L60+8	@ tmp145,
 578              	.LVL11:
 313:Wire.cpp      ****  }
 579              		.loc 1 313 0
 580              		@ sp needed for prologue	@
 308:Wire.cpp      ****    I2CReadIndex = 0;
 581              		.loc 1 308 0
 582 000a 1060     		str	r0, [r2]	@ tmp146, I2CReadIndex
 309:Wire.cpp      ****    I2CMasterBuffer[1] = address;
 583              		.loc 1 309 0
 584 000c 5970     		strb	r1, [r3, #1]	@ address, I2CMasterBuffer
 310:Wire.cpp      ****    I2CMasterBuffer[2] = I2CMasterBuffer[0] | RD_BIT;
 585              		.loc 1 310 0
 586 000e 1A78     		ldrb	r2, [r3]	@ tmp151,
 587 0010 0121     		mov	r1, #1	@ tmp153,
 588              	.LVL12:
 589 0012 0A43     		orr	r2, r1	@ D.7136, tmp153
 590 0014 9A70     		strb	r2, [r3, #2]	@ D.7136, I2CMasterBuffer
 311:Wire.cpp      ****    I2CWriteLength += 1;
 591              		.loc 1 311 0
 592 0016 054B     		ldr	r3, .L60+12	@ tmp156,
 593 0018 1A68     		ldr	r2, [r3]	@ I2CWriteLength.9, I2CWriteLength
 594 001a 5118     		add	r1, r2, r1	@ I2CWriteLength.10, I2CWriteLength.9,
 595 001c 1960     		str	r1, [r3]	@ I2CWriteLength.10, I2CWriteLength
 313:Wire.cpp      ****  }
 596              		.loc 1 313 0
 597 001e 7047     		bx	lr
 598              	.L61:
 599              		.align	2
 600              	.L60:
 601 0020 00000000 		.word	.LANCHOR6
 602 0024 00000000 		.word	.LANCHOR2
 603 0028 00000000 		.word	.LANCHOR8
 604 002c 00000000 		.word	.LANCHOR4
 605              		.cfi_endproc
 606              	.LFE58:
 607              		.size	_ZN7TwoWire11requestFromEhhh, .-_ZN7TwoWire11requestFromEhhh
 608              		.section	.text._ZN7TwoWire11requestFromEhh,"ax",%progbits
 609              		.align	1
 610              		.global	_ZN7TwoWire11requestFromEhh
 611              		.code	16
 612              		.thumb_func
 613              		.type	_ZN7TwoWire11requestFromEhh, %function
 614              	_ZN7TwoWire11requestFromEhh:
 615              	.LFB59:
 316:Wire.cpp      ****  {
 616              		.loc 1 316 0
 617              		.cfi_startproc
 618              	.LVL13:
 619 0000 08B5     		push	{r3, lr}	@
 620              	.LCFI3:
 621              		.cfi_def_cfa_offset 8
 622              		.cfi_offset 3, -8
 623              		.cfi_offset 14, -4
 317:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 624              		.loc 1 317 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 21


 625 0002 0123     		mov	r3, #1	@,
 626 0004 FFF7FEFF 		bl	_ZN7TwoWire11requestFromEhhh	@
 627              	.LVL14:
 318:Wire.cpp      ****  }
 628              		.loc 1 318 0
 629              		@ sp needed for prologue	@
 630 0008 08BD     		pop	{r3, pc}
 631              		.cfi_endproc
 632              	.LFE59:
 633              		.size	_ZN7TwoWire11requestFromEhh, .-_ZN7TwoWire11requestFromEhh
 634              		.section	.text._ZN7TwoWire11requestFromEii,"ax",%progbits
 635              		.align	1
 636              		.global	_ZN7TwoWire11requestFromEii
 637              		.code	16
 638              		.thumb_func
 639              		.type	_ZN7TwoWire11requestFromEii, %function
 640              	_ZN7TwoWire11requestFromEii:
 641              	.LFB60:
 321:Wire.cpp      ****  {
 642              		.loc 1 321 0
 643              		.cfi_startproc
 644              	.LVL15:
 645 0000 08B5     		push	{r3, lr}	@
 646              	.LCFI4:
 647              		.cfi_def_cfa_offset 8
 648              		.cfi_offset 3, -8
 649              		.cfi_offset 14, -4
 322:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)true);
 650              		.loc 1 322 0
 651 0002 C9B2     		uxtb	r1, r1	@ address, address
 652              	.LVL16:
 653 0004 D2B2     		uxtb	r2, r2	@ quantity, quantity
 654              	.LVL17:
 655 0006 0123     		mov	r3, #1	@,
 656 0008 FFF7FEFF 		bl	_ZN7TwoWire11requestFromEhhh	@
 657              	.LVL18:
 323:Wire.cpp      ****  }
 658              		.loc 1 323 0
 659              		@ sp needed for prologue	@
 660 000c 08BD     		pop	{r3, pc}
 661              		.cfi_endproc
 662              	.LFE60:
 663              		.size	_ZN7TwoWire11requestFromEii, .-_ZN7TwoWire11requestFromEii
 664              		.section	.text._ZN7TwoWire11requestFromEiii,"ax",%progbits
 665              		.align	1
 666              		.global	_ZN7TwoWire11requestFromEiii
 667              		.code	16
 668              		.thumb_func
 669              		.type	_ZN7TwoWire11requestFromEiii, %function
 670              	_ZN7TwoWire11requestFromEiii:
 671              	.LFB61:
 326:Wire.cpp      ****  {
 672              		.loc 1 326 0
 673              		.cfi_startproc
 674              	.LVL19:
 675 0000 08B5     		push	{r3, lr}	@
 676              	.LCFI5:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 22


 677              		.cfi_def_cfa_offset 8
 678              		.cfi_offset 3, -8
 679              		.cfi_offset 14, -4
 327:Wire.cpp      ****    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)sendStop);
 680              		.loc 1 327 0
 681 0002 C9B2     		uxtb	r1, r1	@ address, address
 682              	.LVL20:
 683 0004 D2B2     		uxtb	r2, r2	@ quantity, quantity
 684              	.LVL21:
 685 0006 DBB2     		uxtb	r3, r3	@ sendStop, sendStop
 686              	.LVL22:
 687 0008 FFF7FEFF 		bl	_ZN7TwoWire11requestFromEhhh	@
 688              	.LVL23:
 328:Wire.cpp      ****  }
 689              		.loc 1 328 0
 690              		@ sp needed for prologue	@
 691 000c 08BD     		pop	{r3, pc}
 692              		.cfi_endproc
 693              	.LFE61:
 694              		.size	_ZN7TwoWire11requestFromEiii, .-_ZN7TwoWire11requestFromEiii
 695              		.section	.text._ZN7TwoWire17beginTransmissionEh,"ax",%progbits
 696              		.align	1
 697              		.global	_ZN7TwoWire17beginTransmissionEh
 698              		.code	16
 699              		.thumb_func
 700              		.type	_ZN7TwoWire17beginTransmissionEh, %function
 701              	_ZN7TwoWire17beginTransmissionEh:
 702              	.LFB62:
 331:Wire.cpp      ****  {
 703              		.loc 1 331 0
 704              		.cfi_startproc
 705              	.LVL24:
 332:Wire.cpp      ****    I2CWriteLength = 1;
 706              		.loc 1 332 0
 707 0000 044B     		ldr	r3, .L66	@ tmp136,
 708 0002 0122     		mov	r2, #1	@ tmp137,
 709 0004 1A60     		str	r2, [r3]	@ tmp137, I2CWriteLength
 333:Wire.cpp      ****    I2CReadLength = 0;
 710              		.loc 1 333 0
 711 0006 044A     		ldr	r2, .L66+4	@ tmp138,
 334:Wire.cpp      ****    I2CMasterBuffer[0] = address;
 712              		.loc 1 334 0
 713 0008 044B     		ldr	r3, .L66+8	@ tmp140,
 333:Wire.cpp      ****    I2CReadLength = 0;
 714              		.loc 1 333 0
 715 000a 0020     		mov	r0, #0	@ tmp139,
 716              	.LVL25:
 717 000c 1060     		str	r0, [r2]	@ tmp139, I2CReadLength
 335:Wire.cpp      ****  }
 718              		.loc 1 335 0
 719              		@ sp needed for prologue	@
 334:Wire.cpp      ****    I2CMasterBuffer[0] = address;
 720              		.loc 1 334 0
 721 000e 1970     		strb	r1, [r3]	@ address, I2CMasterBuffer
 335:Wire.cpp      ****  }
 722              		.loc 1 335 0
 723 0010 7047     		bx	lr
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 23


 724              	.L67:
 725 0012 C046     		.align	2
 726              	.L66:
 727 0014 00000000 		.word	.LANCHOR4
 728 0018 00000000 		.word	.LANCHOR6
 729 001c 00000000 		.word	.LANCHOR2
 730              		.cfi_endproc
 731              	.LFE62:
 732              		.size	_ZN7TwoWire17beginTransmissionEh, .-_ZN7TwoWire17beginTransmissionEh
 733              		.section	.text._ZN7TwoWire17beginTransmissionEi,"ax",%progbits
 734              		.align	1
 735              		.global	_ZN7TwoWire17beginTransmissionEi
 736              		.code	16
 737              		.thumb_func
 738              		.type	_ZN7TwoWire17beginTransmissionEi, %function
 739              	_ZN7TwoWire17beginTransmissionEi:
 740              	.LFB63:
 338:Wire.cpp      ****  {
 741              		.loc 1 338 0
 742              		.cfi_startproc
 743              	.LVL26:
 744              	.LBB12:
 745              	.LBB13:
 332:Wire.cpp      ****    I2CWriteLength = 1;
 746              		.loc 1 332 0
 747 0000 044B     		ldr	r3, .L69	@ tmp137,
 748 0002 0122     		mov	r2, #1	@ tmp138,
 749 0004 1A60     		str	r2, [r3]	@ tmp138, I2CWriteLength
 333:Wire.cpp      ****    I2CReadLength = 0;
 750              		.loc 1 333 0
 751 0006 044A     		ldr	r2, .L69+4	@ tmp139,
 334:Wire.cpp      ****    I2CMasterBuffer[0] = address;
 752              		.loc 1 334 0
 753 0008 044B     		ldr	r3, .L69+8	@ tmp141,
 754              	.LBE13:
 755              	.LBE12:
 339:Wire.cpp      ****    beginTransmission((uint8_t)address);
 756              		.loc 1 339 0
 757 000a C9B2     		uxtb	r1, r1	@ D.7122, address
 758              	.LVL27:
 759              	.LBB16:
 760              	.LBB14:
 333:Wire.cpp      ****    I2CReadLength = 0;
 761              		.loc 1 333 0
 762 000c 0020     		mov	r0, #0	@ tmp140,
 763              	.LVL28:
 764 000e 1060     		str	r0, [r2]	@ tmp140, I2CReadLength
 765              	.LBE14:
 766              	.LBE16:
 340:Wire.cpp      ****  }
 767              		.loc 1 340 0
 768              		@ sp needed for prologue	@
 769              	.LBB17:
 770              	.LBB15:
 334:Wire.cpp      ****    I2CMasterBuffer[0] = address;
 771              		.loc 1 334 0
 772 0010 1970     		strb	r1, [r3]	@ D.7122, I2CMasterBuffer
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 24


 773              	.LBE15:
 774              	.LBE17:
 340:Wire.cpp      ****  }
 775              		.loc 1 340 0
 776 0012 7047     		bx	lr
 777              	.L70:
 778              		.align	2
 779              	.L69:
 780 0014 00000000 		.word	.LANCHOR4
 781 0018 00000000 		.word	.LANCHOR6
 782 001c 00000000 		.word	.LANCHOR2
 783              		.cfi_endproc
 784              	.LFE63:
 785              		.size	_ZN7TwoWire17beginTransmissionEi, .-_ZN7TwoWire17beginTransmissionEi
 786              		.section	.text._ZN7TwoWire15endTransmissionEh,"ax",%progbits
 787              		.align	1
 788              		.global	_ZN7TwoWire15endTransmissionEh
 789              		.code	16
 790              		.thumb_func
 791              		.type	_ZN7TwoWire15endTransmissionEh, %function
 792              	_ZN7TwoWire15endTransmissionEh:
 793              	.LFB64:
 356:Wire.cpp      **** {
 794              		.loc 1 356 0
 795              		.cfi_startproc
 796              	.LVL29:
 797 0000 08B5     		push	{r3, lr}	@
 798              	.LCFI6:
 799              		.cfi_def_cfa_offset 8
 800              		.cfi_offset 3, -8
 801              		.cfi_offset 14, -4
 357:Wire.cpp      ****   return I2CEngine();
 802              		.loc 1 357 0
 803 0002 FFF7FEFF 		bl	_Z9I2CEnginev	@
 804              	.LVL30:
 358:Wire.cpp      **** }
 805              		.loc 1 358 0
 806              		@ sp needed for prologue	@
 357:Wire.cpp      ****   return I2CEngine();
 807              		.loc 1 357 0
 808 0006 C0B2     		uxtb	r0, r0	@ D.7120, D.7120
 358:Wire.cpp      **** }
 809              		.loc 1 358 0
 810 0008 08BD     		pop	{r3, pc}
 811              		.cfi_endproc
 812              	.LFE64:
 813              		.size	_ZN7TwoWire15endTransmissionEh, .-_ZN7TwoWire15endTransmissionEh
 814              		.section	.text._ZN7TwoWire15endTransmissionEv,"ax",%progbits
 815              		.align	1
 816              		.global	_ZN7TwoWire15endTransmissionEv
 817              		.code	16
 818              		.thumb_func
 819              		.type	_ZN7TwoWire15endTransmissionEv, %function
 820              	_ZN7TwoWire15endTransmissionEv:
 821              	.LFB65:
 364:Wire.cpp      **** {
 822              		.loc 1 364 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 25


 823              		.cfi_startproc
 824              	.LVL31:
 825 0000 08B5     		push	{r3, lr}	@
 826              	.LCFI7:
 827              		.cfi_def_cfa_offset 8
 828              		.cfi_offset 3, -8
 829              		.cfi_offset 14, -4
 830              	.LBB18:
 831              	.LBB19:
 357:Wire.cpp      ****   return I2CEngine();
 832              		.loc 1 357 0
 833 0002 FFF7FEFF 		bl	_Z9I2CEnginev	@
 834              	.LVL32:
 835              	.LBE19:
 836              	.LBE18:
 366:Wire.cpp      **** }
 837              		.loc 1 366 0
 838              		@ sp needed for prologue	@
 365:Wire.cpp      ****   return endTransmission(true);
 839              		.loc 1 365 0
 840 0006 C0B2     		uxtb	r0, r0	@ D.7297, D.7297
 366:Wire.cpp      **** }
 841              		.loc 1 366 0
 842 0008 08BD     		pop	{r3, pc}
 843              		.cfi_endproc
 844              	.LFE65:
 845              		.size	_ZN7TwoWire15endTransmissionEv, .-_ZN7TwoWire15endTransmissionEv
 846              		.section	.text._ZN7TwoWire5writeEh,"ax",%progbits
 847              		.align	1
 848              		.global	_ZN7TwoWire5writeEh
 849              		.code	16
 850              		.thumb_func
 851              		.type	_ZN7TwoWire5writeEh, %function
 852              	_ZN7TwoWire5writeEh:
 853              	.LFB66:
 369:Wire.cpp      **** {
 854              		.loc 1 369 0
 855              		.cfi_startproc
 856              	.LVL33:
 370:Wire.cpp      ****   I2CMasterBuffer[I2CWriteLength] = data;
 857              		.loc 1 370 0
 858 0000 044B     		ldr	r3, .L74	@ tmp140,
 859 0002 0548     		ldr	r0, .L74+4	@ tmp141,
 860              	.LVL34:
 861 0004 1A68     		ldr	r2, [r3]	@ I2CWriteLength.5, I2CWriteLength
 373:Wire.cpp      **** }
 862              		.loc 1 373 0
 863              		@ sp needed for prologue	@
 370:Wire.cpp      ****   I2CMasterBuffer[I2CWriteLength] = data;
 864              		.loc 1 370 0
 865 0006 8154     		strb	r1, [r0, r2]	@ data, I2CMasterBuffer
 371:Wire.cpp      ****   I2CWriteLength++;
 866              		.loc 1 371 0
 867 0008 1968     		ldr	r1, [r3]	@ I2CWriteLength.6, I2CWriteLength
 868              	.LVL35:
 373:Wire.cpp      **** }
 869              		.loc 1 373 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 26


 870 000a 0120     		mov	r0, #1	@,
 871              	.LVL36:
 371:Wire.cpp      ****   I2CWriteLength++;
 872              		.loc 1 371 0
 873 000c 0131     		add	r1, r1, #1	@ I2CWriteLength.7,
 874 000e 1960     		str	r1, [r3]	@ I2CWriteLength.7, I2CWriteLength
 373:Wire.cpp      **** }
 875              		.loc 1 373 0
 876 0010 7047     		bx	lr
 877              	.L75:
 878 0012 C046     		.align	2
 879              	.L74:
 880 0014 00000000 		.word	.LANCHOR4
 881 0018 00000000 		.word	.LANCHOR2
 882              		.cfi_endproc
 883              	.LFE66:
 884              		.size	_ZN7TwoWire5writeEh, .-_ZN7TwoWire5writeEh
 885              		.section	.text._ZN7TwoWire5writeEPhj,"ax",%progbits
 886              		.align	1
 887              		.global	_ZN7TwoWire5writeEPhj
 888              		.code	16
 889              		.thumb_func
 890              		.type	_ZN7TwoWire5writeEPhj, %function
 891              	_ZN7TwoWire5writeEPhj:
 892              	.LFB67:
 379:Wire.cpp      **** {
 893              		.loc 1 379 0
 894              		.cfi_startproc
 895              	.LVL37:
 896 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 897              	.LCFI8:
 898              		.cfi_def_cfa_offset 24
 899              		.cfi_offset 3, -24
 900              		.cfi_offset 4, -20
 901              		.cfi_offset 5, -16
 902              		.cfi_offset 6, -12
 903              		.cfi_offset 7, -8
 904              		.cfi_offset 14, -4
 379:Wire.cpp      **** {
 905              		.loc 1 379 0
 906 0002 071C     		mov	r7, r0	@ this, this
 907 0004 151C     		mov	r5, r2	@ quantity, quantity
 908 0006 0C1C     		mov	r4, r1	@ ivtmp.95, data
 378:Wire.cpp      **** size_t TwoWire::write(uint8_t *data, size_t quantity)
 909              		.loc 1 378 0
 910 0008 8E18     		add	r6, r1, r2	@ D.7379, ivtmp.95, quantity
 911              	.LVL38:
 912              	.L77:
 913              	.LBB20:
 914              	.LBB21:
 382:Wire.cpp      ****     for(size_t i = 0; i < quantity; ++i){
 915              		.loc 1 382 0 discriminator 1
 916 000a B442     		cmp	r4, r6	@ ivtmp.95, D.7379
 917 000c 05D0     		beq	.L79	@,
 918              	.L78:
 383:Wire.cpp      ****       write(data[i]);
 919              		.loc 1 383 0 discriminator 2
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 27


 920 000e 2178     		ldrb	r1, [r4]	@ MEM[base: D.7380_19, offset: 0B], MEM[base: D.7380_19, offset: 0B]
 921 0010 381C     		mov	r0, r7	@, this
 922 0012 FFF7FEFF 		bl	_ZN7TwoWire5writeEh	@
 923              	.LVL39:
 924 0016 0134     		add	r4, r4, #1	@ ivtmp.95,
 925 0018 F7E7     		b	.L77	@
 926              	.L79:
 927              	.LBE21:
 928              	.LBE20:
 391:Wire.cpp      **** }
 929              		.loc 1 391 0
 930 001a 281C     		mov	r0, r5	@, quantity
 931              		@ sp needed for prologue	@
 932              	.LVL40:
 933              	.LVL41:
 934 001c F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 935              		.cfi_endproc
 936              	.LFE67:
 937              		.size	_ZN7TwoWire5writeEPhj, .-_ZN7TwoWire5writeEPhj
 938              		.section	.text._ZN7TwoWire4readEv,"ax",%progbits
 939              		.align	1
 940              		.global	_ZN7TwoWire4readEv
 941              		.code	16
 942              		.thumb_func
 943              		.type	_ZN7TwoWire4readEv, %function
 944              	_ZN7TwoWire4readEv:
 945              	.LFB68:
 397:Wire.cpp      **** {
 946              		.loc 1 397 0
 947              		.cfi_startproc
 948              	.LVL42:
 949              	.LBB22:
 400:Wire.cpp      ****   if(I2CReadIndex<I2CReadLength)
 950              		.loc 1 400 0
 951 0000 074B     		ldr	r3, .L83	@ tmp143,
 952 0002 084A     		ldr	r2, .L83+4	@ tmp144,
 953 0004 1968     		ldr	r1, [r3]	@ I2CReadIndex.1, I2CReadIndex
 954 0006 1068     		ldr	r0, [r2]	@ I2CReadLength.2, I2CReadLength
 955              	.LVL43:
 956 0008 8142     		cmp	r1, r0	@ I2CReadIndex.1, I2CReadLength.2
 957 000a 05D2     		bcs	.L82	@,
 401:Wire.cpp      ****     value = I2CSlaveBuffer[I2CReadIndex++];
 958              		.loc 1 401 0
 959 000c 1A68     		ldr	r2, [r3]	@ I2CReadIndex.3, I2CReadIndex
 960 000e 0648     		ldr	r0, .L83+8	@ tmp146,
 961 0010 815C     		ldrb	r1, [r0, r2]	@ tmp148,* I2CReadIndex.3
 962              	.LVL44:
 963 0012 0132     		add	r2, r2, #1	@ I2CReadIndex.4,
 964 0014 1A60     		str	r2, [r3]	@ I2CReadIndex.4, I2CReadIndex
 965 0016 01E0     		b	.L81	@
 966              	.LVL45:
 967              	.L82:
 398:Wire.cpp      ****   int value = -1;
 968              		.loc 1 398 0
 969 0018 0123     		mov	r3, #1	@ tmp152,
 970 001a 5942     		neg	r1, r3	@ value, tmp152
 971              	.LVL46:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 28


 972              	.L81:
 403:Wire.cpp      ****   return value;
 973              		.loc 1 403 0
 974 001c C8B2     		uxtb	r0, r1	@ value, value
 975              	.LBE22:
 404:Wire.cpp      **** }
 976              		.loc 1 404 0
 977              		@ sp needed for prologue	@
 978 001e 7047     		bx	lr
 979              	.L84:
 980              		.align	2
 981              	.L83:
 982 0020 00000000 		.word	.LANCHOR8
 983 0024 00000000 		.word	.LANCHOR6
 984 0028 00000000 		.word	.LANCHOR7
 985              		.cfi_endproc
 986              	.LFE68:
 987              		.size	_ZN7TwoWire4readEv, .-_ZN7TwoWire4readEv
 988              		.global	Wire
 989              		.global	WrIndex
 990              		.global	RdIndex
 991              		.global	I2CWriteLength
 992              		.global	I2CReadIndex
 993              		.global	I2CReadLength
 994              		.global	I2CCount
 995              		.global	I2CSlaveBuffer
 996              		.global	I2CMasterBuffer
 997              		.global	I2CMode
 998              		.global	timeout
 999              		.global	I2CSlaveState
 1000              		.global	I2CMasterState
 1001              		.section	.bss.I2CMasterBuffer,"aw",%nobits
 1002              		.set	.LANCHOR2,. + 0
 1003              		.type	I2CMasterBuffer, %object
 1004              		.size	I2CMasterBuffer, 128
 1005              	I2CMasterBuffer:
 1006 0000 00000000 		.space	128
 1006      00000000 
 1006      00000000 
 1006      00000000 
 1006      00000000 
 1007              		.section	.bss.I2CReadLength,"aw",%nobits
 1008              		.align	2
 1009              		.set	.LANCHOR6,. + 0
 1010              		.type	I2CReadLength, %object
 1011              		.size	I2CReadLength, 4
 1012              	I2CReadLength:
 1013 0000 00000000 		.space	4
 1014              		.section	.bss.I2CSlaveState,"aw",%nobits
 1015              		.align	2
 1016              		.type	I2CSlaveState, %object
 1017              		.size	I2CSlaveState, 4
 1018              	I2CSlaveState:
 1019 0000 00000000 		.space	4
 1020              		.section	.bss.I2CMode,"aw",%nobits
 1021              		.align	2
 1022              		.type	I2CMode, %object
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 29


 1023              		.size	I2CMode, 4
 1024              	I2CMode:
 1025 0000 00000000 		.space	4
 1026              		.section	.bss.I2CWriteLength,"aw",%nobits
 1027              		.align	2
 1028              		.set	.LANCHOR4,. + 0
 1029              		.type	I2CWriteLength, %object
 1030              		.size	I2CWriteLength, 4
 1031              	I2CWriteLength:
 1032 0000 00000000 		.space	4
 1033              		.section	.bss.RdIndex,"aw",%nobits
 1034              		.align	2
 1035              		.set	.LANCHOR3,. + 0
 1036              		.type	RdIndex, %object
 1037              		.size	RdIndex, 4
 1038              	RdIndex:
 1039 0000 00000000 		.space	4
 1040              		.section	.bss.Wire,"aw",%nobits
 1041              		.type	Wire, %object
 1042              		.size	Wire, 1
 1043              	Wire:
 1044 0000 00       		.space	1
 1045              		.section	.bss.I2CMasterState,"aw",%nobits
 1046              		.align	2
 1047              		.set	.LANCHOR5,. + 0
 1048              		.type	I2CMasterState, %object
 1049              		.size	I2CMasterState, 4
 1050              	I2CMasterState:
 1051 0000 00000000 		.space	4
 1052              		.section	.bss.WrIndex,"aw",%nobits
 1053              		.align	2
 1054              		.set	.LANCHOR1,. + 0
 1055              		.type	WrIndex, %object
 1056              		.size	WrIndex, 4
 1057              	WrIndex:
 1058 0000 00000000 		.space	4
 1059              		.section	.bss.timeout,"aw",%nobits
 1060              		.align	2
 1061              		.set	.LANCHOR0,. + 0
 1062              		.type	timeout, %object
 1063              		.size	timeout, 4
 1064              	timeout:
 1065 0000 00000000 		.space	4
 1066              		.section	.bss.I2CReadIndex,"aw",%nobits
 1067              		.align	2
 1068              		.set	.LANCHOR8,. + 0
 1069              		.type	I2CReadIndex, %object
 1070              		.size	I2CReadIndex, 4
 1071              	I2CReadIndex:
 1072 0000 00000000 		.space	4
 1073              		.section	.bss.I2CCount,"aw",%nobits
 1074              		.align	2
 1075              		.type	I2CCount, %object
 1076              		.size	I2CCount, 4
 1077              	I2CCount:
 1078 0000 00000000 		.space	4
 1079              		.section	.bss.I2CSlaveBuffer,"aw",%nobits
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 30


 1080              		.set	.LANCHOR7,. + 0
 1081              		.type	I2CSlaveBuffer, %object
 1082              		.size	I2CSlaveBuffer, 128
 1083              	I2CSlaveBuffer:
 1084 0000 00000000 		.space	128
 1084      00000000 
 1084      00000000 
 1084      00000000 
 1084      00000000 
 1085              		.text
 1086              	.Letext0:
 1087              		.file 2 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 1088              		.file 3 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 1089              		.file 4 "Wire.h"
 1090              		.section	.debug_info,"",%progbits
 1091              	.Ldebug_info0:
 1092 0000 E5080000 		.4byte	0x8e5
 1093 0004 0200     		.2byte	0x2
 1094 0006 00000000 		.4byte	.Ldebug_abbrev0
 1095 000a 04       		.byte	0x4
 1096 000b 01       		.uleb128 0x1
 1097 000c F8000000 		.4byte	.LASF60
 1098 0010 04       		.byte	0x4
 1099 0011 D3160000 		.4byte	.LASF61
 1100 0015 E4560000 		.4byte	.LASF62
 1101 0019 38000000 		.4byte	.Ldebug_ranges0+0x38
 1102 001d 00000000 		.4byte	0
 1103 0021 00000000 		.4byte	0
 1104 0025 00000000 		.4byte	.Ldebug_line0
 1105 0029 00000000 		.4byte	.Ldebug_macro0
 1106 002d 02       		.uleb128 0x2
 1107 002e E8000000 		.4byte	.LASF11
 1108 0032 02       		.byte	0x2
 1109 0033 D5       		.byte	0xd5
 1110 0034 38000000 		.4byte	0x38
 1111 0038 03       		.uleb128 0x3
 1112 0039 04       		.byte	0x4
 1113 003a 07       		.byte	0x7
 1114 003b DB3F0000 		.4byte	.LASF0
 1115 003f 03       		.uleb128 0x3
 1116 0040 01       		.byte	0x1
 1117 0041 06       		.byte	0x6
 1118 0042 53040000 		.4byte	.LASF1
 1119 0046 03       		.uleb128 0x3
 1120 0047 01       		.byte	0x1
 1121 0048 08       		.byte	0x8
 1122 0049 60000000 		.4byte	.LASF2
 1123 004d 03       		.uleb128 0x3
 1124 004e 02       		.byte	0x2
 1125 004f 05       		.byte	0x5
 1126 0050 D45A0000 		.4byte	.LASF3
 1127 0054 03       		.uleb128 0x3
 1128 0055 02       		.byte	0x2
 1129 0056 07       		.byte	0x7
 1130 0057 424A0000 		.4byte	.LASF4
 1131 005b 04       		.uleb128 0x4
 1132 005c 04       		.byte	0x4
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 31


 1133 005d 05       		.byte	0x5
 1134 005e 696E7400 		.ascii	"int\000"
 1135 0062 03       		.uleb128 0x3
 1136 0063 08       		.byte	0x8
 1137 0064 05       		.byte	0x5
 1138 0065 A73A0000 		.4byte	.LASF5
 1139 0069 03       		.uleb128 0x3
 1140 006a 08       		.byte	0x8
 1141 006b 07       		.byte	0x7
 1142 006c B94C0000 		.4byte	.LASF6
 1143 0070 03       		.uleb128 0x3
 1144 0071 04       		.byte	0x4
 1145 0072 05       		.byte	0x5
 1146 0073 A8440000 		.4byte	.LASF7
 1147 0077 03       		.uleb128 0x3
 1148 0078 04       		.byte	0x4
 1149 0079 07       		.byte	0x7
 1150 007a 43010000 		.4byte	.LASF8
 1151 007e 03       		.uleb128 0x3
 1152 007f 04       		.byte	0x4
 1153 0080 07       		.byte	0x7
 1154 0081 E32F0000 		.4byte	.LASF9
 1155 0085 03       		.uleb128 0x3
 1156 0086 01       		.byte	0x1
 1157 0087 08       		.byte	0x8
 1158 0088 521F0000 		.4byte	.LASF10
 1159 008c 02       		.uleb128 0x2
 1160 008d 8C170000 		.4byte	.LASF12
 1161 0091 03       		.byte	0x3
 1162 0092 2A       		.byte	0x2a
 1163 0093 46000000 		.4byte	0x46
 1164 0097 02       		.uleb128 0x2
 1165 0098 59640000 		.4byte	.LASF13
 1166 009c 03       		.byte	0x3
 1167 009d 50       		.byte	0x50
 1168 009e 7E000000 		.4byte	0x7e
 1169 00a2 03       		.uleb128 0x3
 1170 00a3 04       		.byte	0x4
 1171 00a4 04       		.byte	0x4
 1172 00a5 643E0000 		.4byte	.LASF14
 1173 00a9 03       		.uleb128 0x3
 1174 00aa 08       		.byte	0x8
 1175 00ab 04       		.byte	0x4
 1176 00ac 56630000 		.4byte	.LASF15
 1177 00b0 05       		.uleb128 0x5
 1178 00b1 AE5D0000 		.4byte	.LASF16
 1179 00b5 01       		.byte	0x1
 1180 00b6 04       		.byte	0x4
 1181 00b7 1E       		.byte	0x1e
 1182 00b8 99020000 		.4byte	0x299
 1183 00bc 06       		.uleb128 0x6
 1184 00bd 01       		.byte	0x1
 1185 00be AE5D0000 		.4byte	.LASF16
 1186 00c2 04       		.byte	0x4
 1187 00c3 22       		.byte	0x22
 1188 00c4 99020000 		.4byte	0x299
 1189 00c8 01       		.byte	0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 32


 1190 00c9 D1000000 		.4byte	0xd1
 1191 00cd D8000000 		.4byte	0xd8
 1192 00d1 07       		.uleb128 0x7
 1193 00d2 99020000 		.4byte	0x299
 1194 00d6 01       		.byte	0x1
 1195 00d7 00       		.byte	0
 1196 00d8 08       		.uleb128 0x8
 1197 00d9 01       		.byte	0x1
 1198 00da D44A0000 		.4byte	.LASF17
 1199 00de 04       		.byte	0x4
 1200 00df 23       		.byte	0x23
 1201 00e0 56570000 		.4byte	.LASF19
 1202 00e4 01       		.byte	0x1
 1203 00e5 ED000000 		.4byte	0xed
 1204 00e9 F4000000 		.4byte	0xf4
 1205 00ed 07       		.uleb128 0x7
 1206 00ee 99020000 		.4byte	0x299
 1207 00f2 01       		.byte	0x1
 1208 00f3 00       		.byte	0
 1209 00f4 08       		.uleb128 0x8
 1210 00f5 01       		.byte	0x1
 1211 00f6 0F030000 		.4byte	.LASF18
 1212 00fa 04       		.byte	0x4
 1213 00fb 24       		.byte	0x24
 1214 00fc 52260000 		.4byte	.LASF20
 1215 0100 01       		.byte	0x1
 1216 0101 09010000 		.4byte	0x109
 1217 0105 15010000 		.4byte	0x115
 1218 0109 07       		.uleb128 0x7
 1219 010a 99020000 		.4byte	0x299
 1220 010e 01       		.byte	0x1
 1221 010f 09       		.uleb128 0x9
 1222 0110 8C000000 		.4byte	0x8c
 1223 0114 00       		.byte	0
 1224 0115 08       		.uleb128 0x8
 1225 0116 01       		.byte	0x1
 1226 0117 0F030000 		.4byte	.LASF18
 1227 011b 04       		.byte	0x4
 1228 011c 25       		.byte	0x25
 1229 011d 73260000 		.4byte	.LASF21
 1230 0121 01       		.byte	0x1
 1231 0122 2A010000 		.4byte	0x12a
 1232 0126 36010000 		.4byte	0x136
 1233 012a 07       		.uleb128 0x7
 1234 012b 99020000 		.4byte	0x299
 1235 012f 01       		.byte	0x1
 1236 0130 09       		.uleb128 0x9
 1237 0131 5B000000 		.4byte	0x5b
 1238 0135 00       		.byte	0
 1239 0136 0A       		.uleb128 0xa
 1240 0137 01       		.byte	0x1
 1241 0138 303D0000 		.4byte	.LASF22
 1242 013c 04       		.byte	0x4
 1243 013d 26       		.byte	0x26
 1244 013e 421E0000 		.4byte	.LASF23
 1245 0142 8C000000 		.4byte	0x8c
 1246 0146 01       		.byte	0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 33


 1247 0147 4F010000 		.4byte	0x14f
 1248 014b 5B010000 		.4byte	0x15b
 1249 014f 07       		.uleb128 0x7
 1250 0150 99020000 		.4byte	0x299
 1251 0154 01       		.byte	0x1
 1252 0155 09       		.uleb128 0x9
 1253 0156 8C000000 		.4byte	0x8c
 1254 015a 00       		.byte	0
 1255 015b 0A       		.uleb128 0xa
 1256 015c 01       		.byte	0x1
 1257 015d 303D0000 		.4byte	.LASF22
 1258 0161 04       		.byte	0x4
 1259 0162 27       		.byte	0x27
 1260 0163 EE1F0000 		.4byte	.LASF24
 1261 0167 8C000000 		.4byte	0x8c
 1262 016b 01       		.byte	0x1
 1263 016c 74010000 		.4byte	0x174
 1264 0170 7B010000 		.4byte	0x17b
 1265 0174 07       		.uleb128 0x7
 1266 0175 99020000 		.4byte	0x299
 1267 0179 01       		.byte	0x1
 1268 017a 00       		.byte	0
 1269 017b 0A       		.uleb128 0xa
 1270 017c 01       		.byte	0x1
 1271 017d 48430000 		.4byte	.LASF25
 1272 0181 04       		.byte	0x4
 1273 0182 28       		.byte	0x28
 1274 0183 373B0000 		.4byte	.LASF26
 1275 0187 8C000000 		.4byte	0x8c
 1276 018b 01       		.byte	0x1
 1277 018c 94010000 		.4byte	0x194
 1278 0190 AA010000 		.4byte	0x1aa
 1279 0194 07       		.uleb128 0x7
 1280 0195 99020000 		.4byte	0x299
 1281 0199 01       		.byte	0x1
 1282 019a 09       		.uleb128 0x9
 1283 019b 8C000000 		.4byte	0x8c
 1284 019f 09       		.uleb128 0x9
 1285 01a0 8C000000 		.4byte	0x8c
 1286 01a4 09       		.uleb128 0x9
 1287 01a5 8C000000 		.4byte	0x8c
 1288 01a9 00       		.byte	0
 1289 01aa 0A       		.uleb128 0xa
 1290 01ab 01       		.byte	0x1
 1291 01ac 48430000 		.4byte	.LASF25
 1292 01b0 04       		.byte	0x4
 1293 01b1 29       		.byte	0x29
 1294 01b2 781C0000 		.4byte	.LASF27
 1295 01b6 8C000000 		.4byte	0x8c
 1296 01ba 01       		.byte	0x1
 1297 01bb C3010000 		.4byte	0x1c3
 1298 01bf D9010000 		.4byte	0x1d9
 1299 01c3 07       		.uleb128 0x7
 1300 01c4 99020000 		.4byte	0x299
 1301 01c8 01       		.byte	0x1
 1302 01c9 09       		.uleb128 0x9
 1303 01ca 5B000000 		.4byte	0x5b
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 34


 1304 01ce 09       		.uleb128 0x9
 1305 01cf 5B000000 		.4byte	0x5b
 1306 01d3 09       		.uleb128 0x9
 1307 01d4 5B000000 		.4byte	0x5b
 1308 01d8 00       		.byte	0
 1309 01d9 0A       		.uleb128 0xa
 1310 01da 01       		.byte	0x1
 1311 01db 48430000 		.4byte	.LASF25
 1312 01df 04       		.byte	0x4
 1313 01e0 2A       		.byte	0x2a
 1314 01e1 FC180000 		.4byte	.LASF28
 1315 01e5 8C000000 		.4byte	0x8c
 1316 01e9 01       		.byte	0x1
 1317 01ea F2010000 		.4byte	0x1f2
 1318 01ee 03020000 		.4byte	0x203
 1319 01f2 07       		.uleb128 0x7
 1320 01f3 99020000 		.4byte	0x299
 1321 01f7 01       		.byte	0x1
 1322 01f8 09       		.uleb128 0x9
 1323 01f9 8C000000 		.4byte	0x8c
 1324 01fd 09       		.uleb128 0x9
 1325 01fe 8C000000 		.4byte	0x8c
 1326 0202 00       		.byte	0
 1327 0203 0A       		.uleb128 0xa
 1328 0204 01       		.byte	0x1
 1329 0205 48430000 		.4byte	.LASF25
 1330 0209 04       		.byte	0x4
 1331 020a 2B       		.byte	0x2b
 1332 020b 6A4C0000 		.4byte	.LASF29
 1333 020f 8C000000 		.4byte	0x8c
 1334 0213 01       		.byte	0x1
 1335 0214 1C020000 		.4byte	0x21c
 1336 0218 2D020000 		.4byte	0x22d
 1337 021c 07       		.uleb128 0x7
 1338 021d 99020000 		.4byte	0x299
 1339 0221 01       		.byte	0x1
 1340 0222 09       		.uleb128 0x9
 1341 0223 5B000000 		.4byte	0x5b
 1342 0227 09       		.uleb128 0x9
 1343 0228 5B000000 		.4byte	0x5b
 1344 022c 00       		.byte	0
 1345 022d 0A       		.uleb128 0xa
 1346 022e 01       		.byte	0x1
 1347 022f E0060000 		.4byte	.LASF30
 1348 0233 04       		.byte	0x4
 1349 0234 2C       		.byte	0x2c
 1350 0235 77620000 		.4byte	.LASF31
 1351 0239 2D000000 		.4byte	0x2d
 1352 023d 01       		.byte	0x1
 1353 023e 46020000 		.4byte	0x246
 1354 0242 52020000 		.4byte	0x252
 1355 0246 07       		.uleb128 0x7
 1356 0247 99020000 		.4byte	0x299
 1357 024b 01       		.byte	0x1
 1358 024c 09       		.uleb128 0x9
 1359 024d 8C000000 		.4byte	0x8c
 1360 0251 00       		.byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 35


 1361 0252 0A       		.uleb128 0xa
 1362 0253 01       		.byte	0x1
 1363 0254 E0060000 		.4byte	.LASF30
 1364 0258 04       		.byte	0x4
 1365 0259 2D       		.byte	0x2d
 1366 025a 33310000 		.4byte	.LASF32
 1367 025e 2D000000 		.4byte	0x2d
 1368 0262 01       		.byte	0x1
 1369 0263 6B020000 		.4byte	0x26b
 1370 0267 7C020000 		.4byte	0x27c
 1371 026b 07       		.uleb128 0x7
 1372 026c 99020000 		.4byte	0x299
 1373 0270 01       		.byte	0x1
 1374 0271 09       		.uleb128 0x9
 1375 0272 9F020000 		.4byte	0x29f
 1376 0276 09       		.uleb128 0x9
 1377 0277 2D000000 		.4byte	0x2d
 1378 027b 00       		.byte	0
 1379 027c 0B       		.uleb128 0xb
 1380 027d 01       		.byte	0x1
 1381 027e 563F0000 		.4byte	.LASF33
 1382 0282 04       		.byte	0x4
 1383 0283 2E       		.byte	0x2e
 1384 0284 14290000 		.4byte	.LASF34
 1385 0288 8C000000 		.4byte	0x8c
 1386 028c 01       		.byte	0x1
 1387 028d 91020000 		.4byte	0x291
 1388 0291 07       		.uleb128 0x7
 1389 0292 99020000 		.4byte	0x299
 1390 0296 01       		.byte	0x1
 1391 0297 00       		.byte	0
 1392 0298 00       		.byte	0
 1393 0299 0C       		.uleb128 0xc
 1394 029a 04       		.byte	0x4
 1395 029b B0000000 		.4byte	0xb0
 1396 029f 0C       		.uleb128 0xc
 1397 02a0 04       		.byte	0x4
 1398 02a1 8C000000 		.4byte	0x8c
 1399 02a5 03       		.uleb128 0x3
 1400 02a6 01       		.byte	0x1
 1401 02a7 02       		.byte	0x2
 1402 02a8 141B0000 		.4byte	.LASF35
 1403 02ac 0D       		.uleb128 0xd
 1404 02ad BC000000 		.4byte	0xbc
 1405 02b1 01       		.byte	0x1
 1406 02b2 2601     		.2byte	0x126
 1407 02b4 01       		.byte	0x1
 1408 02b5 BD020000 		.4byte	0x2bd
 1409 02b9 C8020000 		.4byte	0x2c8
 1410 02bd 0E       		.uleb128 0xe
 1411 02be 4A320000 		.4byte	.LASF38
 1412 02c2 C8020000 		.4byte	0x2c8
 1413 02c6 01       		.byte	0x1
 1414 02c7 00       		.byte	0
 1415 02c8 0F       		.uleb128 0xf
 1416 02c9 99020000 		.4byte	0x299
 1417 02cd 10       		.uleb128 0x10
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 36


 1418 02ce 62250000 		.4byte	.LASF63
 1419 02d2 01       		.byte	0x1
 1420 02d3 01       		.byte	0x1
 1421 02d4 F1020000 		.4byte	0x2f1
 1422 02d8 11       		.uleb128 0x11
 1423 02d9 DD380000 		.4byte	.LASF36
 1424 02dd 01       		.byte	0x1
 1425 02de 9901     		.2byte	0x199
 1426 02e0 5B000000 		.4byte	0x5b
 1427 02e4 11       		.uleb128 0x11
 1428 02e5 762F0000 		.4byte	.LASF37
 1429 02e9 01       		.byte	0x1
 1430 02ea 9901     		.2byte	0x199
 1431 02ec 5B000000 		.4byte	0x5b
 1432 02f0 00       		.byte	0
 1433 02f1 0D       		.uleb128 0xd
 1434 02f2 F4000000 		.4byte	0xf4
 1435 02f6 01       		.byte	0x1
 1436 02f7 4A01     		.2byte	0x14a
 1437 02f9 01       		.byte	0x1
 1438 02fa 02030000 		.4byte	0x302
 1439 02fe 19030000 		.4byte	0x319
 1440 0302 0E       		.uleb128 0xe
 1441 0303 4A320000 		.4byte	.LASF38
 1442 0307 C8020000 		.4byte	0x2c8
 1443 030b 01       		.byte	0x1
 1444 030c 11       		.uleb128 0x11
 1445 030d FD300000 		.4byte	.LASF39
 1446 0311 01       		.byte	0x1
 1447 0312 4A01     		.2byte	0x14a
 1448 0314 8C000000 		.4byte	0x8c
 1449 0318 00       		.byte	0
 1450 0319 0D       		.uleb128 0xd
 1451 031a 36010000 		.4byte	0x136
 1452 031e 01       		.byte	0x1
 1453 031f 6301     		.2byte	0x163
 1454 0321 01       		.byte	0x1
 1455 0322 2A030000 		.4byte	0x32a
 1456 0326 41030000 		.4byte	0x341
 1457 032a 0E       		.uleb128 0xe
 1458 032b 4A320000 		.4byte	.LASF38
 1459 032f C8020000 		.4byte	0x2c8
 1460 0333 01       		.byte	0x1
 1461 0334 11       		.uleb128 0x11
 1462 0335 00420000 		.4byte	.LASF40
 1463 0339 01       		.byte	0x1
 1464 033a 6301     		.2byte	0x163
 1465 033c 8C000000 		.4byte	0x8c
 1466 0340 00       		.byte	0
 1467 0341 12       		.uleb128 0x12
 1468 0342 01       		.byte	0x1
 1469 0343 8C130000 		.4byte	.LASF64
 1470 0347 01       		.byte	0x1
 1471 0348 5E       		.byte	0x5e
 1472 0349 FB330000 		.4byte	.LASF65
 1473 034d 00000000 		.4byte	.LFB51
 1474 0351 4C010000 		.4byte	.LFE51
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 37


 1475 0355 00000000 		.4byte	.LLST0
 1476 0359 01       		.byte	0x1
 1477 035a 74030000 		.4byte	0x374
 1478 035e 13       		.uleb128 0x13
 1479 035f 00000000 		.4byte	.Ldebug_ranges0+0
 1480 0363 14       		.uleb128 0x14
 1481 0364 B96B0000 		.4byte	.LASF45
 1482 0368 01       		.byte	0x1
 1483 0369 60       		.byte	0x60
 1484 036a 8C000000 		.4byte	0x8c
 1485 036e 20000000 		.4byte	.LLST1
 1486 0372 00       		.byte	0
 1487 0373 00       		.byte	0
 1488 0374 15       		.uleb128 0x15
 1489 0375 01       		.byte	0x1
 1490 0376 4A610000 		.4byte	.LASF66
 1491 037a 01       		.byte	0x1
 1492 037b D8       		.byte	0xd8
 1493 037c 02170000 		.4byte	.LASF67
 1494 0380 97000000 		.4byte	0x97
 1495 0384 00000000 		.4byte	.LFB52
 1496 0388 9C000000 		.4byte	.LFE52
 1497 038c 33000000 		.4byte	.LLST2
 1498 0390 01       		.byte	0x1
 1499 0391 A5030000 		.4byte	0x3a5
 1500 0395 16       		.uleb128 0x16
 1501 0396 37110000 		.4byte	.LASF41
 1502 039a 01       		.byte	0x1
 1503 039b D8       		.byte	0xd8
 1504 039c 97000000 		.4byte	0x97
 1505 03a0 53000000 		.4byte	.LLST3
 1506 03a4 00       		.byte	0
 1507 03a5 17       		.uleb128 0x17
 1508 03a6 01       		.byte	0x1
 1509 03a7 A4210000 		.4byte	.LASF68
 1510 03ab 01       		.byte	0x1
 1511 03ac 0C01     		.2byte	0x10c
 1512 03ae 89070000 		.4byte	.LASF69
 1513 03b2 97000000 		.4byte	0x97
 1514 03b6 00000000 		.4byte	.LFB53
 1515 03ba 58000000 		.4byte	.LFE53
 1516 03be 02       		.byte	0x2
 1517 03bf 7D       		.byte	0x7d
 1518 03c0 00       		.sleb128 0
 1519 03c1 01       		.byte	0x1
 1520 03c2 18       		.uleb128 0x18
 1521 03c3 AC020000 		.4byte	0x2ac
 1522 03c7 0E610000 		.4byte	.LASF43
 1523 03cb 00000000 		.4byte	.LFB55
 1524 03cf 02000000 		.4byte	.LFE55
 1525 03d3 02       		.byte	0x2
 1526 03d4 7D       		.byte	0x7d
 1527 03d5 00       		.sleb128 0
 1528 03d6 DF030000 		.4byte	0x3df
 1529 03da 01       		.byte	0x1
 1530 03db E7030000 		.4byte	0x3e7
 1531 03df 19       		.uleb128 0x19
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 38


 1532 03e0 BD020000 		.4byte	0x2bd
 1533 03e4 01       		.byte	0x1
 1534 03e5 50       		.byte	0x50
 1535 03e6 00       		.byte	0
 1536 03e7 1A       		.uleb128 0x1a
 1537 03e8 D8000000 		.4byte	0xd8
 1538 03ec 01       		.byte	0x1
 1539 03ed 2C01     		.2byte	0x12c
 1540 03ef 00000000 		.4byte	.LFB57
 1541 03f3 0A000000 		.4byte	.LFE57
 1542 03f7 74000000 		.4byte	.LLST4
 1543 03fb 04040000 		.4byte	0x404
 1544 03ff 01       		.byte	0x1
 1545 0400 22040000 		.4byte	0x422
 1546 0404 1B       		.uleb128 0x1b
 1547 0405 4A320000 		.4byte	.LASF38
 1548 0409 C8020000 		.4byte	0x2c8
 1549 040d 01       		.byte	0x1
 1550 040e 94000000 		.4byte	.LLST5
 1551 0412 1C       		.uleb128 0x1c
 1552 0413 08000000 		.4byte	.LVL7
 1553 0417 74030000 		.4byte	0x374
 1554 041b 1D       		.uleb128 0x1d
 1555 041c 01       		.byte	0x1
 1556 041d 50       		.byte	0x50
 1557 041e 01       		.byte	0x1
 1558 041f 31       		.byte	0x31
 1559 0420 00       		.byte	0
 1560 0421 00       		.byte	0
 1561 0422 1E       		.uleb128 0x1e
 1562 0423 7B010000 		.4byte	0x17b
 1563 0427 01       		.byte	0x1
 1564 0428 3101     		.2byte	0x131
 1565 042a 00000000 		.4byte	.LFB58
 1566 042e 30000000 		.4byte	.LFE58
 1567 0432 02       		.byte	0x2
 1568 0433 7D       		.byte	0x7d
 1569 0434 00       		.sleb128 0
 1570 0435 3E040000 		.4byte	0x43e
 1571 0439 01       		.byte	0x1
 1572 043a 7D040000 		.4byte	0x47d
 1573 043e 1B       		.uleb128 0x1b
 1574 043f 4A320000 		.4byte	.LASF38
 1575 0443 C8020000 		.4byte	0x2c8
 1576 0447 01       		.byte	0x1
 1577 0448 B5000000 		.4byte	.LLST6
 1578 044c 1F       		.uleb128 0x1f
 1579 044d FD300000 		.4byte	.LASF39
 1580 0451 01       		.byte	0x1
 1581 0452 3101     		.2byte	0x131
 1582 0454 8C000000 		.4byte	0x8c
 1583 0458 D6000000 		.4byte	.LLST7
 1584 045c 1F       		.uleb128 0x1f
 1585 045d 3A170000 		.4byte	.LASF42
 1586 0461 01       		.byte	0x1
 1587 0462 3101     		.2byte	0x131
 1588 0464 8C000000 		.4byte	0x8c
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 39


 1589 0468 F8000000 		.4byte	.LLST8
 1590 046c 1F       		.uleb128 0x1f
 1591 046d 00420000 		.4byte	.LASF40
 1592 0471 01       		.byte	0x1
 1593 0472 3101     		.2byte	0x131
 1594 0474 8C000000 		.4byte	0x8c
 1595 0478 19010000 		.4byte	.LLST9
 1596 047c 00       		.byte	0
 1597 047d 1A       		.uleb128 0x1a
 1598 047e D9010000 		.4byte	0x1d9
 1599 0482 01       		.byte	0x1
 1600 0483 3B01     		.2byte	0x13b
 1601 0485 00000000 		.4byte	.LFB59
 1602 0489 0A000000 		.4byte	.LFE59
 1603 048d 3A010000 		.4byte	.LLST10
 1604 0491 9A040000 		.4byte	0x49a
 1605 0495 01       		.byte	0x1
 1606 0496 DF040000 		.4byte	0x4df
 1607 049a 1B       		.uleb128 0x1b
 1608 049b 4A320000 		.4byte	.LASF38
 1609 049f C8020000 		.4byte	0x2c8
 1610 04a3 01       		.byte	0x1
 1611 04a4 5A010000 		.4byte	.LLST11
 1612 04a8 1F       		.uleb128 0x1f
 1613 04a9 FD300000 		.4byte	.LASF39
 1614 04ad 01       		.byte	0x1
 1615 04ae 3B01     		.2byte	0x13b
 1616 04b0 8C000000 		.4byte	0x8c
 1617 04b4 7B010000 		.4byte	.LLST12
 1618 04b8 1F       		.uleb128 0x1f
 1619 04b9 3A170000 		.4byte	.LASF42
 1620 04bd 01       		.byte	0x1
 1621 04be 3B01     		.2byte	0x13b
 1622 04c0 8C000000 		.4byte	0x8c
 1623 04c4 9C010000 		.4byte	.LLST13
 1624 04c8 1C       		.uleb128 0x1c
 1625 04c9 08000000 		.4byte	.LVL14
 1626 04cd 22040000 		.4byte	0x422
 1627 04d1 1D       		.uleb128 0x1d
 1628 04d2 01       		.byte	0x1
 1629 04d3 53       		.byte	0x53
 1630 04d4 01       		.byte	0x1
 1631 04d5 31       		.byte	0x31
 1632 04d6 1D       		.uleb128 0x1d
 1633 04d7 01       		.byte	0x1
 1634 04d8 50       		.byte	0x50
 1635 04d9 03       		.byte	0x3
 1636 04da F3       		.byte	0xf3
 1637 04db 01       		.uleb128 0x1
 1638 04dc 50       		.byte	0x50
 1639 04dd 00       		.byte	0
 1640 04de 00       		.byte	0
 1641 04df 1A       		.uleb128 0x1a
 1642 04e0 03020000 		.4byte	0x203
 1643 04e4 01       		.byte	0x1
 1644 04e5 4001     		.2byte	0x140
 1645 04e7 00000000 		.4byte	.LFB60
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 40


 1646 04eb 0E000000 		.4byte	.LFE60
 1647 04ef BD010000 		.4byte	.LLST14
 1648 04f3 FC040000 		.4byte	0x4fc
 1649 04f7 01       		.byte	0x1
 1650 04f8 4F050000 		.4byte	0x54f
 1651 04fc 1B       		.uleb128 0x1b
 1652 04fd 4A320000 		.4byte	.LASF38
 1653 0501 C8020000 		.4byte	0x2c8
 1654 0505 01       		.byte	0x1
 1655 0506 DD010000 		.4byte	.LLST15
 1656 050a 1F       		.uleb128 0x1f
 1657 050b FD300000 		.4byte	.LASF39
 1658 050f 01       		.byte	0x1
 1659 0510 4001     		.2byte	0x140
 1660 0512 5B000000 		.4byte	0x5b
 1661 0516 FE010000 		.4byte	.LLST16
 1662 051a 1F       		.uleb128 0x1f
 1663 051b 3A170000 		.4byte	.LASF42
 1664 051f 01       		.byte	0x1
 1665 0520 4001     		.2byte	0x140
 1666 0522 5B000000 		.4byte	0x5b
 1667 0526 1F020000 		.4byte	.LLST17
 1668 052a 1C       		.uleb128 0x1c
 1669 052b 0C000000 		.4byte	.LVL18
 1670 052f 22040000 		.4byte	0x422
 1671 0533 1D       		.uleb128 0x1d
 1672 0534 01       		.byte	0x1
 1673 0535 53       		.byte	0x53
 1674 0536 01       		.byte	0x1
 1675 0537 31       		.byte	0x31
 1676 0538 1D       		.uleb128 0x1d
 1677 0539 01       		.byte	0x1
 1678 053a 52       		.byte	0x52
 1679 053b 03       		.byte	0x3
 1680 053c F3       		.byte	0xf3
 1681 053d 01       		.uleb128 0x1
 1682 053e 52       		.byte	0x52
 1683 053f 1D       		.uleb128 0x1d
 1684 0540 01       		.byte	0x1
 1685 0541 51       		.byte	0x51
 1686 0542 03       		.byte	0x3
 1687 0543 F3       		.byte	0xf3
 1688 0544 01       		.uleb128 0x1
 1689 0545 51       		.byte	0x51
 1690 0546 1D       		.uleb128 0x1d
 1691 0547 01       		.byte	0x1
 1692 0548 50       		.byte	0x50
 1693 0549 03       		.byte	0x3
 1694 054a F3       		.byte	0xf3
 1695 054b 01       		.uleb128 0x1
 1696 054c 50       		.byte	0x50
 1697 054d 00       		.byte	0
 1698 054e 00       		.byte	0
 1699 054f 1A       		.uleb128 0x1a
 1700 0550 AA010000 		.4byte	0x1aa
 1701 0554 01       		.byte	0x1
 1702 0555 4501     		.2byte	0x145
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 41


 1703 0557 00000000 		.4byte	.LFB61
 1704 055b 0E000000 		.4byte	.LFE61
 1705 055f 40020000 		.4byte	.LLST18
 1706 0563 6C050000 		.4byte	0x56c
 1707 0567 01       		.byte	0x1
 1708 0568 D1050000 		.4byte	0x5d1
 1709 056c 1B       		.uleb128 0x1b
 1710 056d 4A320000 		.4byte	.LASF38
 1711 0571 C8020000 		.4byte	0x2c8
 1712 0575 01       		.byte	0x1
 1713 0576 60020000 		.4byte	.LLST19
 1714 057a 1F       		.uleb128 0x1f
 1715 057b FD300000 		.4byte	.LASF39
 1716 057f 01       		.byte	0x1
 1717 0580 4501     		.2byte	0x145
 1718 0582 5B000000 		.4byte	0x5b
 1719 0586 81020000 		.4byte	.LLST20
 1720 058a 1F       		.uleb128 0x1f
 1721 058b 3A170000 		.4byte	.LASF42
 1722 058f 01       		.byte	0x1
 1723 0590 4501     		.2byte	0x145
 1724 0592 5B000000 		.4byte	0x5b
 1725 0596 A2020000 		.4byte	.LLST21
 1726 059a 1F       		.uleb128 0x1f
 1727 059b 00420000 		.4byte	.LASF40
 1728 059f 01       		.byte	0x1
 1729 05a0 4501     		.2byte	0x145
 1730 05a2 5B000000 		.4byte	0x5b
 1731 05a6 C3020000 		.4byte	.LLST22
 1732 05aa 1C       		.uleb128 0x1c
 1733 05ab 0C000000 		.4byte	.LVL23
 1734 05af 22040000 		.4byte	0x422
 1735 05b3 1D       		.uleb128 0x1d
 1736 05b4 01       		.byte	0x1
 1737 05b5 53       		.byte	0x53
 1738 05b6 03       		.byte	0x3
 1739 05b7 F3       		.byte	0xf3
 1740 05b8 01       		.uleb128 0x1
 1741 05b9 53       		.byte	0x53
 1742 05ba 1D       		.uleb128 0x1d
 1743 05bb 01       		.byte	0x1
 1744 05bc 52       		.byte	0x52
 1745 05bd 03       		.byte	0x3
 1746 05be F3       		.byte	0xf3
 1747 05bf 01       		.uleb128 0x1
 1748 05c0 52       		.byte	0x52
 1749 05c1 1D       		.uleb128 0x1d
 1750 05c2 01       		.byte	0x1
 1751 05c3 51       		.byte	0x51
 1752 05c4 03       		.byte	0x3
 1753 05c5 F3       		.byte	0xf3
 1754 05c6 01       		.uleb128 0x1
 1755 05c7 51       		.byte	0x51
 1756 05c8 1D       		.uleb128 0x1d
 1757 05c9 01       		.byte	0x1
 1758 05ca 50       		.byte	0x50
 1759 05cb 03       		.byte	0x3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 42


 1760 05cc F3       		.byte	0xf3
 1761 05cd 01       		.uleb128 0x1
 1762 05ce 50       		.byte	0x50
 1763 05cf 00       		.byte	0
 1764 05d0 00       		.byte	0
 1765 05d1 18       		.uleb128 0x18
 1766 05d2 F1020000 		.4byte	0x2f1
 1767 05d6 52260000 		.4byte	.LASF20
 1768 05da 00000000 		.4byte	.LFB62
 1769 05de 20000000 		.4byte	.LFE62
 1770 05e2 02       		.byte	0x2
 1771 05e3 7D       		.byte	0x7d
 1772 05e4 00       		.sleb128 0
 1773 05e5 EE050000 		.4byte	0x5ee
 1774 05e9 01       		.byte	0x1
 1775 05ea FF050000 		.4byte	0x5ff
 1776 05ee 20       		.uleb128 0x20
 1777 05ef 02030000 		.4byte	0x302
 1778 05f3 E4020000 		.4byte	.LLST23
 1779 05f7 19       		.uleb128 0x19
 1780 05f8 0C030000 		.4byte	0x30c
 1781 05fc 01       		.byte	0x1
 1782 05fd 51       		.byte	0x51
 1783 05fe 00       		.byte	0
 1784 05ff 1E       		.uleb128 0x1e
 1785 0600 15010000 		.4byte	0x115
 1786 0604 01       		.byte	0x1
 1787 0605 5101     		.2byte	0x151
 1788 0607 00000000 		.4byte	.LFB63
 1789 060b 20000000 		.4byte	.LFE63
 1790 060f 02       		.byte	0x2
 1791 0610 7D       		.byte	0x7d
 1792 0611 00       		.sleb128 0
 1793 0612 1B060000 		.4byte	0x61b
 1794 0616 01       		.byte	0x1
 1795 0617 5B060000 		.4byte	0x65b
 1796 061b 1B       		.uleb128 0x1b
 1797 061c 4A320000 		.4byte	.LASF38
 1798 0620 C8020000 		.4byte	0x2c8
 1799 0624 01       		.byte	0x1
 1800 0625 05030000 		.4byte	.LLST24
 1801 0629 1F       		.uleb128 0x1f
 1802 062a FD300000 		.4byte	.LASF39
 1803 062e 01       		.byte	0x1
 1804 062f 5101     		.2byte	0x151
 1805 0631 5B000000 		.4byte	0x5b
 1806 0635 26030000 		.4byte	.LLST25
 1807 0639 21       		.uleb128 0x21
 1808 063a F1020000 		.4byte	0x2f1
 1809 063e 00000000 		.4byte	.LBB12
 1810 0642 18000000 		.4byte	.Ldebug_ranges0+0x18
 1811 0646 01       		.byte	0x1
 1812 0647 5301     		.2byte	0x153
 1813 0649 19       		.uleb128 0x19
 1814 064a 0C030000 		.4byte	0x30c
 1815 064e 01       		.byte	0x1
 1816 064f 51       		.byte	0x51
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 43


 1817 0650 20       		.uleb128 0x20
 1818 0651 02030000 		.4byte	0x302
 1819 0655 47030000 		.4byte	.LLST26
 1820 0659 00       		.byte	0
 1821 065a 00       		.byte	0
 1822 065b 22       		.uleb128 0x22
 1823 065c 19030000 		.4byte	0x319
 1824 0660 421E0000 		.4byte	.LASF23
 1825 0664 00000000 		.4byte	.LFB64
 1826 0668 0A000000 		.4byte	.LFE64
 1827 066c 68030000 		.4byte	.LLST27
 1828 0670 79060000 		.4byte	0x679
 1829 0674 01       		.byte	0x1
 1830 0675 95060000 		.4byte	0x695
 1831 0679 20       		.uleb128 0x20
 1832 067a 2A030000 		.4byte	0x32a
 1833 067e 88030000 		.4byte	.LLST28
 1834 0682 20       		.uleb128 0x20
 1835 0683 34030000 		.4byte	0x334
 1836 0687 A9030000 		.4byte	.LLST29
 1837 068b 23       		.uleb128 0x23
 1838 068c 06000000 		.4byte	.LVL30
 1839 0690 A5030000 		.4byte	0x3a5
 1840 0694 00       		.byte	0
 1841 0695 1A       		.uleb128 0x1a
 1842 0696 5B010000 		.4byte	0x15b
 1843 069a 01       		.byte	0x1
 1844 069b 6B01     		.2byte	0x16b
 1845 069d 00000000 		.4byte	.LFB65
 1846 06a1 0A000000 		.4byte	.LFE65
 1847 06a5 CA030000 		.4byte	.LLST30
 1848 06a9 B2060000 		.4byte	0x6b2
 1849 06ad 01       		.byte	0x1
 1850 06ae EA060000 		.4byte	0x6ea
 1851 06b2 1B       		.uleb128 0x1b
 1852 06b3 4A320000 		.4byte	.LASF38
 1853 06b7 C8020000 		.4byte	0x2c8
 1854 06bb 01       		.byte	0x1
 1855 06bc EA030000 		.4byte	.LLST31
 1856 06c0 24       		.uleb128 0x24
 1857 06c1 19030000 		.4byte	0x319
 1858 06c5 02000000 		.4byte	.LBB18
 1859 06c9 06000000 		.4byte	.LBE18
 1860 06cd 01       		.byte	0x1
 1861 06ce 6D01     		.2byte	0x16d
 1862 06d0 25       		.uleb128 0x25
 1863 06d1 34030000 		.4byte	0x334
 1864 06d5 01       		.byte	0x1
 1865 06d6 20       		.uleb128 0x20
 1866 06d7 2A030000 		.4byte	0x32a
 1867 06db EA030000 		.4byte	.LLST31
 1868 06df 23       		.uleb128 0x23
 1869 06e0 06000000 		.4byte	.LVL32
 1870 06e4 A5030000 		.4byte	0x3a5
 1871 06e8 00       		.byte	0
 1872 06e9 00       		.byte	0
 1873 06ea 1E       		.uleb128 0x1e
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 44


 1874 06eb 2D020000 		.4byte	0x22d
 1875 06ef 01       		.byte	0x1
 1876 06f0 7001     		.2byte	0x170
 1877 06f2 00000000 		.4byte	.LFB66
 1878 06f6 1C000000 		.4byte	.LFE66
 1879 06fa 02       		.byte	0x2
 1880 06fb 7D       		.byte	0x7d
 1881 06fc 00       		.sleb128 0
 1882 06fd 06070000 		.4byte	0x706
 1883 0701 01       		.byte	0x1
 1884 0702 25070000 		.4byte	0x725
 1885 0706 1B       		.uleb128 0x1b
 1886 0707 4A320000 		.4byte	.LASF38
 1887 070b C8020000 		.4byte	0x2c8
 1888 070f 01       		.byte	0x1
 1889 0710 0B040000 		.4byte	.LLST33
 1890 0714 1F       		.uleb128 0x1f
 1891 0715 8F6B0000 		.4byte	.LASF44
 1892 0719 01       		.byte	0x1
 1893 071a 7001     		.2byte	0x170
 1894 071c 8C000000 		.4byte	0x8c
 1895 0720 2C040000 		.4byte	.LLST34
 1896 0724 00       		.byte	0
 1897 0725 1A       		.uleb128 0x1a
 1898 0726 52020000 		.4byte	0x252
 1899 072a 01       		.byte	0x1
 1900 072b 7A01     		.2byte	0x17a
 1901 072d 00000000 		.4byte	.LFB67
 1902 0731 1E000000 		.4byte	.LFE67
 1903 0735 60040000 		.4byte	.LLST35
 1904 0739 42070000 		.4byte	0x742
 1905 073d 01       		.byte	0x1
 1906 073e 99070000 		.4byte	0x799
 1907 0742 1B       		.uleb128 0x1b
 1908 0743 4A320000 		.4byte	.LASF38
 1909 0747 C8020000 		.4byte	0x2c8
 1910 074b 01       		.byte	0x1
 1911 074c 80040000 		.4byte	.LLST36
 1912 0750 1F       		.uleb128 0x1f
 1913 0751 8F6B0000 		.4byte	.LASF44
 1914 0755 01       		.byte	0x1
 1915 0756 7A01     		.2byte	0x17a
 1916 0758 9F020000 		.4byte	0x29f
 1917 075c AC040000 		.4byte	.LLST37
 1918 0760 1F       		.uleb128 0x1f
 1919 0761 3A170000 		.4byte	.LASF42
 1920 0765 01       		.byte	0x1
 1921 0766 7A01     		.2byte	0x17a
 1922 0768 2D000000 		.4byte	0x2d
 1923 076c CD040000 		.4byte	.LLST38
 1924 0770 26       		.uleb128 0x26
 1925 0771 0A000000 		.4byte	.LBB21
 1926 0775 1A000000 		.4byte	.LBE21
 1927 0779 27       		.uleb128 0x27
 1928 077a 6900     		.ascii	"i\000"
 1929 077c 01       		.byte	0x1
 1930 077d 7E01     		.2byte	0x17e
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 45


 1931 077f 2D000000 		.4byte	0x2d
 1932 0783 F6040000 		.4byte	.LLST39
 1933 0787 1C       		.uleb128 0x1c
 1934 0788 16000000 		.4byte	.LVL39
 1935 078c EA060000 		.4byte	0x6ea
 1936 0790 1D       		.uleb128 0x1d
 1937 0791 01       		.byte	0x1
 1938 0792 50       		.byte	0x50
 1939 0793 02       		.byte	0x2
 1940 0794 77       		.byte	0x77
 1941 0795 00       		.sleb128 0
 1942 0796 00       		.byte	0
 1943 0797 00       		.byte	0
 1944 0798 00       		.byte	0
 1945 0799 1E       		.uleb128 0x1e
 1946 079a 7C020000 		.4byte	0x27c
 1947 079e 01       		.byte	0x1
 1948 079f 8C01     		.2byte	0x18c
 1949 07a1 00000000 		.4byte	.LFB68
 1950 07a5 2C000000 		.4byte	.LFE68
 1951 07a9 02       		.byte	0x2
 1952 07aa 7D       		.byte	0x7d
 1953 07ab 00       		.sleb128 0
 1954 07ac B5070000 		.4byte	0x7b5
 1955 07b0 01       		.byte	0x1
 1956 07b1 DE070000 		.4byte	0x7de
 1957 07b5 1B       		.uleb128 0x1b
 1958 07b6 4A320000 		.4byte	.LASF38
 1959 07ba C8020000 		.4byte	0x2c8
 1960 07be 01       		.byte	0x1
 1961 07bf 0A050000 		.4byte	.LLST40
 1962 07c3 26       		.uleb128 0x26
 1963 07c4 00000000 		.4byte	.LBB22
 1964 07c8 1E000000 		.4byte	.LBE22
 1965 07cc 28       		.uleb128 0x28
 1966 07cd 1A4F0000 		.4byte	.LASF46
 1967 07d1 01       		.byte	0x1
 1968 07d2 8E01     		.2byte	0x18e
 1969 07d4 5B000000 		.4byte	0x5b
 1970 07d8 2B050000 		.4byte	.LLST41
 1971 07dc 00       		.byte	0
 1972 07dd 00       		.byte	0
 1973 07de 29       		.uleb128 0x29
 1974 07df F3690000 		.4byte	.LASF47
 1975 07e3 01       		.byte	0x1
 1976 07e4 9901     		.2byte	0x199
 1977 07e6 B0000000 		.4byte	0xb0
 1978 07ea 01       		.byte	0x1
 1979 07eb 05       		.byte	0x5
 1980 07ec 03       		.byte	0x3
 1981 07ed 00000000 		.4byte	Wire
 1982 07f1 2A       		.uleb128 0x2a
 1983 07f2 96090000 		.4byte	.LASF48
 1984 07f6 01       		.byte	0x1
 1985 07f7 4E       		.byte	0x4e
 1986 07f8 03080000 		.4byte	0x803
 1987 07fc 01       		.byte	0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 46


 1988 07fd 05       		.byte	0x5
 1989 07fe 03       		.byte	0x3
 1990 07ff 00000000 		.4byte	I2CMasterState
 1991 0803 2B       		.uleb128 0x2b
 1992 0804 97000000 		.4byte	0x97
 1993 0808 2A       		.uleb128 0x2a
 1994 0809 81600000 		.4byte	.LASF49
 1995 080d 01       		.byte	0x1
 1996 080e 4F       		.byte	0x4f
 1997 080f 03080000 		.4byte	0x803
 1998 0813 01       		.byte	0x1
 1999 0814 05       		.byte	0x5
 2000 0815 03       		.byte	0x3
 2001 0816 00000000 		.4byte	I2CSlaveState
 2002 081a 2A       		.uleb128 0x2a
 2003 081b 5C3E0000 		.4byte	.LASF50
 2004 081f 01       		.byte	0x1
 2005 0820 50       		.byte	0x50
 2006 0821 03080000 		.4byte	0x803
 2007 0825 01       		.byte	0x1
 2008 0826 05       		.byte	0x5
 2009 0827 03       		.byte	0x3
 2010 0828 00000000 		.4byte	timeout
 2011 082c 2A       		.uleb128 0x2a
 2012 082d 21620000 		.4byte	.LASF51
 2013 0831 01       		.byte	0x1
 2014 0832 52       		.byte	0x52
 2015 0833 03080000 		.4byte	0x803
 2016 0837 01       		.byte	0x1
 2017 0838 05       		.byte	0x5
 2018 0839 03       		.byte	0x3
 2019 083a 00000000 		.4byte	I2CMode
 2020 083e 2C       		.uleb128 0x2c
 2021 083f 46000000 		.4byte	0x46
 2022 0843 4E080000 		.4byte	0x84e
 2023 0847 2D       		.uleb128 0x2d
 2024 0848 77000000 		.4byte	0x77
 2025 084c 7F       		.byte	0x7f
 2026 084d 00       		.byte	0
 2027 084e 2A       		.uleb128 0x2a
 2028 084f 32570000 		.4byte	.LASF52
 2029 0853 01       		.byte	0x1
 2030 0854 54       		.byte	0x54
 2031 0855 60080000 		.4byte	0x860
 2032 0859 01       		.byte	0x1
 2033 085a 05       		.byte	0x5
 2034 085b 03       		.byte	0x3
 2035 085c 00000000 		.4byte	I2CMasterBuffer
 2036 0860 2B       		.uleb128 0x2b
 2037 0861 3E080000 		.4byte	0x83e
 2038 0865 2A       		.uleb128 0x2a
 2039 0866 48290000 		.4byte	.LASF53
 2040 086a 01       		.byte	0x1
 2041 086b 55       		.byte	0x55
 2042 086c 77080000 		.4byte	0x877
 2043 0870 01       		.byte	0x1
 2044 0871 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 47


 2045 0872 03       		.byte	0x3
 2046 0873 00000000 		.4byte	I2CSlaveBuffer
 2047 0877 2B       		.uleb128 0x2b
 2048 0878 3E080000 		.4byte	0x83e
 2049 087c 2A       		.uleb128 0x2a
 2050 087d F63B0000 		.4byte	.LASF54
 2051 0881 01       		.byte	0x1
 2052 0882 56       		.byte	0x56
 2053 0883 03080000 		.4byte	0x803
 2054 0887 01       		.byte	0x1
 2055 0888 05       		.byte	0x5
 2056 0889 03       		.byte	0x3
 2057 088a 00000000 		.4byte	I2CCount
 2058 088e 2A       		.uleb128 0x2a
 2059 088f 4B4C0000 		.4byte	.LASF55
 2060 0893 01       		.byte	0x1
 2061 0894 57       		.byte	0x57
 2062 0895 03080000 		.4byte	0x803
 2063 0899 01       		.byte	0x1
 2064 089a 05       		.byte	0x5
 2065 089b 03       		.byte	0x3
 2066 089c 00000000 		.4byte	I2CReadLength
 2067 08a0 2A       		.uleb128 0x2a
 2068 08a1 265B0000 		.4byte	.LASF56
 2069 08a5 01       		.byte	0x1
 2070 08a6 58       		.byte	0x58
 2071 08a7 03080000 		.4byte	0x803
 2072 08ab 01       		.byte	0x1
 2073 08ac 05       		.byte	0x5
 2074 08ad 03       		.byte	0x3
 2075 08ae 00000000 		.4byte	I2CReadIndex
 2076 08b2 2A       		.uleb128 0x2a
 2077 08b3 04040000 		.4byte	.LASF57
 2078 08b7 01       		.byte	0x1
 2079 08b8 59       		.byte	0x59
 2080 08b9 03080000 		.4byte	0x803
 2081 08bd 01       		.byte	0x1
 2082 08be 05       		.byte	0x5
 2083 08bf 03       		.byte	0x3
 2084 08c0 00000000 		.4byte	I2CWriteLength
 2085 08c4 2A       		.uleb128 0x2a
 2086 08c5 03600000 		.4byte	.LASF58
 2087 08c9 01       		.byte	0x1
 2088 08ca 5B       		.byte	0x5b
 2089 08cb 03080000 		.4byte	0x803
 2090 08cf 01       		.byte	0x1
 2091 08d0 05       		.byte	0x5
 2092 08d1 03       		.byte	0x3
 2093 08d2 00000000 		.4byte	RdIndex
 2094 08d6 2A       		.uleb128 0x2a
 2095 08d7 5E320000 		.4byte	.LASF59
 2096 08db 01       		.byte	0x1
 2097 08dc 5C       		.byte	0x5c
 2098 08dd 03080000 		.4byte	0x803
 2099 08e1 01       		.byte	0x1
 2100 08e2 05       		.byte	0x5
 2101 08e3 03       		.byte	0x3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 48


 2102 08e4 00000000 		.4byte	WrIndex
 2103 08e8 00       		.byte	0
 2104              		.section	.debug_abbrev,"",%progbits
 2105              	.Ldebug_abbrev0:
 2106 0000 01       		.uleb128 0x1
 2107 0001 11       		.uleb128 0x11
 2108 0002 01       		.byte	0x1
 2109 0003 25       		.uleb128 0x25
 2110 0004 0E       		.uleb128 0xe
 2111 0005 13       		.uleb128 0x13
 2112 0006 0B       		.uleb128 0xb
 2113 0007 03       		.uleb128 0x3
 2114 0008 0E       		.uleb128 0xe
 2115 0009 1B       		.uleb128 0x1b
 2116 000a 0E       		.uleb128 0xe
 2117 000b 55       		.uleb128 0x55
 2118 000c 06       		.uleb128 0x6
 2119 000d 11       		.uleb128 0x11
 2120 000e 01       		.uleb128 0x1
 2121 000f 52       		.uleb128 0x52
 2122 0010 01       		.uleb128 0x1
 2123 0011 10       		.uleb128 0x10
 2124 0012 06       		.uleb128 0x6
 2125 0013 9942     		.uleb128 0x2119
 2126 0015 06       		.uleb128 0x6
 2127 0016 00       		.byte	0
 2128 0017 00       		.byte	0
 2129 0018 02       		.uleb128 0x2
 2130 0019 16       		.uleb128 0x16
 2131 001a 00       		.byte	0
 2132 001b 03       		.uleb128 0x3
 2133 001c 0E       		.uleb128 0xe
 2134 001d 3A       		.uleb128 0x3a
 2135 001e 0B       		.uleb128 0xb
 2136 001f 3B       		.uleb128 0x3b
 2137 0020 0B       		.uleb128 0xb
 2138 0021 49       		.uleb128 0x49
 2139 0022 13       		.uleb128 0x13
 2140 0023 00       		.byte	0
 2141 0024 00       		.byte	0
 2142 0025 03       		.uleb128 0x3
 2143 0026 24       		.uleb128 0x24
 2144 0027 00       		.byte	0
 2145 0028 0B       		.uleb128 0xb
 2146 0029 0B       		.uleb128 0xb
 2147 002a 3E       		.uleb128 0x3e
 2148 002b 0B       		.uleb128 0xb
 2149 002c 03       		.uleb128 0x3
 2150 002d 0E       		.uleb128 0xe
 2151 002e 00       		.byte	0
 2152 002f 00       		.byte	0
 2153 0030 04       		.uleb128 0x4
 2154 0031 24       		.uleb128 0x24
 2155 0032 00       		.byte	0
 2156 0033 0B       		.uleb128 0xb
 2157 0034 0B       		.uleb128 0xb
 2158 0035 3E       		.uleb128 0x3e
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 49


 2159 0036 0B       		.uleb128 0xb
 2160 0037 03       		.uleb128 0x3
 2161 0038 08       		.uleb128 0x8
 2162 0039 00       		.byte	0
 2163 003a 00       		.byte	0
 2164 003b 05       		.uleb128 0x5
 2165 003c 02       		.uleb128 0x2
 2166 003d 01       		.byte	0x1
 2167 003e 03       		.uleb128 0x3
 2168 003f 0E       		.uleb128 0xe
 2169 0040 0B       		.uleb128 0xb
 2170 0041 0B       		.uleb128 0xb
 2171 0042 3A       		.uleb128 0x3a
 2172 0043 0B       		.uleb128 0xb
 2173 0044 3B       		.uleb128 0x3b
 2174 0045 0B       		.uleb128 0xb
 2175 0046 01       		.uleb128 0x1
 2176 0047 13       		.uleb128 0x13
 2177 0048 00       		.byte	0
 2178 0049 00       		.byte	0
 2179 004a 06       		.uleb128 0x6
 2180 004b 2E       		.uleb128 0x2e
 2181 004c 01       		.byte	0x1
 2182 004d 3F       		.uleb128 0x3f
 2183 004e 0C       		.uleb128 0xc
 2184 004f 03       		.uleb128 0x3
 2185 0050 0E       		.uleb128 0xe
 2186 0051 3A       		.uleb128 0x3a
 2187 0052 0B       		.uleb128 0xb
 2188 0053 3B       		.uleb128 0x3b
 2189 0054 0B       		.uleb128 0xb
 2190 0055 49       		.uleb128 0x49
 2191 0056 13       		.uleb128 0x13
 2192 0057 3C       		.uleb128 0x3c
 2193 0058 0C       		.uleb128 0xc
 2194 0059 64       		.uleb128 0x64
 2195 005a 13       		.uleb128 0x13
 2196 005b 01       		.uleb128 0x1
 2197 005c 13       		.uleb128 0x13
 2198 005d 00       		.byte	0
 2199 005e 00       		.byte	0
 2200 005f 07       		.uleb128 0x7
 2201 0060 05       		.uleb128 0x5
 2202 0061 00       		.byte	0
 2203 0062 49       		.uleb128 0x49
 2204 0063 13       		.uleb128 0x13
 2205 0064 34       		.uleb128 0x34
 2206 0065 0C       		.uleb128 0xc
 2207 0066 00       		.byte	0
 2208 0067 00       		.byte	0
 2209 0068 08       		.uleb128 0x8
 2210 0069 2E       		.uleb128 0x2e
 2211 006a 01       		.byte	0x1
 2212 006b 3F       		.uleb128 0x3f
 2213 006c 0C       		.uleb128 0xc
 2214 006d 03       		.uleb128 0x3
 2215 006e 0E       		.uleb128 0xe
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 50


 2216 006f 3A       		.uleb128 0x3a
 2217 0070 0B       		.uleb128 0xb
 2218 0071 3B       		.uleb128 0x3b
 2219 0072 0B       		.uleb128 0xb
 2220 0073 8740     		.uleb128 0x2007
 2221 0075 0E       		.uleb128 0xe
 2222 0076 3C       		.uleb128 0x3c
 2223 0077 0C       		.uleb128 0xc
 2224 0078 64       		.uleb128 0x64
 2225 0079 13       		.uleb128 0x13
 2226 007a 01       		.uleb128 0x1
 2227 007b 13       		.uleb128 0x13
 2228 007c 00       		.byte	0
 2229 007d 00       		.byte	0
 2230 007e 09       		.uleb128 0x9
 2231 007f 05       		.uleb128 0x5
 2232 0080 00       		.byte	0
 2233 0081 49       		.uleb128 0x49
 2234 0082 13       		.uleb128 0x13
 2235 0083 00       		.byte	0
 2236 0084 00       		.byte	0
 2237 0085 0A       		.uleb128 0xa
 2238 0086 2E       		.uleb128 0x2e
 2239 0087 01       		.byte	0x1
 2240 0088 3F       		.uleb128 0x3f
 2241 0089 0C       		.uleb128 0xc
 2242 008a 03       		.uleb128 0x3
 2243 008b 0E       		.uleb128 0xe
 2244 008c 3A       		.uleb128 0x3a
 2245 008d 0B       		.uleb128 0xb
 2246 008e 3B       		.uleb128 0x3b
 2247 008f 0B       		.uleb128 0xb
 2248 0090 8740     		.uleb128 0x2007
 2249 0092 0E       		.uleb128 0xe
 2250 0093 49       		.uleb128 0x49
 2251 0094 13       		.uleb128 0x13
 2252 0095 3C       		.uleb128 0x3c
 2253 0096 0C       		.uleb128 0xc
 2254 0097 64       		.uleb128 0x64
 2255 0098 13       		.uleb128 0x13
 2256 0099 01       		.uleb128 0x1
 2257 009a 13       		.uleb128 0x13
 2258 009b 00       		.byte	0
 2259 009c 00       		.byte	0
 2260 009d 0B       		.uleb128 0xb
 2261 009e 2E       		.uleb128 0x2e
 2262 009f 01       		.byte	0x1
 2263 00a0 3F       		.uleb128 0x3f
 2264 00a1 0C       		.uleb128 0xc
 2265 00a2 03       		.uleb128 0x3
 2266 00a3 0E       		.uleb128 0xe
 2267 00a4 3A       		.uleb128 0x3a
 2268 00a5 0B       		.uleb128 0xb
 2269 00a6 3B       		.uleb128 0x3b
 2270 00a7 0B       		.uleb128 0xb
 2271 00a8 8740     		.uleb128 0x2007
 2272 00aa 0E       		.uleb128 0xe
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 51


 2273 00ab 49       		.uleb128 0x49
 2274 00ac 13       		.uleb128 0x13
 2275 00ad 3C       		.uleb128 0x3c
 2276 00ae 0C       		.uleb128 0xc
 2277 00af 64       		.uleb128 0x64
 2278 00b0 13       		.uleb128 0x13
 2279 00b1 00       		.byte	0
 2280 00b2 00       		.byte	0
 2281 00b3 0C       		.uleb128 0xc
 2282 00b4 0F       		.uleb128 0xf
 2283 00b5 00       		.byte	0
 2284 00b6 0B       		.uleb128 0xb
 2285 00b7 0B       		.uleb128 0xb
 2286 00b8 49       		.uleb128 0x49
 2287 00b9 13       		.uleb128 0x13
 2288 00ba 00       		.byte	0
 2289 00bb 00       		.byte	0
 2290 00bc 0D       		.uleb128 0xd
 2291 00bd 2E       		.uleb128 0x2e
 2292 00be 01       		.byte	0x1
 2293 00bf 47       		.uleb128 0x47
 2294 00c0 13       		.uleb128 0x13
 2295 00c1 3A       		.uleb128 0x3a
 2296 00c2 0B       		.uleb128 0xb
 2297 00c3 3B       		.uleb128 0x3b
 2298 00c4 05       		.uleb128 0x5
 2299 00c5 20       		.uleb128 0x20
 2300 00c6 0B       		.uleb128 0xb
 2301 00c7 64       		.uleb128 0x64
 2302 00c8 13       		.uleb128 0x13
 2303 00c9 01       		.uleb128 0x1
 2304 00ca 13       		.uleb128 0x13
 2305 00cb 00       		.byte	0
 2306 00cc 00       		.byte	0
 2307 00cd 0E       		.uleb128 0xe
 2308 00ce 05       		.uleb128 0x5
 2309 00cf 00       		.byte	0
 2310 00d0 03       		.uleb128 0x3
 2311 00d1 0E       		.uleb128 0xe
 2312 00d2 49       		.uleb128 0x49
 2313 00d3 13       		.uleb128 0x13
 2314 00d4 34       		.uleb128 0x34
 2315 00d5 0C       		.uleb128 0xc
 2316 00d6 00       		.byte	0
 2317 00d7 00       		.byte	0
 2318 00d8 0F       		.uleb128 0xf
 2319 00d9 26       		.uleb128 0x26
 2320 00da 00       		.byte	0
 2321 00db 49       		.uleb128 0x49
 2322 00dc 13       		.uleb128 0x13
 2323 00dd 00       		.byte	0
 2324 00de 00       		.byte	0
 2325 00df 10       		.uleb128 0x10
 2326 00e0 2E       		.uleb128 0x2e
 2327 00e1 01       		.byte	0x1
 2328 00e2 03       		.uleb128 0x3
 2329 00e3 0E       		.uleb128 0xe
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 52


 2330 00e4 34       		.uleb128 0x34
 2331 00e5 0C       		.uleb128 0xc
 2332 00e6 20       		.uleb128 0x20
 2333 00e7 0B       		.uleb128 0xb
 2334 00e8 01       		.uleb128 0x1
 2335 00e9 13       		.uleb128 0x13
 2336 00ea 00       		.byte	0
 2337 00eb 00       		.byte	0
 2338 00ec 11       		.uleb128 0x11
 2339 00ed 05       		.uleb128 0x5
 2340 00ee 00       		.byte	0
 2341 00ef 03       		.uleb128 0x3
 2342 00f0 0E       		.uleb128 0xe
 2343 00f1 3A       		.uleb128 0x3a
 2344 00f2 0B       		.uleb128 0xb
 2345 00f3 3B       		.uleb128 0x3b
 2346 00f4 05       		.uleb128 0x5
 2347 00f5 49       		.uleb128 0x49
 2348 00f6 13       		.uleb128 0x13
 2349 00f7 00       		.byte	0
 2350 00f8 00       		.byte	0
 2351 00f9 12       		.uleb128 0x12
 2352 00fa 2E       		.uleb128 0x2e
 2353 00fb 01       		.byte	0x1
 2354 00fc 3F       		.uleb128 0x3f
 2355 00fd 0C       		.uleb128 0xc
 2356 00fe 03       		.uleb128 0x3
 2357 00ff 0E       		.uleb128 0xe
 2358 0100 3A       		.uleb128 0x3a
 2359 0101 0B       		.uleb128 0xb
 2360 0102 3B       		.uleb128 0x3b
 2361 0103 0B       		.uleb128 0xb
 2362 0104 8740     		.uleb128 0x2007
 2363 0106 0E       		.uleb128 0xe
 2364 0107 11       		.uleb128 0x11
 2365 0108 01       		.uleb128 0x1
 2366 0109 12       		.uleb128 0x12
 2367 010a 01       		.uleb128 0x1
 2368 010b 40       		.uleb128 0x40
 2369 010c 06       		.uleb128 0x6
 2370 010d 9742     		.uleb128 0x2117
 2371 010f 0C       		.uleb128 0xc
 2372 0110 01       		.uleb128 0x1
 2373 0111 13       		.uleb128 0x13
 2374 0112 00       		.byte	0
 2375 0113 00       		.byte	0
 2376 0114 13       		.uleb128 0x13
 2377 0115 0B       		.uleb128 0xb
 2378 0116 01       		.byte	0x1
 2379 0117 55       		.uleb128 0x55
 2380 0118 06       		.uleb128 0x6
 2381 0119 00       		.byte	0
 2382 011a 00       		.byte	0
 2383 011b 14       		.uleb128 0x14
 2384 011c 34       		.uleb128 0x34
 2385 011d 00       		.byte	0
 2386 011e 03       		.uleb128 0x3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 53


 2387 011f 0E       		.uleb128 0xe
 2388 0120 3A       		.uleb128 0x3a
 2389 0121 0B       		.uleb128 0xb
 2390 0122 3B       		.uleb128 0x3b
 2391 0123 0B       		.uleb128 0xb
 2392 0124 49       		.uleb128 0x49
 2393 0125 13       		.uleb128 0x13
 2394 0126 02       		.uleb128 0x2
 2395 0127 06       		.uleb128 0x6
 2396 0128 00       		.byte	0
 2397 0129 00       		.byte	0
 2398 012a 15       		.uleb128 0x15
 2399 012b 2E       		.uleb128 0x2e
 2400 012c 01       		.byte	0x1
 2401 012d 3F       		.uleb128 0x3f
 2402 012e 0C       		.uleb128 0xc
 2403 012f 03       		.uleb128 0x3
 2404 0130 0E       		.uleb128 0xe
 2405 0131 3A       		.uleb128 0x3a
 2406 0132 0B       		.uleb128 0xb
 2407 0133 3B       		.uleb128 0x3b
 2408 0134 0B       		.uleb128 0xb
 2409 0135 8740     		.uleb128 0x2007
 2410 0137 0E       		.uleb128 0xe
 2411 0138 49       		.uleb128 0x49
 2412 0139 13       		.uleb128 0x13
 2413 013a 11       		.uleb128 0x11
 2414 013b 01       		.uleb128 0x1
 2415 013c 12       		.uleb128 0x12
 2416 013d 01       		.uleb128 0x1
 2417 013e 40       		.uleb128 0x40
 2418 013f 06       		.uleb128 0x6
 2419 0140 9742     		.uleb128 0x2117
 2420 0142 0C       		.uleb128 0xc
 2421 0143 01       		.uleb128 0x1
 2422 0144 13       		.uleb128 0x13
 2423 0145 00       		.byte	0
 2424 0146 00       		.byte	0
 2425 0147 16       		.uleb128 0x16
 2426 0148 05       		.uleb128 0x5
 2427 0149 00       		.byte	0
 2428 014a 03       		.uleb128 0x3
 2429 014b 0E       		.uleb128 0xe
 2430 014c 3A       		.uleb128 0x3a
 2431 014d 0B       		.uleb128 0xb
 2432 014e 3B       		.uleb128 0x3b
 2433 014f 0B       		.uleb128 0xb
 2434 0150 49       		.uleb128 0x49
 2435 0151 13       		.uleb128 0x13
 2436 0152 02       		.uleb128 0x2
 2437 0153 06       		.uleb128 0x6
 2438 0154 00       		.byte	0
 2439 0155 00       		.byte	0
 2440 0156 17       		.uleb128 0x17
 2441 0157 2E       		.uleb128 0x2e
 2442 0158 00       		.byte	0
 2443 0159 3F       		.uleb128 0x3f
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 54


 2444 015a 0C       		.uleb128 0xc
 2445 015b 03       		.uleb128 0x3
 2446 015c 0E       		.uleb128 0xe
 2447 015d 3A       		.uleb128 0x3a
 2448 015e 0B       		.uleb128 0xb
 2449 015f 3B       		.uleb128 0x3b
 2450 0160 05       		.uleb128 0x5
 2451 0161 8740     		.uleb128 0x2007
 2452 0163 0E       		.uleb128 0xe
 2453 0164 49       		.uleb128 0x49
 2454 0165 13       		.uleb128 0x13
 2455 0166 11       		.uleb128 0x11
 2456 0167 01       		.uleb128 0x1
 2457 0168 12       		.uleb128 0x12
 2458 0169 01       		.uleb128 0x1
 2459 016a 40       		.uleb128 0x40
 2460 016b 0A       		.uleb128 0xa
 2461 016c 9742     		.uleb128 0x2117
 2462 016e 0C       		.uleb128 0xc
 2463 016f 00       		.byte	0
 2464 0170 00       		.byte	0
 2465 0171 18       		.uleb128 0x18
 2466 0172 2E       		.uleb128 0x2e
 2467 0173 01       		.byte	0x1
 2468 0174 31       		.uleb128 0x31
 2469 0175 13       		.uleb128 0x13
 2470 0176 8740     		.uleb128 0x2007
 2471 0178 0E       		.uleb128 0xe
 2472 0179 11       		.uleb128 0x11
 2473 017a 01       		.uleb128 0x1
 2474 017b 12       		.uleb128 0x12
 2475 017c 01       		.uleb128 0x1
 2476 017d 40       		.uleb128 0x40
 2477 017e 0A       		.uleb128 0xa
 2478 017f 64       		.uleb128 0x64
 2479 0180 13       		.uleb128 0x13
 2480 0181 9742     		.uleb128 0x2117
 2481 0183 0C       		.uleb128 0xc
 2482 0184 01       		.uleb128 0x1
 2483 0185 13       		.uleb128 0x13
 2484 0186 00       		.byte	0
 2485 0187 00       		.byte	0
 2486 0188 19       		.uleb128 0x19
 2487 0189 05       		.uleb128 0x5
 2488 018a 00       		.byte	0
 2489 018b 31       		.uleb128 0x31
 2490 018c 13       		.uleb128 0x13
 2491 018d 02       		.uleb128 0x2
 2492 018e 0A       		.uleb128 0xa
 2493 018f 00       		.byte	0
 2494 0190 00       		.byte	0
 2495 0191 1A       		.uleb128 0x1a
 2496 0192 2E       		.uleb128 0x2e
 2497 0193 01       		.byte	0x1
 2498 0194 47       		.uleb128 0x47
 2499 0195 13       		.uleb128 0x13
 2500 0196 3A       		.uleb128 0x3a
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 55


 2501 0197 0B       		.uleb128 0xb
 2502 0198 3B       		.uleb128 0x3b
 2503 0199 05       		.uleb128 0x5
 2504 019a 11       		.uleb128 0x11
 2505 019b 01       		.uleb128 0x1
 2506 019c 12       		.uleb128 0x12
 2507 019d 01       		.uleb128 0x1
 2508 019e 40       		.uleb128 0x40
 2509 019f 06       		.uleb128 0x6
 2510 01a0 64       		.uleb128 0x64
 2511 01a1 13       		.uleb128 0x13
 2512 01a2 9742     		.uleb128 0x2117
 2513 01a4 0C       		.uleb128 0xc
 2514 01a5 01       		.uleb128 0x1
 2515 01a6 13       		.uleb128 0x13
 2516 01a7 00       		.byte	0
 2517 01a8 00       		.byte	0
 2518 01a9 1B       		.uleb128 0x1b
 2519 01aa 05       		.uleb128 0x5
 2520 01ab 00       		.byte	0
 2521 01ac 03       		.uleb128 0x3
 2522 01ad 0E       		.uleb128 0xe
 2523 01ae 49       		.uleb128 0x49
 2524 01af 13       		.uleb128 0x13
 2525 01b0 34       		.uleb128 0x34
 2526 01b1 0C       		.uleb128 0xc
 2527 01b2 02       		.uleb128 0x2
 2528 01b3 06       		.uleb128 0x6
 2529 01b4 00       		.byte	0
 2530 01b5 00       		.byte	0
 2531 01b6 1C       		.uleb128 0x1c
 2532 01b7 898201   		.uleb128 0x4109
 2533 01ba 01       		.byte	0x1
 2534 01bb 11       		.uleb128 0x11
 2535 01bc 01       		.uleb128 0x1
 2536 01bd 31       		.uleb128 0x31
 2537 01be 13       		.uleb128 0x13
 2538 01bf 00       		.byte	0
 2539 01c0 00       		.byte	0
 2540 01c1 1D       		.uleb128 0x1d
 2541 01c2 8A8201   		.uleb128 0x410a
 2542 01c5 00       		.byte	0
 2543 01c6 02       		.uleb128 0x2
 2544 01c7 0A       		.uleb128 0xa
 2545 01c8 9142     		.uleb128 0x2111
 2546 01ca 0A       		.uleb128 0xa
 2547 01cb 00       		.byte	0
 2548 01cc 00       		.byte	0
 2549 01cd 1E       		.uleb128 0x1e
 2550 01ce 2E       		.uleb128 0x2e
 2551 01cf 01       		.byte	0x1
 2552 01d0 47       		.uleb128 0x47
 2553 01d1 13       		.uleb128 0x13
 2554 01d2 3A       		.uleb128 0x3a
 2555 01d3 0B       		.uleb128 0xb
 2556 01d4 3B       		.uleb128 0x3b
 2557 01d5 05       		.uleb128 0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 56


 2558 01d6 11       		.uleb128 0x11
 2559 01d7 01       		.uleb128 0x1
 2560 01d8 12       		.uleb128 0x12
 2561 01d9 01       		.uleb128 0x1
 2562 01da 40       		.uleb128 0x40
 2563 01db 0A       		.uleb128 0xa
 2564 01dc 64       		.uleb128 0x64
 2565 01dd 13       		.uleb128 0x13
 2566 01de 9742     		.uleb128 0x2117
 2567 01e0 0C       		.uleb128 0xc
 2568 01e1 01       		.uleb128 0x1
 2569 01e2 13       		.uleb128 0x13
 2570 01e3 00       		.byte	0
 2571 01e4 00       		.byte	0
 2572 01e5 1F       		.uleb128 0x1f
 2573 01e6 05       		.uleb128 0x5
 2574 01e7 00       		.byte	0
 2575 01e8 03       		.uleb128 0x3
 2576 01e9 0E       		.uleb128 0xe
 2577 01ea 3A       		.uleb128 0x3a
 2578 01eb 0B       		.uleb128 0xb
 2579 01ec 3B       		.uleb128 0x3b
 2580 01ed 05       		.uleb128 0x5
 2581 01ee 49       		.uleb128 0x49
 2582 01ef 13       		.uleb128 0x13
 2583 01f0 02       		.uleb128 0x2
 2584 01f1 06       		.uleb128 0x6
 2585 01f2 00       		.byte	0
 2586 01f3 00       		.byte	0
 2587 01f4 20       		.uleb128 0x20
 2588 01f5 05       		.uleb128 0x5
 2589 01f6 00       		.byte	0
 2590 01f7 31       		.uleb128 0x31
 2591 01f8 13       		.uleb128 0x13
 2592 01f9 02       		.uleb128 0x2
 2593 01fa 06       		.uleb128 0x6
 2594 01fb 00       		.byte	0
 2595 01fc 00       		.byte	0
 2596 01fd 21       		.uleb128 0x21
 2597 01fe 1D       		.uleb128 0x1d
 2598 01ff 01       		.byte	0x1
 2599 0200 31       		.uleb128 0x31
 2600 0201 13       		.uleb128 0x13
 2601 0202 52       		.uleb128 0x52
 2602 0203 01       		.uleb128 0x1
 2603 0204 55       		.uleb128 0x55
 2604 0205 06       		.uleb128 0x6
 2605 0206 58       		.uleb128 0x58
 2606 0207 0B       		.uleb128 0xb
 2607 0208 59       		.uleb128 0x59
 2608 0209 05       		.uleb128 0x5
 2609 020a 00       		.byte	0
 2610 020b 00       		.byte	0
 2611 020c 22       		.uleb128 0x22
 2612 020d 2E       		.uleb128 0x2e
 2613 020e 01       		.byte	0x1
 2614 020f 31       		.uleb128 0x31
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 57


 2615 0210 13       		.uleb128 0x13
 2616 0211 8740     		.uleb128 0x2007
 2617 0213 0E       		.uleb128 0xe
 2618 0214 11       		.uleb128 0x11
 2619 0215 01       		.uleb128 0x1
 2620 0216 12       		.uleb128 0x12
 2621 0217 01       		.uleb128 0x1
 2622 0218 40       		.uleb128 0x40
 2623 0219 06       		.uleb128 0x6
 2624 021a 64       		.uleb128 0x64
 2625 021b 13       		.uleb128 0x13
 2626 021c 9742     		.uleb128 0x2117
 2627 021e 0C       		.uleb128 0xc
 2628 021f 01       		.uleb128 0x1
 2629 0220 13       		.uleb128 0x13
 2630 0221 00       		.byte	0
 2631 0222 00       		.byte	0
 2632 0223 23       		.uleb128 0x23
 2633 0224 898201   		.uleb128 0x4109
 2634 0227 00       		.byte	0
 2635 0228 11       		.uleb128 0x11
 2636 0229 01       		.uleb128 0x1
 2637 022a 31       		.uleb128 0x31
 2638 022b 13       		.uleb128 0x13
 2639 022c 00       		.byte	0
 2640 022d 00       		.byte	0
 2641 022e 24       		.uleb128 0x24
 2642 022f 1D       		.uleb128 0x1d
 2643 0230 01       		.byte	0x1
 2644 0231 31       		.uleb128 0x31
 2645 0232 13       		.uleb128 0x13
 2646 0233 11       		.uleb128 0x11
 2647 0234 01       		.uleb128 0x1
 2648 0235 12       		.uleb128 0x12
 2649 0236 01       		.uleb128 0x1
 2650 0237 58       		.uleb128 0x58
 2651 0238 0B       		.uleb128 0xb
 2652 0239 59       		.uleb128 0x59
 2653 023a 05       		.uleb128 0x5
 2654 023b 00       		.byte	0
 2655 023c 00       		.byte	0
 2656 023d 25       		.uleb128 0x25
 2657 023e 05       		.uleb128 0x5
 2658 023f 00       		.byte	0
 2659 0240 31       		.uleb128 0x31
 2660 0241 13       		.uleb128 0x13
 2661 0242 1C       		.uleb128 0x1c
 2662 0243 0B       		.uleb128 0xb
 2663 0244 00       		.byte	0
 2664 0245 00       		.byte	0
 2665 0246 26       		.uleb128 0x26
 2666 0247 0B       		.uleb128 0xb
 2667 0248 01       		.byte	0x1
 2668 0249 11       		.uleb128 0x11
 2669 024a 01       		.uleb128 0x1
 2670 024b 12       		.uleb128 0x12
 2671 024c 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 58


 2672 024d 00       		.byte	0
 2673 024e 00       		.byte	0
 2674 024f 27       		.uleb128 0x27
 2675 0250 34       		.uleb128 0x34
 2676 0251 00       		.byte	0
 2677 0252 03       		.uleb128 0x3
 2678 0253 08       		.uleb128 0x8
 2679 0254 3A       		.uleb128 0x3a
 2680 0255 0B       		.uleb128 0xb
 2681 0256 3B       		.uleb128 0x3b
 2682 0257 05       		.uleb128 0x5
 2683 0258 49       		.uleb128 0x49
 2684 0259 13       		.uleb128 0x13
 2685 025a 02       		.uleb128 0x2
 2686 025b 06       		.uleb128 0x6
 2687 025c 00       		.byte	0
 2688 025d 00       		.byte	0
 2689 025e 28       		.uleb128 0x28
 2690 025f 34       		.uleb128 0x34
 2691 0260 00       		.byte	0
 2692 0261 03       		.uleb128 0x3
 2693 0262 0E       		.uleb128 0xe
 2694 0263 3A       		.uleb128 0x3a
 2695 0264 0B       		.uleb128 0xb
 2696 0265 3B       		.uleb128 0x3b
 2697 0266 05       		.uleb128 0x5
 2698 0267 49       		.uleb128 0x49
 2699 0268 13       		.uleb128 0x13
 2700 0269 02       		.uleb128 0x2
 2701 026a 06       		.uleb128 0x6
 2702 026b 00       		.byte	0
 2703 026c 00       		.byte	0
 2704 026d 29       		.uleb128 0x29
 2705 026e 34       		.uleb128 0x34
 2706 026f 00       		.byte	0
 2707 0270 03       		.uleb128 0x3
 2708 0271 0E       		.uleb128 0xe
 2709 0272 3A       		.uleb128 0x3a
 2710 0273 0B       		.uleb128 0xb
 2711 0274 3B       		.uleb128 0x3b
 2712 0275 05       		.uleb128 0x5
 2713 0276 49       		.uleb128 0x49
 2714 0277 13       		.uleb128 0x13
 2715 0278 3F       		.uleb128 0x3f
 2716 0279 0C       		.uleb128 0xc
 2717 027a 02       		.uleb128 0x2
 2718 027b 0A       		.uleb128 0xa
 2719 027c 00       		.byte	0
 2720 027d 00       		.byte	0
 2721 027e 2A       		.uleb128 0x2a
 2722 027f 34       		.uleb128 0x34
 2723 0280 00       		.byte	0
 2724 0281 03       		.uleb128 0x3
 2725 0282 0E       		.uleb128 0xe
 2726 0283 3A       		.uleb128 0x3a
 2727 0284 0B       		.uleb128 0xb
 2728 0285 3B       		.uleb128 0x3b
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 59


 2729 0286 0B       		.uleb128 0xb
 2730 0287 49       		.uleb128 0x49
 2731 0288 13       		.uleb128 0x13
 2732 0289 3F       		.uleb128 0x3f
 2733 028a 0C       		.uleb128 0xc
 2734 028b 02       		.uleb128 0x2
 2735 028c 0A       		.uleb128 0xa
 2736 028d 00       		.byte	0
 2737 028e 00       		.byte	0
 2738 028f 2B       		.uleb128 0x2b
 2739 0290 35       		.uleb128 0x35
 2740 0291 00       		.byte	0
 2741 0292 49       		.uleb128 0x49
 2742 0293 13       		.uleb128 0x13
 2743 0294 00       		.byte	0
 2744 0295 00       		.byte	0
 2745 0296 2C       		.uleb128 0x2c
 2746 0297 01       		.uleb128 0x1
 2747 0298 01       		.byte	0x1
 2748 0299 49       		.uleb128 0x49
 2749 029a 13       		.uleb128 0x13
 2750 029b 01       		.uleb128 0x1
 2751 029c 13       		.uleb128 0x13
 2752 029d 00       		.byte	0
 2753 029e 00       		.byte	0
 2754 029f 2D       		.uleb128 0x2d
 2755 02a0 21       		.uleb128 0x21
 2756 02a1 00       		.byte	0
 2757 02a2 49       		.uleb128 0x49
 2758 02a3 13       		.uleb128 0x13
 2759 02a4 2F       		.uleb128 0x2f
 2760 02a5 0B       		.uleb128 0xb
 2761 02a6 00       		.byte	0
 2762 02a7 00       		.byte	0
 2763 02a8 00       		.byte	0
 2764              		.section	.debug_loc,"",%progbits
 2765              	.Ldebug_loc0:
 2766              	.LLST0:
 2767 0000 00000000 		.4byte	.LFB51
 2768 0004 08000000 		.4byte	.LCFI0
 2769 0008 0200     		.2byte	0x2
 2770 000a 7D       		.byte	0x7d
 2771 000b 00       		.sleb128 0
 2772 000c 08000000 		.4byte	.LCFI0
 2773 0010 4C010000 		.4byte	.LFE51
 2774 0014 0200     		.2byte	0x2
 2775 0016 7D       		.byte	0x7d
 2776 0017 08       		.sleb128 8
 2777 0018 00000000 		.4byte	0
 2778 001c 00000000 		.4byte	0
 2779              	.LLST1:
 2780 0020 0C000000 		.4byte	.LVL0
 2781 0024 10000000 		.4byte	.LVL1
 2782 0028 0100     		.2byte	0x1
 2783 002a 52       		.byte	0x52
 2784 002b 00000000 		.4byte	0
 2785 002f 00000000 		.4byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 60


 2786              	.LLST2:
 2787 0033 00000000 		.4byte	.LFB52
 2788 0037 08000000 		.4byte	.LCFI1
 2789 003b 0200     		.2byte	0x2
 2790 003d 7D       		.byte	0x7d
 2791 003e 00       		.sleb128 0
 2792 003f 08000000 		.4byte	.LCFI1
 2793 0043 9C000000 		.4byte	.LFE52
 2794 0047 0200     		.2byte	0x2
 2795 0049 7D       		.byte	0x7d
 2796 004a 0C       		.sleb128 12
 2797 004b 00000000 		.4byte	0
 2798 004f 00000000 		.4byte	0
 2799              	.LLST3:
 2800 0053 00000000 		.4byte	.LVL2
 2801 0057 5E000000 		.4byte	.LVL3
 2802 005b 0100     		.2byte	0x1
 2803 005d 50       		.byte	0x50
 2804 005e 5E000000 		.4byte	.LVL3
 2805 0062 9C000000 		.4byte	.LFE52
 2806 0066 0400     		.2byte	0x4
 2807 0068 F3       		.byte	0xf3
 2808 0069 01       		.uleb128 0x1
 2809 006a 50       		.byte	0x50
 2810 006b 9F       		.byte	0x9f
 2811 006c 00000000 		.4byte	0
 2812 0070 00000000 		.4byte	0
 2813              	.LLST4:
 2814 0074 00000000 		.4byte	.LFB57
 2815 0078 02000000 		.4byte	.LCFI2
 2816 007c 0200     		.2byte	0x2
 2817 007e 7D       		.byte	0x7d
 2818 007f 00       		.sleb128 0
 2819 0080 02000000 		.4byte	.LCFI2
 2820 0084 0A000000 		.4byte	.LFE57
 2821 0088 0200     		.2byte	0x2
 2822 008a 7D       		.byte	0x7d
 2823 008b 08       		.sleb128 8
 2824 008c 00000000 		.4byte	0
 2825 0090 00000000 		.4byte	0
 2826              	.LLST5:
 2827 0094 00000000 		.4byte	.LVL5
 2828 0098 04000000 		.4byte	.LVL6
 2829 009c 0100     		.2byte	0x1
 2830 009e 50       		.byte	0x50
 2831 009f 04000000 		.4byte	.LVL6
 2832 00a3 0A000000 		.4byte	.LFE57
 2833 00a7 0400     		.2byte	0x4
 2834 00a9 F3       		.byte	0xf3
 2835 00aa 01       		.uleb128 0x1
 2836 00ab 50       		.byte	0x50
 2837 00ac 9F       		.byte	0x9f
 2838 00ad 00000000 		.4byte	0
 2839 00b1 00000000 		.4byte	0
 2840              	.LLST6:
 2841 00b5 00000000 		.4byte	.LVL8
 2842 00b9 04000000 		.4byte	.LVL10
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 61


 2843 00bd 0100     		.2byte	0x1
 2844 00bf 50       		.byte	0x50
 2845 00c0 04000000 		.4byte	.LVL10
 2846 00c4 30000000 		.4byte	.LFE58
 2847 00c8 0400     		.2byte	0x4
 2848 00ca F3       		.byte	0xf3
 2849 00cb 01       		.uleb128 0x1
 2850 00cc 50       		.byte	0x50
 2851 00cd 9F       		.byte	0x9f
 2852 00ce 00000000 		.4byte	0
 2853 00d2 00000000 		.4byte	0
 2854              	.LLST7:
 2855 00d6 00000000 		.4byte	.LVL8
 2856 00da 12000000 		.4byte	.LVL12
 2857 00de 0100     		.2byte	0x1
 2858 00e0 51       		.byte	0x51
 2859 00e1 12000000 		.4byte	.LVL12
 2860 00e5 30000000 		.4byte	.LFE58
 2861 00e9 0500     		.2byte	0x5
 2862 00eb 03       		.byte	0x3
 2863 00ec 01000000 		.4byte	I2CMasterBuffer+1
 2864 00f0 00000000 		.4byte	0
 2865 00f4 00000000 		.4byte	0
 2866              	.LLST8:
 2867 00f8 00000000 		.4byte	.LVL8
 2868 00fc 0A000000 		.4byte	.LVL11
 2869 0100 0100     		.2byte	0x1
 2870 0102 52       		.byte	0x52
 2871 0103 0A000000 		.4byte	.LVL11
 2872 0107 30000000 		.4byte	.LFE58
 2873 010b 0400     		.2byte	0x4
 2874 010d F3       		.byte	0xf3
 2875 010e 01       		.uleb128 0x1
 2876 010f 52       		.byte	0x52
 2877 0110 9F       		.byte	0x9f
 2878 0111 00000000 		.4byte	0
 2879 0115 00000000 		.4byte	0
 2880              	.LLST9:
 2881 0119 00000000 		.4byte	.LVL8
 2882 011d 02000000 		.4byte	.LVL9
 2883 0121 0100     		.2byte	0x1
 2884 0123 53       		.byte	0x53
 2885 0124 02000000 		.4byte	.LVL9
 2886 0128 30000000 		.4byte	.LFE58
 2887 012c 0400     		.2byte	0x4
 2888 012e F3       		.byte	0xf3
 2889 012f 01       		.uleb128 0x1
 2890 0130 53       		.byte	0x53
 2891 0131 9F       		.byte	0x9f
 2892 0132 00000000 		.4byte	0
 2893 0136 00000000 		.4byte	0
 2894              	.LLST10:
 2895 013a 00000000 		.4byte	.LFB59
 2896 013e 02000000 		.4byte	.LCFI3
 2897 0142 0200     		.2byte	0x2
 2898 0144 7D       		.byte	0x7d
 2899 0145 00       		.sleb128 0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 62


 2900 0146 02000000 		.4byte	.LCFI3
 2901 014a 0A000000 		.4byte	.LFE59
 2902 014e 0200     		.2byte	0x2
 2903 0150 7D       		.byte	0x7d
 2904 0151 08       		.sleb128 8
 2905 0152 00000000 		.4byte	0
 2906 0156 00000000 		.4byte	0
 2907              	.LLST11:
 2908 015a 00000000 		.4byte	.LVL13
 2909 015e 07000000 		.4byte	.LVL14-1
 2910 0162 0100     		.2byte	0x1
 2911 0164 50       		.byte	0x50
 2912 0165 07000000 		.4byte	.LVL14-1
 2913 0169 0A000000 		.4byte	.LFE59
 2914 016d 0400     		.2byte	0x4
 2915 016f F3       		.byte	0xf3
 2916 0170 01       		.uleb128 0x1
 2917 0171 50       		.byte	0x50
 2918 0172 9F       		.byte	0x9f
 2919 0173 00000000 		.4byte	0
 2920 0177 00000000 		.4byte	0
 2921              	.LLST12:
 2922 017b 00000000 		.4byte	.LVL13
 2923 017f 07000000 		.4byte	.LVL14-1
 2924 0183 0100     		.2byte	0x1
 2925 0185 51       		.byte	0x51
 2926 0186 07000000 		.4byte	.LVL14-1
 2927 018a 0A000000 		.4byte	.LFE59
 2928 018e 0400     		.2byte	0x4
 2929 0190 F3       		.byte	0xf3
 2930 0191 01       		.uleb128 0x1
 2931 0192 51       		.byte	0x51
 2932 0193 9F       		.byte	0x9f
 2933 0194 00000000 		.4byte	0
 2934 0198 00000000 		.4byte	0
 2935              	.LLST13:
 2936 019c 00000000 		.4byte	.LVL13
 2937 01a0 07000000 		.4byte	.LVL14-1
 2938 01a4 0100     		.2byte	0x1
 2939 01a6 52       		.byte	0x52
 2940 01a7 07000000 		.4byte	.LVL14-1
 2941 01ab 0A000000 		.4byte	.LFE59
 2942 01af 0400     		.2byte	0x4
 2943 01b1 F3       		.byte	0xf3
 2944 01b2 01       		.uleb128 0x1
 2945 01b3 52       		.byte	0x52
 2946 01b4 9F       		.byte	0x9f
 2947 01b5 00000000 		.4byte	0
 2948 01b9 00000000 		.4byte	0
 2949              	.LLST14:
 2950 01bd 00000000 		.4byte	.LFB60
 2951 01c1 02000000 		.4byte	.LCFI4
 2952 01c5 0200     		.2byte	0x2
 2953 01c7 7D       		.byte	0x7d
 2954 01c8 00       		.sleb128 0
 2955 01c9 02000000 		.4byte	.LCFI4
 2956 01cd 0E000000 		.4byte	.LFE60
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 63


 2957 01d1 0200     		.2byte	0x2
 2958 01d3 7D       		.byte	0x7d
 2959 01d4 08       		.sleb128 8
 2960 01d5 00000000 		.4byte	0
 2961 01d9 00000000 		.4byte	0
 2962              	.LLST15:
 2963 01dd 00000000 		.4byte	.LVL15
 2964 01e1 0B000000 		.4byte	.LVL18-1
 2965 01e5 0100     		.2byte	0x1
 2966 01e7 50       		.byte	0x50
 2967 01e8 0B000000 		.4byte	.LVL18-1
 2968 01ec 0E000000 		.4byte	.LFE60
 2969 01f0 0400     		.2byte	0x4
 2970 01f2 F3       		.byte	0xf3
 2971 01f3 01       		.uleb128 0x1
 2972 01f4 50       		.byte	0x50
 2973 01f5 9F       		.byte	0x9f
 2974 01f6 00000000 		.4byte	0
 2975 01fa 00000000 		.4byte	0
 2976              	.LLST16:
 2977 01fe 00000000 		.4byte	.LVL15
 2978 0202 04000000 		.4byte	.LVL16
 2979 0206 0100     		.2byte	0x1
 2980 0208 51       		.byte	0x51
 2981 0209 04000000 		.4byte	.LVL16
 2982 020d 0E000000 		.4byte	.LFE60
 2983 0211 0400     		.2byte	0x4
 2984 0213 F3       		.byte	0xf3
 2985 0214 01       		.uleb128 0x1
 2986 0215 51       		.byte	0x51
 2987 0216 9F       		.byte	0x9f
 2988 0217 00000000 		.4byte	0
 2989 021b 00000000 		.4byte	0
 2990              	.LLST17:
 2991 021f 00000000 		.4byte	.LVL15
 2992 0223 06000000 		.4byte	.LVL17
 2993 0227 0100     		.2byte	0x1
 2994 0229 52       		.byte	0x52
 2995 022a 06000000 		.4byte	.LVL17
 2996 022e 0E000000 		.4byte	.LFE60
 2997 0232 0400     		.2byte	0x4
 2998 0234 F3       		.byte	0xf3
 2999 0235 01       		.uleb128 0x1
 3000 0236 52       		.byte	0x52
 3001 0237 9F       		.byte	0x9f
 3002 0238 00000000 		.4byte	0
 3003 023c 00000000 		.4byte	0
 3004              	.LLST18:
 3005 0240 00000000 		.4byte	.LFB61
 3006 0244 02000000 		.4byte	.LCFI5
 3007 0248 0200     		.2byte	0x2
 3008 024a 7D       		.byte	0x7d
 3009 024b 00       		.sleb128 0
 3010 024c 02000000 		.4byte	.LCFI5
 3011 0250 0E000000 		.4byte	.LFE61
 3012 0254 0200     		.2byte	0x2
 3013 0256 7D       		.byte	0x7d
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 64


 3014 0257 08       		.sleb128 8
 3015 0258 00000000 		.4byte	0
 3016 025c 00000000 		.4byte	0
 3017              	.LLST19:
 3018 0260 00000000 		.4byte	.LVL19
 3019 0264 0B000000 		.4byte	.LVL23-1
 3020 0268 0100     		.2byte	0x1
 3021 026a 50       		.byte	0x50
 3022 026b 0B000000 		.4byte	.LVL23-1
 3023 026f 0E000000 		.4byte	.LFE61
 3024 0273 0400     		.2byte	0x4
 3025 0275 F3       		.byte	0xf3
 3026 0276 01       		.uleb128 0x1
 3027 0277 50       		.byte	0x50
 3028 0278 9F       		.byte	0x9f
 3029 0279 00000000 		.4byte	0
 3030 027d 00000000 		.4byte	0
 3031              	.LLST20:
 3032 0281 00000000 		.4byte	.LVL19
 3033 0285 04000000 		.4byte	.LVL20
 3034 0289 0100     		.2byte	0x1
 3035 028b 51       		.byte	0x51
 3036 028c 04000000 		.4byte	.LVL20
 3037 0290 0E000000 		.4byte	.LFE61
 3038 0294 0400     		.2byte	0x4
 3039 0296 F3       		.byte	0xf3
 3040 0297 01       		.uleb128 0x1
 3041 0298 51       		.byte	0x51
 3042 0299 9F       		.byte	0x9f
 3043 029a 00000000 		.4byte	0
 3044 029e 00000000 		.4byte	0
 3045              	.LLST21:
 3046 02a2 00000000 		.4byte	.LVL19
 3047 02a6 06000000 		.4byte	.LVL21
 3048 02aa 0100     		.2byte	0x1
 3049 02ac 52       		.byte	0x52
 3050 02ad 06000000 		.4byte	.LVL21
 3051 02b1 0E000000 		.4byte	.LFE61
 3052 02b5 0400     		.2byte	0x4
 3053 02b7 F3       		.byte	0xf3
 3054 02b8 01       		.uleb128 0x1
 3055 02b9 52       		.byte	0x52
 3056 02ba 9F       		.byte	0x9f
 3057 02bb 00000000 		.4byte	0
 3058 02bf 00000000 		.4byte	0
 3059              	.LLST22:
 3060 02c3 00000000 		.4byte	.LVL19
 3061 02c7 08000000 		.4byte	.LVL22
 3062 02cb 0100     		.2byte	0x1
 3063 02cd 53       		.byte	0x53
 3064 02ce 08000000 		.4byte	.LVL22
 3065 02d2 0E000000 		.4byte	.LFE61
 3066 02d6 0400     		.2byte	0x4
 3067 02d8 F3       		.byte	0xf3
 3068 02d9 01       		.uleb128 0x1
 3069 02da 53       		.byte	0x53
 3070 02db 9F       		.byte	0x9f
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 65


 3071 02dc 00000000 		.4byte	0
 3072 02e0 00000000 		.4byte	0
 3073              	.LLST23:
 3074 02e4 00000000 		.4byte	.LVL24
 3075 02e8 0C000000 		.4byte	.LVL25
 3076 02ec 0100     		.2byte	0x1
 3077 02ee 50       		.byte	0x50
 3078 02ef 0C000000 		.4byte	.LVL25
 3079 02f3 20000000 		.4byte	.LFE62
 3080 02f7 0400     		.2byte	0x4
 3081 02f9 F3       		.byte	0xf3
 3082 02fa 01       		.uleb128 0x1
 3083 02fb 50       		.byte	0x50
 3084 02fc 9F       		.byte	0x9f
 3085 02fd 00000000 		.4byte	0
 3086 0301 00000000 		.4byte	0
 3087              	.LLST24:
 3088 0305 00000000 		.4byte	.LVL26
 3089 0309 0E000000 		.4byte	.LVL28
 3090 030d 0100     		.2byte	0x1
 3091 030f 50       		.byte	0x50
 3092 0310 0E000000 		.4byte	.LVL28
 3093 0314 20000000 		.4byte	.LFE63
 3094 0318 0400     		.2byte	0x4
 3095 031a F3       		.byte	0xf3
 3096 031b 01       		.uleb128 0x1
 3097 031c 50       		.byte	0x50
 3098 031d 9F       		.byte	0x9f
 3099 031e 00000000 		.4byte	0
 3100 0322 00000000 		.4byte	0
 3101              	.LLST25:
 3102 0326 00000000 		.4byte	.LVL26
 3103 032a 0C000000 		.4byte	.LVL27
 3104 032e 0100     		.2byte	0x1
 3105 0330 51       		.byte	0x51
 3106 0331 0C000000 		.4byte	.LVL27
 3107 0335 20000000 		.4byte	.LFE63
 3108 0339 0400     		.2byte	0x4
 3109 033b F3       		.byte	0xf3
 3110 033c 01       		.uleb128 0x1
 3111 033d 51       		.byte	0x51
 3112 033e 9F       		.byte	0x9f
 3113 033f 00000000 		.4byte	0
 3114 0343 00000000 		.4byte	0
 3115              	.LLST26:
 3116 0347 0C000000 		.4byte	.LVL27
 3117 034b 0E000000 		.4byte	.LVL28
 3118 034f 0100     		.2byte	0x1
 3119 0351 50       		.byte	0x50
 3120 0352 0E000000 		.4byte	.LVL28
 3121 0356 20000000 		.4byte	.LFE63
 3122 035a 0400     		.2byte	0x4
 3123 035c F3       		.byte	0xf3
 3124 035d 01       		.uleb128 0x1
 3125 035e 50       		.byte	0x50
 3126 035f 9F       		.byte	0x9f
 3127 0360 00000000 		.4byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 66


 3128 0364 00000000 		.4byte	0
 3129              	.LLST27:
 3130 0368 00000000 		.4byte	.LFB64
 3131 036c 02000000 		.4byte	.LCFI6
 3132 0370 0200     		.2byte	0x2
 3133 0372 7D       		.byte	0x7d
 3134 0373 00       		.sleb128 0
 3135 0374 02000000 		.4byte	.LCFI6
 3136 0378 0A000000 		.4byte	.LFE64
 3137 037c 0200     		.2byte	0x2
 3138 037e 7D       		.byte	0x7d
 3139 037f 08       		.sleb128 8
 3140 0380 00000000 		.4byte	0
 3141 0384 00000000 		.4byte	0
 3142              	.LLST28:
 3143 0388 00000000 		.4byte	.LVL29
 3144 038c 05000000 		.4byte	.LVL30-1
 3145 0390 0100     		.2byte	0x1
 3146 0392 50       		.byte	0x50
 3147 0393 05000000 		.4byte	.LVL30-1
 3148 0397 0A000000 		.4byte	.LFE64
 3149 039b 0400     		.2byte	0x4
 3150 039d F3       		.byte	0xf3
 3151 039e 01       		.uleb128 0x1
 3152 039f 50       		.byte	0x50
 3153 03a0 9F       		.byte	0x9f
 3154 03a1 00000000 		.4byte	0
 3155 03a5 00000000 		.4byte	0
 3156              	.LLST29:
 3157 03a9 00000000 		.4byte	.LVL29
 3158 03ad 05000000 		.4byte	.LVL30-1
 3159 03b1 0100     		.2byte	0x1
 3160 03b3 51       		.byte	0x51
 3161 03b4 05000000 		.4byte	.LVL30-1
 3162 03b8 0A000000 		.4byte	.LFE64
 3163 03bc 0400     		.2byte	0x4
 3164 03be F3       		.byte	0xf3
 3165 03bf 01       		.uleb128 0x1
 3166 03c0 51       		.byte	0x51
 3167 03c1 9F       		.byte	0x9f
 3168 03c2 00000000 		.4byte	0
 3169 03c6 00000000 		.4byte	0
 3170              	.LLST30:
 3171 03ca 00000000 		.4byte	.LFB65
 3172 03ce 02000000 		.4byte	.LCFI7
 3173 03d2 0200     		.2byte	0x2
 3174 03d4 7D       		.byte	0x7d
 3175 03d5 00       		.sleb128 0
 3176 03d6 02000000 		.4byte	.LCFI7
 3177 03da 0A000000 		.4byte	.LFE65
 3178 03de 0200     		.2byte	0x2
 3179 03e0 7D       		.byte	0x7d
 3180 03e1 08       		.sleb128 8
 3181 03e2 00000000 		.4byte	0
 3182 03e6 00000000 		.4byte	0
 3183              	.LLST31:
 3184 03ea 00000000 		.4byte	.LVL31
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 67


 3185 03ee 05000000 		.4byte	.LVL32-1
 3186 03f2 0100     		.2byte	0x1
 3187 03f4 50       		.byte	0x50
 3188 03f5 05000000 		.4byte	.LVL32-1
 3189 03f9 0A000000 		.4byte	.LFE65
 3190 03fd 0400     		.2byte	0x4
 3191 03ff F3       		.byte	0xf3
 3192 0400 01       		.uleb128 0x1
 3193 0401 50       		.byte	0x50
 3194 0402 9F       		.byte	0x9f
 3195 0403 00000000 		.4byte	0
 3196 0407 00000000 		.4byte	0
 3197              	.LLST33:
 3198 040b 00000000 		.4byte	.LVL33
 3199 040f 04000000 		.4byte	.LVL34
 3200 0413 0100     		.2byte	0x1
 3201 0415 50       		.byte	0x50
 3202 0416 04000000 		.4byte	.LVL34
 3203 041a 1C000000 		.4byte	.LFE66
 3204 041e 0400     		.2byte	0x4
 3205 0420 F3       		.byte	0xf3
 3206 0421 01       		.uleb128 0x1
 3207 0422 50       		.byte	0x50
 3208 0423 9F       		.byte	0x9f
 3209 0424 00000000 		.4byte	0
 3210 0428 00000000 		.4byte	0
 3211              	.LLST34:
 3212 042c 00000000 		.4byte	.LVL33
 3213 0430 0A000000 		.4byte	.LVL35
 3214 0434 0100     		.2byte	0x1
 3215 0436 51       		.byte	0x51
 3216 0437 0A000000 		.4byte	.LVL35
 3217 043b 0C000000 		.4byte	.LVL36
 3218 043f 0500     		.2byte	0x5
 3219 0441 70       		.byte	0x70
 3220 0442 00       		.sleb128 0
 3221 0443 72       		.byte	0x72
 3222 0444 00       		.sleb128 0
 3223 0445 22       		.byte	0x22
 3224 0446 0C000000 		.4byte	.LVL36
 3225 044a 1C000000 		.4byte	.LFE66
 3226 044e 0800     		.2byte	0x8
 3227 0450 72       		.byte	0x72
 3228 0451 00       		.sleb128 0
 3229 0452 03       		.byte	0x3
 3230 0453 00000000 		.4byte	.LANCHOR2
 3231 0457 22       		.byte	0x22
 3232 0458 00000000 		.4byte	0
 3233 045c 00000000 		.4byte	0
 3234              	.LLST35:
 3235 0460 00000000 		.4byte	.LFB67
 3236 0464 02000000 		.4byte	.LCFI8
 3237 0468 0200     		.2byte	0x2
 3238 046a 7D       		.byte	0x7d
 3239 046b 00       		.sleb128 0
 3240 046c 02000000 		.4byte	.LCFI8
 3241 0470 1E000000 		.4byte	.LFE67
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 68


 3242 0474 0200     		.2byte	0x2
 3243 0476 7D       		.byte	0x7d
 3244 0477 18       		.sleb128 24
 3245 0478 00000000 		.4byte	0
 3246 047c 00000000 		.4byte	0
 3247              	.LLST36:
 3248 0480 00000000 		.4byte	.LVL37
 3249 0484 0A000000 		.4byte	.LVL38
 3250 0488 0100     		.2byte	0x1
 3251 048a 50       		.byte	0x50
 3252 048b 0A000000 		.4byte	.LVL38
 3253 048f 1C000000 		.4byte	.LVL41
 3254 0493 0100     		.2byte	0x1
 3255 0495 57       		.byte	0x57
 3256 0496 1C000000 		.4byte	.LVL41
 3257 049a 1E000000 		.4byte	.LFE67
 3258 049e 0400     		.2byte	0x4
 3259 04a0 F3       		.byte	0xf3
 3260 04a1 01       		.uleb128 0x1
 3261 04a2 50       		.byte	0x50
 3262 04a3 9F       		.byte	0x9f
 3263 04a4 00000000 		.4byte	0
 3264 04a8 00000000 		.4byte	0
 3265              	.LLST37:
 3266 04ac 00000000 		.4byte	.LVL37
 3267 04b0 0A000000 		.4byte	.LVL38
 3268 04b4 0100     		.2byte	0x1
 3269 04b6 51       		.byte	0x51
 3270 04b7 0A000000 		.4byte	.LVL38
 3271 04bb 1E000000 		.4byte	.LFE67
 3272 04bf 0400     		.2byte	0x4
 3273 04c1 F3       		.byte	0xf3
 3274 04c2 01       		.uleb128 0x1
 3275 04c3 51       		.byte	0x51
 3276 04c4 9F       		.byte	0x9f
 3277 04c5 00000000 		.4byte	0
 3278 04c9 00000000 		.4byte	0
 3279              	.LLST38:
 3280 04cd 00000000 		.4byte	.LVL37
 3281 04d1 0A000000 		.4byte	.LVL38
 3282 04d5 0100     		.2byte	0x1
 3283 04d7 52       		.byte	0x52
 3284 04d8 0A000000 		.4byte	.LVL38
 3285 04dc 1C000000 		.4byte	.LVL40
 3286 04e0 0100     		.2byte	0x1
 3287 04e2 55       		.byte	0x55
 3288 04e3 1C000000 		.4byte	.LVL40
 3289 04e7 1E000000 		.4byte	.LFE67
 3290 04eb 0100     		.2byte	0x1
 3291 04ed 50       		.byte	0x50
 3292 04ee 00000000 		.4byte	0
 3293 04f2 00000000 		.4byte	0
 3294              	.LLST39:
 3295 04f6 00000000 		.4byte	.LVL37
 3296 04fa 0A000000 		.4byte	.LVL38
 3297 04fe 0200     		.2byte	0x2
 3298 0500 30       		.byte	0x30
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 69


 3299 0501 9F       		.byte	0x9f
 3300 0502 00000000 		.4byte	0
 3301 0506 00000000 		.4byte	0
 3302              	.LLST40:
 3303 050a 00000000 		.4byte	.LVL42
 3304 050e 08000000 		.4byte	.LVL43
 3305 0512 0100     		.2byte	0x1
 3306 0514 50       		.byte	0x50
 3307 0515 08000000 		.4byte	.LVL43
 3308 0519 2C000000 		.4byte	.LFE68
 3309 051d 0400     		.2byte	0x4
 3310 051f F3       		.byte	0xf3
 3311 0520 01       		.uleb128 0x1
 3312 0521 50       		.byte	0x50
 3313 0522 9F       		.byte	0x9f
 3314 0523 00000000 		.4byte	0
 3315 0527 00000000 		.4byte	0
 3316              	.LLST41:
 3317 052b 00000000 		.4byte	.LVL42
 3318 052f 12000000 		.4byte	.LVL44
 3319 0533 0300     		.2byte	0x3
 3320 0535 09       		.byte	0x9
 3321 0536 FF       		.byte	0xff
 3322 0537 9F       		.byte	0x9f
 3323 0538 12000000 		.4byte	.LVL44
 3324 053c 18000000 		.4byte	.LVL45
 3325 0540 0100     		.2byte	0x1
 3326 0542 51       		.byte	0x51
 3327 0543 18000000 		.4byte	.LVL45
 3328 0547 1C000000 		.4byte	.LVL46
 3329 054b 0300     		.2byte	0x3
 3330 054d 09       		.byte	0x9
 3331 054e FF       		.byte	0xff
 3332 054f 9F       		.byte	0x9f
 3333 0550 1C000000 		.4byte	.LVL46
 3334 0554 2C000000 		.4byte	.LFE68
 3335 0558 0100     		.2byte	0x1
 3336 055a 51       		.byte	0x51
 3337 055b 00000000 		.4byte	0
 3338 055f 00000000 		.4byte	0
 3339              		.section	.debug_aranges,"",%progbits
 3340 0000 94000000 		.4byte	0x94
 3341 0004 0200     		.2byte	0x2
 3342 0006 00000000 		.4byte	.Ldebug_info0
 3343 000a 04       		.byte	0x4
 3344 000b 00       		.byte	0
 3345 000c 0000     		.2byte	0
 3346 000e 0000     		.2byte	0
 3347 0010 00000000 		.4byte	.LFB51
 3348 0014 4C010000 		.4byte	.LFE51-.LFB51
 3349 0018 00000000 		.4byte	.LFB52
 3350 001c 9C000000 		.4byte	.LFE52-.LFB52
 3351 0020 00000000 		.4byte	.LFB53
 3352 0024 58000000 		.4byte	.LFE53-.LFB53
 3353 0028 00000000 		.4byte	.LFB55
 3354 002c 02000000 		.4byte	.LFE55-.LFB55
 3355 0030 00000000 		.4byte	.LFB57
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 70


 3356 0034 0A000000 		.4byte	.LFE57-.LFB57
 3357 0038 00000000 		.4byte	.LFB58
 3358 003c 30000000 		.4byte	.LFE58-.LFB58
 3359 0040 00000000 		.4byte	.LFB59
 3360 0044 0A000000 		.4byte	.LFE59-.LFB59
 3361 0048 00000000 		.4byte	.LFB60
 3362 004c 0E000000 		.4byte	.LFE60-.LFB60
 3363 0050 00000000 		.4byte	.LFB61
 3364 0054 0E000000 		.4byte	.LFE61-.LFB61
 3365 0058 00000000 		.4byte	.LFB62
 3366 005c 20000000 		.4byte	.LFE62-.LFB62
 3367 0060 00000000 		.4byte	.LFB63
 3368 0064 20000000 		.4byte	.LFE63-.LFB63
 3369 0068 00000000 		.4byte	.LFB64
 3370 006c 0A000000 		.4byte	.LFE64-.LFB64
 3371 0070 00000000 		.4byte	.LFB65
 3372 0074 0A000000 		.4byte	.LFE65-.LFB65
 3373 0078 00000000 		.4byte	.LFB66
 3374 007c 1C000000 		.4byte	.LFE66-.LFB66
 3375 0080 00000000 		.4byte	.LFB67
 3376 0084 1E000000 		.4byte	.LFE67-.LFB67
 3377 0088 00000000 		.4byte	.LFB68
 3378 008c 2C000000 		.4byte	.LFE68-.LFB68
 3379 0090 00000000 		.4byte	0
 3380 0094 00000000 		.4byte	0
 3381              		.section	.debug_ranges,"",%progbits
 3382              	.Ldebug_ranges0:
 3383 0000 00000000 		.4byte	.LBB10
 3384 0004 06000000 		.4byte	.LBE10
 3385 0008 08000000 		.4byte	.LBB11
 3386 000c 1E010000 		.4byte	.LBE11
 3387 0010 00000000 		.4byte	0
 3388 0014 00000000 		.4byte	0
 3389 0018 00000000 		.4byte	.LBB12
 3390 001c 0A000000 		.4byte	.LBE12
 3391 0020 0C000000 		.4byte	.LBB16
 3392 0024 10000000 		.4byte	.LBE16
 3393 0028 10000000 		.4byte	.LBB17
 3394 002c 12000000 		.4byte	.LBE17
 3395 0030 00000000 		.4byte	0
 3396 0034 00000000 		.4byte	0
 3397 0038 00000000 		.4byte	.LFB51
 3398 003c 4C010000 		.4byte	.LFE51
 3399 0040 00000000 		.4byte	.LFB52
 3400 0044 9C000000 		.4byte	.LFE52
 3401 0048 00000000 		.4byte	.LFB53
 3402 004c 58000000 		.4byte	.LFE53
 3403 0050 00000000 		.4byte	.LFB55
 3404 0054 02000000 		.4byte	.LFE55
 3405 0058 00000000 		.4byte	.LFB57
 3406 005c 0A000000 		.4byte	.LFE57
 3407 0060 00000000 		.4byte	.LFB58
 3408 0064 30000000 		.4byte	.LFE58
 3409 0068 00000000 		.4byte	.LFB59
 3410 006c 0A000000 		.4byte	.LFE59
 3411 0070 00000000 		.4byte	.LFB60
 3412 0074 0E000000 		.4byte	.LFE60
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 71


 3413 0078 00000000 		.4byte	.LFB61
 3414 007c 0E000000 		.4byte	.LFE61
 3415 0080 00000000 		.4byte	.LFB62
 3416 0084 20000000 		.4byte	.LFE62
 3417 0088 00000000 		.4byte	.LFB63
 3418 008c 20000000 		.4byte	.LFE63
 3419 0090 00000000 		.4byte	.LFB64
 3420 0094 0A000000 		.4byte	.LFE64
 3421 0098 00000000 		.4byte	.LFB65
 3422 009c 0A000000 		.4byte	.LFE65
 3423 00a0 00000000 		.4byte	.LFB66
 3424 00a4 1C000000 		.4byte	.LFE66
 3425 00a8 00000000 		.4byte	.LFB67
 3426 00ac 1E000000 		.4byte	.LFE67
 3427 00b0 00000000 		.4byte	.LFB68
 3428 00b4 2C000000 		.4byte	.LFE68
 3429 00b8 00000000 		.4byte	0
 3430 00bc 00000000 		.4byte	0
 3431              		.section	.debug_macro,"",%progbits
 3432              	.Ldebug_macro0:
 3433 0000 0400     		.2byte	0x4
 3434 0002 02       		.byte	0x2
 3435 0003 00000000 		.4byte	.Ldebug_line0
 3436 0007 07       		.byte	0x7
 3437 0008 00000000 		.4byte	.Ldebug_macro1
 3438 000c 03       		.byte	0x3
 3439 000d 00       		.uleb128 0
 3440 000e 01       		.uleb128 0x1
 3441              		.file 5 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 3442 000f 03       		.byte	0x3
 3443 0010 17       		.uleb128 0x17
 3444 0011 05       		.uleb128 0x5
 3445 0012 05       		.byte	0x5
 3446 0013 08       		.uleb128 0x8
 3447 0014 C4560000 		.4byte	.LASF70
 3448              		.file 6 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 3449 0018 03       		.byte	0x3
 3450 0019 0A       		.uleb128 0xa
 3451 001a 06       		.uleb128 0x6
 3452 001b 05       		.byte	0x5
 3453 001c 3C       		.uleb128 0x3c
 3454 001d 92440000 		.4byte	.LASF71
 3455 0021 04       		.byte	0x4
 3456              		.file 7 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 3457 0022 03       		.byte	0x3
 3458 0023 0B       		.uleb128 0xb
 3459 0024 07       		.uleb128 0x7
 3460 0025 05       		.byte	0x5
 3461 0026 0D       		.uleb128 0xd
 3462 0027 AF3E0000 		.4byte	.LASF72
 3463              		.file 8 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 3464 002b 03       		.byte	0x3
 3465 002c 0F       		.uleb128 0xf
 3466 002d 08       		.uleb128 0x8
 3467 002e 07       		.byte	0x7
 3468 002f 00000000 		.4byte	.Ldebug_macro2
 3469 0033 04       		.byte	0x4
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 72


 3470              		.file 9 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi/
 3471 0034 03       		.byte	0x3
 3472 0035 10       		.uleb128 0x10
 3473 0036 09       		.uleb128 0x9
 3474 0037 05       		.byte	0x5
 3475 0038 02       		.uleb128 0x2
 3476 0039 873C0000 		.4byte	.LASF73
 3477 003d 03       		.byte	0x3
 3478 003e 04       		.uleb128 0x4
 3479 003f 06       		.uleb128 0x6
 3480 0040 04       		.byte	0x4
 3481              		.file 10 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3482 0041 03       		.byte	0x3
 3483 0042 05       		.uleb128 0x5
 3484 0043 0A       		.uleb128 0xa
 3485 0044 07       		.byte	0x7
 3486 0045 00000000 		.4byte	.Ldebug_macro3
 3487 0049 04       		.byte	0x4
 3488 004a 07       		.byte	0x7
 3489 004b 00000000 		.4byte	.Ldebug_macro4
 3490 004f 04       		.byte	0x4
 3491 0050 07       		.byte	0x7
 3492 0051 00000000 		.4byte	.Ldebug_macro5
 3493 0055 04       		.byte	0x4
 3494 0056 07       		.byte	0x7
 3495 0057 00000000 		.4byte	.Ldebug_macro6
 3496 005b 03       		.byte	0x3
 3497 005c 0F       		.uleb128 0xf
 3498 005d 02       		.uleb128 0x2
 3499 005e 07       		.byte	0x7
 3500 005f 00000000 		.4byte	.Ldebug_macro7
 3501 0063 04       		.byte	0x4
 3502              		.file 11 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3503 0064 03       		.byte	0x3
 3504 0065 11       		.uleb128 0x11
 3505 0066 0B       		.uleb128 0xb
 3506 0067 05       		.byte	0x5
 3507 0068 0B       		.uleb128 0xb
 3508 0069 F5400000 		.4byte	.LASF74
 3509 006d 03       		.byte	0x3
 3510 006e 0D       		.uleb128 0xd
 3511 006f 07       		.uleb128 0x7
 3512 0070 04       		.byte	0x4
 3513              		.file 12 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3514 0071 03       		.byte	0x3
 3515 0072 0E       		.uleb128 0xe
 3516 0073 0C       		.uleb128 0xc
 3517 0074 05       		.byte	0x5
 3518 0075 0A       		.uleb128 0xa
 3519 0076 9F270000 		.4byte	.LASF75
 3520              		.file 13 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3521 007a 03       		.byte	0x3
 3522 007b 0C       		.uleb128 0xc
 3523 007c 0D       		.uleb128 0xd
 3524 007d 05       		.byte	0x5
 3525 007e 06       		.uleb128 0x6
 3526 007f 5E440000 		.4byte	.LASF76
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 73


 3527              		.file 14 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3528 0083 03       		.byte	0x3
 3529 0084 07       		.uleb128 0x7
 3530 0085 0E       		.uleb128 0xe
 3531 0086 07       		.byte	0x7
 3532 0087 00000000 		.4byte	.Ldebug_macro8
 3533 008b 04       		.byte	0x4
 3534 008c 04       		.byte	0x4
 3535              		.file 15 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3536 008d 03       		.byte	0x3
 3537 008e 0D       		.uleb128 0xd
 3538 008f 0F       		.uleb128 0xf
 3539 0090 07       		.byte	0x7
 3540 0091 00000000 		.4byte	.Ldebug_macro9
 3541 0095 04       		.byte	0x4
 3542 0096 05       		.byte	0x5
 3543 0097 3E       		.uleb128 0x3e
 3544 0098 66650000 		.4byte	.LASF77
 3545 009c 03       		.byte	0x3
 3546 009d 3F       		.uleb128 0x3f
 3547 009e 02       		.uleb128 0x2
 3548 009f 07       		.byte	0x7
 3549 00a0 00000000 		.4byte	.Ldebug_macro10
 3550 00a4 04       		.byte	0x4
 3551 00a5 04       		.byte	0x4
 3552 00a6 07       		.byte	0x7
 3553 00a7 00000000 		.4byte	.Ldebug_macro11
 3554 00ab 04       		.byte	0x4
 3555              		.file 16 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3556 00ac 03       		.byte	0x3
 3557 00ad 12       		.uleb128 0x12
 3558 00ae 10       		.uleb128 0x10
 3559 00af 05       		.byte	0x5
 3560 00b0 02       		.uleb128 0x2
 3561 00b1 495F0000 		.4byte	.LASF78
 3562 00b5 04       		.byte	0x4
 3563              		.file 17 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3564 00b6 03       		.byte	0x3
 3565 00b7 14       		.uleb128 0x14
 3566 00b8 11       		.uleb128 0x11
 3567 00b9 07       		.byte	0x7
 3568 00ba 00000000 		.4byte	.Ldebug_macro12
 3569 00be 04       		.byte	0x4
 3570 00bf 07       		.byte	0x7
 3571 00c0 00000000 		.4byte	.Ldebug_macro13
 3572 00c4 04       		.byte	0x4
 3573              		.file 18 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3574 00c5 03       		.byte	0x3
 3575 00c6 18       		.uleb128 0x18
 3576 00c7 12       		.uleb128 0x12
 3577 00c8 07       		.byte	0x7
 3578 00c9 00000000 		.4byte	.Ldebug_macro14
 3579 00cd 03       		.byte	0x3
 3580 00ce 0E       		.uleb128 0xe
 3581 00cf 02       		.uleb128 0x2
 3582 00d0 07       		.byte	0x7
 3583 00d1 00000000 		.4byte	.Ldebug_macro15
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 74


 3584 00d5 04       		.byte	0x4
 3585 00d6 07       		.byte	0x7
 3586 00d7 00000000 		.4byte	.Ldebug_macro16
 3587              		.file 19 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3588 00db 03       		.byte	0x3
 3589 00dc 64       		.uleb128 0x64
 3590 00dd 13       		.uleb128 0x13
 3591 00de 04       		.byte	0x4
 3592 00df 04       		.byte	0x4
 3593              		.file 20 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3594 00e0 03       		.byte	0x3
 3595 00e1 19       		.uleb128 0x19
 3596 00e2 14       		.uleb128 0x14
 3597 00e3 05       		.byte	0x5
 3598 00e4 0E       		.uleb128 0xe
 3599 00e5 9A3A0000 		.4byte	.LASF79
 3600              		.file 21 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3601 00e9 03       		.byte	0x3
 3602 00ea 10       		.uleb128 0x10
 3603 00eb 15       		.uleb128 0x15
 3604 00ec 03       		.byte	0x3
 3605 00ed 03       		.uleb128 0x3
 3606 00ee 03       		.uleb128 0x3
 3607 00ef 07       		.byte	0x7
 3608 00f0 00000000 		.4byte	.Ldebug_macro17
 3609 00f4 04       		.byte	0x4
 3610 00f5 05       		.byte	0x5
 3611 00f6 07       		.uleb128 0x7
 3612 00f7 90210000 		.4byte	.LASF80
 3613 00fb 04       		.byte	0x4
 3614 00fc 05       		.byte	0x5
 3615 00fd 11       		.uleb128 0x11
 3616 00fe B81F0000 		.4byte	.LASF81
 3617 0102 03       		.byte	0x3
 3618 0103 12       		.uleb128 0x12
 3619 0104 02       		.uleb128 0x2
 3620 0105 07       		.byte	0x7
 3621 0106 00000000 		.4byte	.Ldebug_macro18
 3622 010a 04       		.byte	0x4
 3623 010b 07       		.byte	0x7
 3624 010c 00000000 		.4byte	.Ldebug_macro19
 3625 0110 04       		.byte	0x4
 3626 0111 03       		.byte	0x3
 3627 0112 1C       		.uleb128 0x1c
 3628 0113 04       		.uleb128 0x4
 3629 0114 05       		.byte	0x5
 3630 0115 17       		.uleb128 0x17
 3631 0116 331B0000 		.4byte	.LASF82
 3632              		.file 22 "Stream.h"
 3633 011a 03       		.byte	0x3
 3634 011b 1A       		.uleb128 0x1a
 3635 011c 16       		.uleb128 0x16
 3636 011d 05       		.byte	0x5
 3637 011e 17       		.uleb128 0x17
 3638 011f 99100000 		.4byte	.LASF83
 3639              		.file 23 "Print.h"
 3640 0123 03       		.byte	0x3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 75


 3641 0124 1A       		.uleb128 0x1a
 3642 0125 17       		.uleb128 0x17
 3643 0126 05       		.byte	0x5
 3644 0127 15       		.uleb128 0x15
 3645 0128 6A300000 		.4byte	.LASF84
 3646              		.file 24 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3647 012c 03       		.byte	0x3
 3648 012d 18       		.uleb128 0x18
 3649 012e 18       		.uleb128 0x18
 3650 012f 07       		.byte	0x7
 3651 0130 00000000 		.4byte	.Ldebug_macro20
 3652 0134 03       		.byte	0x3
 3653 0135 22       		.uleb128 0x22
 3654 0136 02       		.uleb128 0x2
 3655 0137 07       		.byte	0x7
 3656 0138 00000000 		.4byte	.Ldebug_macro15
 3657 013c 04       		.byte	0x4
 3658 013d 05       		.byte	0x5
 3659 013e 24       		.uleb128 0x24
 3660 013f A5090000 		.4byte	.LASF85
 3661              		.file 25 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3662 0143 03       		.byte	0x3
 3663 0144 25       		.uleb128 0x25
 3664 0145 19       		.uleb128 0x19
 3665 0146 07       		.byte	0x7
 3666 0147 00000000 		.4byte	.Ldebug_macro21
 3667 014b 04       		.byte	0x4
 3668              		.file 26 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3669 014c 03       		.byte	0x3
 3670 014d 2E       		.uleb128 0x2e
 3671 014e 1A       		.uleb128 0x1a
 3672 014f 07       		.byte	0x7
 3673 0150 00000000 		.4byte	.Ldebug_macro22
 3674 0154 03       		.byte	0x3
 3675 0155 45       		.uleb128 0x45
 3676 0156 02       		.uleb128 0x2
 3677 0157 07       		.byte	0x7
 3678 0158 00000000 		.4byte	.Ldebug_macro23
 3679 015c 04       		.byte	0x4
 3680              		.file 27 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3681 015d 03       		.byte	0x3
 3682 015e 46       		.uleb128 0x46
 3683 015f 1B       		.uleb128 0x1b
 3684 0160 07       		.byte	0x7
 3685 0161 00000000 		.4byte	.Ldebug_macro24
 3686 0165 04       		.byte	0x4
 3687 0166 07       		.byte	0x7
 3688 0167 00000000 		.4byte	.Ldebug_macro25
 3689 016b 04       		.byte	0x4
 3690              		.file 28 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3691 016c 03       		.byte	0x3
 3692 016d 3D       		.uleb128 0x3d
 3693 016e 1C       		.uleb128 0x1c
 3694 016f 07       		.byte	0x7
 3695 0170 00000000 		.4byte	.Ldebug_macro26
 3696 0174 04       		.byte	0x4
 3697 0175 07       		.byte	0x7
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 76


 3698 0176 00000000 		.4byte	.Ldebug_macro27
 3699 017a 04       		.byte	0x4
 3700              		.file 29 "WString.h"
 3701 017b 03       		.byte	0x3
 3702 017c 1A       		.uleb128 0x1a
 3703 017d 1D       		.uleb128 0x1d
 3704 017e 05       		.byte	0x5
 3705 017f 17       		.uleb128 0x17
 3706 0180 EB2B0000 		.4byte	.LASF86
 3707              		.file 30 "/Users/stevenparker/toolchains/gcc-arm-none-eabi-4_7-2013q2/bin/../lib/gcc/arm-none-eabi
 3708 0184 03       		.byte	0x3
 3709 0185 1C       		.uleb128 0x1c
 3710 0186 1E       		.uleb128 0x1e
 3711 0187 07       		.byte	0x7
 3712 0188 00000000 		.4byte	.Ldebug_macro28
 3713 018c 04       		.byte	0x4
 3714 018d 04       		.byte	0x4
 3715              		.file 31 "Printable.h"
 3716 018e 03       		.byte	0x3
 3717 018f 1B       		.uleb128 0x1b
 3718 0190 1F       		.uleb128 0x1f
 3719 0191 05       		.byte	0x5
 3720 0192 15       		.uleb128 0x15
 3721 0193 D5550000 		.4byte	.LASF87
 3722              		.file 32 "./new.h"
 3723 0197 03       		.byte	0x3
 3724 0198 17       		.uleb128 0x17
 3725 0199 20       		.uleb128 0x20
 3726 019a 05       		.byte	0x5
 3727 019b 06       		.uleb128 0x6
 3728 019c 181C0000 		.4byte	.LASF88
 3729 01a0 04       		.byte	0x4
 3730 01a1 04       		.byte	0x4
 3731 01a2 07       		.byte	0x7
 3732 01a3 00000000 		.4byte	.Ldebug_macro29
 3733 01a7 04       		.byte	0x4
 3734 01a8 04       		.byte	0x4
 3735 01a9 05       		.byte	0x5
 3736 01aa 1C       		.uleb128 0x1c
 3737 01ab BB540000 		.4byte	.LASF89
 3738 01af 04       		.byte	0x4
 3739              		.file 33 "Arduino.h"
 3740 01b0 03       		.byte	0x3
 3741 01b1 1D       		.uleb128 0x1d
 3742 01b2 21       		.uleb128 0x21
 3743              		.file 34 "lpc.h"
 3744 01b3 03       		.byte	0x3
 3745 01b4 03       		.uleb128 0x3
 3746 01b5 22       		.uleb128 0x22
 3747 01b6 07       		.byte	0x7
 3748 01b7 00000000 		.4byte	.Ldebug_macro30
 3749 01bb 04       		.byte	0x4
 3750              		.file 35 "HardwareSerial.h"
 3751 01bc 03       		.byte	0x3
 3752 01bd 04       		.uleb128 0x4
 3753 01be 23       		.uleb128 0x23
 3754 01bf 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 77


 3755 01c0 18       		.uleb128 0x18
 3756 01c1 75230000 		.4byte	.LASF90
 3757 01c5 04       		.byte	0x4
 3758              		.file 36 "printf.h"
 3759 01c6 03       		.byte	0x3
 3760 01c7 05       		.uleb128 0x5
 3761 01c8 24       		.uleb128 0x24
 3762 01c9 05       		.byte	0x5
 3763 01ca 6B       		.uleb128 0x6b
 3764 01cb AA3B0000 		.4byte	.LASF91
 3765 01cf 03       		.byte	0x3
 3766 01d0 6D       		.uleb128 0x6d
 3767 01d1 19       		.uleb128 0x19
 3768 01d2 07       		.byte	0x7
 3769 01d3 00000000 		.4byte	.Ldebug_macro31
 3770 01d7 04       		.byte	0x4
 3771 01d8 07       		.byte	0x7
 3772 01d9 00000000 		.4byte	.Ldebug_macro32
 3773 01dd 04       		.byte	0x4
 3774 01de 07       		.byte	0x7
 3775 01df 00000000 		.4byte	.Ldebug_macro33
 3776 01e3 04       		.byte	0x4
 3777 01e4 05       		.byte	0x5
 3778 01e5 22       		.uleb128 0x22
 3779 01e6 46650000 		.4byte	.LASF92
 3780 01ea 05       		.byte	0x5
 3781 01eb 23       		.uleb128 0x23
 3782 01ec 81280000 		.4byte	.LASF93
 3783 01f0 05       		.byte	0x5
 3784 01f1 24       		.uleb128 0x24
 3785 01f2 94630000 		.4byte	.LASF94
 3786 01f6 05       		.byte	0x5
 3787 01f7 26       		.uleb128 0x26
 3788 01f8 193C0000 		.4byte	.LASF95
 3789 01fc 05       		.byte	0x5
 3790 01fd 27       		.uleb128 0x27
 3791 01fe C00F0000 		.4byte	.LASF96
 3792 0202 05       		.byte	0x5
 3793 0203 29       		.uleb128 0x29
 3794 0204 2D470000 		.4byte	.LASF97
 3795 0208 05       		.byte	0x5
 3796 0209 2A       		.uleb128 0x2a
 3797 020a FC150000 		.4byte	.LASF98
 3798 020e 05       		.byte	0x5
 3799 020f 2C       		.uleb128 0x2c
 3800 0210 59170000 		.4byte	.LASF99
 3801 0214 05       		.byte	0x5
 3802 0215 2E       		.uleb128 0x2e
 3803 0216 B1020000 		.4byte	.LASF100
 3804 021a 05       		.byte	0x5
 3805 021b 2F       		.uleb128 0x2f
 3806 021c 77110000 		.4byte	.LASF101
 3807 0220 05       		.byte	0x5
 3808 0221 30       		.uleb128 0x30
 3809 0222 474B0000 		.4byte	.LASF102
 3810 0226 05       		.byte	0x5
 3811 0227 31       		.uleb128 0x31
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 78


 3812 0228 70200000 		.4byte	.LASF103
 3813 022c 05       		.byte	0x5
 3814 022d 32       		.uleb128 0x32
 3815 022e D33B0000 		.4byte	.LASF104
 3816 0232 05       		.byte	0x5
 3817 0233 33       		.uleb128 0x33
 3818 0234 C8690000 		.4byte	.LASF105
 3819 0238 05       		.byte	0x5
 3820 0239 34       		.uleb128 0x34
 3821 023a 154C0000 		.4byte	.LASF106
 3822 023e 05       		.byte	0x5
 3823 023f 35       		.uleb128 0x35
 3824 0240 55620000 		.4byte	.LASF107
 3825 0244 05       		.byte	0x5
 3826 0245 36       		.uleb128 0x36
 3827 0246 B1440000 		.4byte	.LASF108
 3828 024a 05       		.byte	0x5
 3829 024b 37       		.uleb128 0x37
 3830 024c BC020000 		.4byte	.LASF109
 3831 0250 05       		.byte	0x5
 3832 0251 38       		.uleb128 0x38
 3833 0252 315F0000 		.4byte	.LASF110
 3834 0256 05       		.byte	0x5
 3835 0257 39       		.uleb128 0x39
 3836 0258 72420000 		.4byte	.LASF111
 3837 025c 05       		.byte	0x5
 3838 025d 3A       		.uleb128 0x3a
 3839 025e FE580000 		.4byte	.LASF112
 3840 0262 05       		.byte	0x5
 3841 0263 3C       		.uleb128 0x3c
 3842 0264 93120000 		.4byte	.LASF113
 3843 0268 05       		.byte	0x5
 3844 0269 3D       		.uleb128 0x3d
 3845 026a 13040000 		.4byte	.LASF114
 3846 026e 05       		.byte	0x5
 3847 026f 3E       		.uleb128 0x3e
 3848 0270 9F610000 		.4byte	.LASF115
 3849 0274 05       		.byte	0x5
 3850 0275 3F       		.uleb128 0x3f
 3851 0276 B94E0000 		.4byte	.LASF116
 3852 027a 05       		.byte	0x5
 3853 027b 40       		.uleb128 0x40
 3854 027c EA640000 		.4byte	.LASF117
 3855 0280 05       		.byte	0x5
 3856 0281 42       		.uleb128 0x42
 3857 0282 6B120000 		.4byte	.LASF118
 3858 0286 05       		.byte	0x5
 3859 0287 43       		.uleb128 0x43
 3860 0288 E8370000 		.4byte	.LASF119
 3861 028c 05       		.byte	0x5
 3862 028d 44       		.uleb128 0x44
 3863 028e FB2B0000 		.4byte	.LASF120
 3864 0292 05       		.byte	0x5
 3865 0293 45       		.uleb128 0x45
 3866 0294 773F0000 		.4byte	.LASF121
 3867 0298 05       		.byte	0x5
 3868 0299 47       		.uleb128 0x47
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 79


 3869 029a 43060000 		.4byte	.LASF122
 3870 029e 05       		.byte	0x5
 3871 029f 48       		.uleb128 0x48
 3872 02a0 D3680000 		.4byte	.LASF123
 3873 02a4 05       		.byte	0x5
 3874 02a5 49       		.uleb128 0x49
 3875 02a6 5A470000 		.4byte	.LASF124
 3876 02aa 05       		.byte	0x5
 3877 02ab 4A       		.uleb128 0x4a
 3878 02ac 385E0000 		.4byte	.LASF125
 3879 02b0 05       		.byte	0x5
 3880 02b1 4B       		.uleb128 0x4b
 3881 02b2 F6460000 		.4byte	.LASF126
 3882 02b6 05       		.byte	0x5
 3883 02b7 4C       		.uleb128 0x4c
 3884 02b8 77560000 		.4byte	.LASF127
 3885 02bc 04       		.byte	0x4
 3886 02bd 00       		.byte	0
 3887              		.section	.debug_macro,"G",%progbits,wm4.1.8ebf1c990d6a0cbee7a5e554ec03ca59,comdat
 3888              	.Ldebug_macro1:
 3889 0000 0400     		.2byte	0x4
 3890 0002 00       		.byte	0
 3891 0003 05       		.byte	0x5
 3892 0004 01       		.uleb128 0x1
 3893 0005 60120000 		.4byte	.LASF128
 3894 0009 05       		.byte	0x5
 3895 000a 01       		.uleb128 0x1
 3896 000b BE2A0000 		.4byte	.LASF129
 3897 000f 05       		.byte	0x5
 3898 0010 01       		.uleb128 0x1
 3899 0011 D6070000 		.4byte	.LASF130
 3900 0015 05       		.byte	0x5
 3901 0016 01       		.uleb128 0x1
 3902 0017 1E300000 		.4byte	.LASF131
 3903 001b 05       		.byte	0x5
 3904 001c 01       		.uleb128 0x1
 3905 001d C4550000 		.4byte	.LASF132
 3906 0021 05       		.byte	0x5
 3907 0022 01       		.uleb128 0x1
 3908 0023 9C180000 		.4byte	.LASF133
 3909 0027 05       		.byte	0x5
 3910 0028 01       		.uleb128 0x1
 3911 0029 68410000 		.4byte	.LASF134
 3912 002d 05       		.byte	0x5
 3913 002e 01       		.uleb128 0x1
 3914 002f 6D5C0000 		.4byte	.LASF135
 3915 0033 05       		.byte	0x5
 3916 0034 01       		.uleb128 0x1
 3917 0035 621B0000 		.4byte	.LASF136
 3918 0039 05       		.byte	0x5
 3919 003a 01       		.uleb128 0x1
 3920 003b B72D0000 		.4byte	.LASF137
 3921 003f 05       		.byte	0x5
 3922 0040 01       		.uleb128 0x1
 3923 0041 A6330000 		.4byte	.LASF138
 3924 0045 05       		.byte	0x5
 3925 0046 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 80


 3926 0047 5B6B0000 		.4byte	.LASF139
 3927 004b 05       		.byte	0x5
 3928 004c 01       		.uleb128 0x1
 3929 004d 6A030000 		.4byte	.LASF140
 3930 0051 05       		.byte	0x5
 3931 0052 01       		.uleb128 0x1
 3932 0053 872B0000 		.4byte	.LASF141
 3933 0057 05       		.byte	0x5
 3934 0058 01       		.uleb128 0x1
 3935 0059 9C340000 		.4byte	.LASF142
 3936 005d 05       		.byte	0x5
 3937 005e 01       		.uleb128 0x1
 3938 005f 28500000 		.4byte	.LASF143
 3939 0063 05       		.byte	0x5
 3940 0064 01       		.uleb128 0x1
 3941 0065 0A640000 		.4byte	.LASF144
 3942 0069 05       		.byte	0x5
 3943 006a 01       		.uleb128 0x1
 3944 006b 20160000 		.4byte	.LASF145
 3945 006f 05       		.byte	0x5
 3946 0070 01       		.uleb128 0x1
 3947 0071 5F040000 		.4byte	.LASF146
 3948 0075 05       		.byte	0x5
 3949 0076 01       		.uleb128 0x1
 3950 0077 D01D0000 		.4byte	.LASF147
 3951 007b 05       		.byte	0x5
 3952 007c 01       		.uleb128 0x1
 3953 007d A01A0000 		.4byte	.LASF148
 3954 0081 05       		.byte	0x5
 3955 0082 01       		.uleb128 0x1
 3956 0083 12260000 		.4byte	.LASF149
 3957 0087 05       		.byte	0x5
 3958 0088 01       		.uleb128 0x1
 3959 0089 BB1E0000 		.4byte	.LASF150
 3960 008d 05       		.byte	0x5
 3961 008e 01       		.uleb128 0x1
 3962 008f EA580000 		.4byte	.LASF151
 3963 0093 05       		.byte	0x5
 3964 0094 01       		.uleb128 0x1
 3965 0095 E6400000 		.4byte	.LASF152
 3966 0099 05       		.byte	0x5
 3967 009a 01       		.uleb128 0x1
 3968 009b 665A0000 		.4byte	.LASF153
 3969 009f 05       		.byte	0x5
 3970 00a0 01       		.uleb128 0x1
 3971 00a1 864C0000 		.4byte	.LASF154
 3972 00a5 05       		.byte	0x5
 3973 00a6 01       		.uleb128 0x1
 3974 00a7 A00C0000 		.4byte	.LASF155
 3975 00ab 05       		.byte	0x5
 3976 00ac 01       		.uleb128 0x1
 3977 00ad 6F050000 		.4byte	.LASF156
 3978 00b1 05       		.byte	0x5
 3979 00b2 01       		.uleb128 0x1
 3980 00b3 2C3E0000 		.4byte	.LASF157
 3981 00b7 05       		.byte	0x5
 3982 00b8 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 81


 3983 00b9 FE420000 		.4byte	.LASF158
 3984 00bd 05       		.byte	0x5
 3985 00be 01       		.uleb128 0x1
 3986 00bf 9B130000 		.4byte	.LASF159
 3987 00c3 05       		.byte	0x5
 3988 00c4 01       		.uleb128 0x1
 3989 00c5 99580000 		.4byte	.LASF160
 3990 00c9 05       		.byte	0x5
 3991 00ca 01       		.uleb128 0x1
 3992 00cb 89050000 		.4byte	.LASF161
 3993 00cf 05       		.byte	0x5
 3994 00d0 01       		.uleb128 0x1
 3995 00d1 3D260000 		.4byte	.LASF162
 3996 00d5 05       		.byte	0x5
 3997 00d6 01       		.uleb128 0x1
 3998 00d7 161F0000 		.4byte	.LASF163
 3999 00db 05       		.byte	0x5
 4000 00dc 01       		.uleb128 0x1
 4001 00dd D8080000 		.4byte	.LASF164
 4002 00e1 05       		.byte	0x5
 4003 00e2 01       		.uleb128 0x1
 4004 00e3 FA550000 		.4byte	.LASF165
 4005 00e7 05       		.byte	0x5
 4006 00e8 01       		.uleb128 0x1
 4007 00e9 3A550000 		.4byte	.LASF166
 4008 00ed 05       		.byte	0x5
 4009 00ee 01       		.uleb128 0x1
 4010 00ef F74E0000 		.4byte	.LASF167
 4011 00f3 05       		.byte	0x5
 4012 00f4 01       		.uleb128 0x1
 4013 00f5 A2150000 		.4byte	.LASF168
 4014 00f9 05       		.byte	0x5
 4015 00fa 01       		.uleb128 0x1
 4016 00fb 1B320000 		.4byte	.LASF169
 4017 00ff 05       		.byte	0x5
 4018 0100 01       		.uleb128 0x1
 4019 0101 29060000 		.4byte	.LASF170
 4020 0105 05       		.byte	0x5
 4021 0106 01       		.uleb128 0x1
 4022 0107 F5060000 		.4byte	.LASF171
 4023 010b 05       		.byte	0x5
 4024 010c 01       		.uleb128 0x1
 4025 010d 90510000 		.4byte	.LASF172
 4026 0111 05       		.byte	0x5
 4027 0112 01       		.uleb128 0x1
 4028 0113 003D0000 		.4byte	.LASF173
 4029 0117 05       		.byte	0x5
 4030 0118 01       		.uleb128 0x1
 4031 0119 2B430000 		.4byte	.LASF174
 4032 011d 05       		.byte	0x5
 4033 011e 01       		.uleb128 0x1
 4034 011f 47300000 		.4byte	.LASF175
 4035 0123 05       		.byte	0x5
 4036 0124 01       		.uleb128 0x1
 4037 0125 A0620000 		.4byte	.LASF176
 4038 0129 05       		.byte	0x5
 4039 012a 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 82


 4040 012b 65170000 		.4byte	.LASF177
 4041 012f 05       		.byte	0x5
 4042 0130 01       		.uleb128 0x1
 4043 0131 B0130000 		.4byte	.LASF178
 4044 0135 05       		.byte	0x5
 4045 0136 01       		.uleb128 0x1
 4046 0137 A7660000 		.4byte	.LASF179
 4047 013b 05       		.byte	0x5
 4048 013c 01       		.uleb128 0x1
 4049 013d F74B0000 		.4byte	.LASF180
 4050 0141 05       		.byte	0x5
 4051 0142 01       		.uleb128 0x1
 4052 0143 0A760000 		.4byte	.LASF181
 4053 0147 05       		.byte	0x5
 4054 0148 01       		.uleb128 0x1
 4055 0149 54110000 		.4byte	.LASF182
 4056 014d 05       		.byte	0x5
 4057 014e 01       		.uleb128 0x1
 4058 014f 904E0000 		.4byte	.LASF183
 4059 0153 05       		.byte	0x5
 4060 0154 01       		.uleb128 0x1
 4061 0155 9C550000 		.4byte	.LASF184
 4062 0159 05       		.byte	0x5
 4063 015a 01       		.uleb128 0x1
 4064 015b CC320000 		.4byte	.LASF185
 4065 015f 05       		.byte	0x5
 4066 0160 01       		.uleb128 0x1
 4067 0161 FA120000 		.4byte	.LASF186
 4068 0165 05       		.byte	0x5
 4069 0166 01       		.uleb128 0x1
 4070 0167 EB4D0000 		.4byte	.LASF187
 4071 016b 05       		.byte	0x5
 4072 016c 01       		.uleb128 0x1
 4073 016d DE3B0000 		.4byte	.LASF188
 4074 0171 05       		.byte	0x5
 4075 0172 01       		.uleb128 0x1
 4076 0173 B6080000 		.4byte	.LASF189
 4077 0177 05       		.byte	0x5
 4078 0178 01       		.uleb128 0x1
 4079 0179 91030000 		.4byte	.LASF190
 4080 017d 05       		.byte	0x5
 4081 017e 01       		.uleb128 0x1
 4082 017f 24650000 		.4byte	.LASF191
 4083 0183 05       		.byte	0x5
 4084 0184 01       		.uleb128 0x1
 4085 0185 6D1A0000 		.4byte	.LASF192
 4086 0189 05       		.byte	0x5
 4087 018a 01       		.uleb128 0x1
 4088 018b 1B200000 		.4byte	.LASF193
 4089 018f 05       		.byte	0x5
 4090 0190 01       		.uleb128 0x1
 4091 0191 CE0F0000 		.4byte	.LASF194
 4092 0195 05       		.byte	0x5
 4093 0196 01       		.uleb128 0x1
 4094 0197 00580000 		.4byte	.LASF195
 4095 019b 05       		.byte	0x5
 4096 019c 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 83


 4097 019d A05F0000 		.4byte	.LASF196
 4098 01a1 05       		.byte	0x5
 4099 01a2 01       		.uleb128 0x1
 4100 01a3 D2500000 		.4byte	.LASF197
 4101 01a7 05       		.byte	0x5
 4102 01a8 01       		.uleb128 0x1
 4103 01a9 09000000 		.4byte	.LASF198
 4104 01ad 05       		.byte	0x5
 4105 01ae 01       		.uleb128 0x1
 4106 01af 320E0000 		.4byte	.LASF199
 4107 01b3 05       		.byte	0x5
 4108 01b4 01       		.uleb128 0x1
 4109 01b5 E55D0000 		.4byte	.LASF200
 4110 01b9 05       		.byte	0x5
 4111 01ba 01       		.uleb128 0x1
 4112 01bb 66320000 		.4byte	.LASF201
 4113 01bf 05       		.byte	0x5
 4114 01c0 01       		.uleb128 0x1
 4115 01c1 705F0000 		.4byte	.LASF202
 4116 01c5 05       		.byte	0x5
 4117 01c6 01       		.uleb128 0x1
 4118 01c7 4C010000 		.4byte	.LASF203
 4119 01cb 05       		.byte	0x5
 4120 01cc 01       		.uleb128 0x1
 4121 01cd C5120000 		.4byte	.LASF204
 4122 01d1 05       		.byte	0x5
 4123 01d2 01       		.uleb128 0x1
 4124 01d3 6B390000 		.4byte	.LASF205
 4125 01d7 05       		.byte	0x5
 4126 01d8 01       		.uleb128 0x1
 4127 01d9 E2510000 		.4byte	.LASF206
 4128 01dd 05       		.byte	0x5
 4129 01de 01       		.uleb128 0x1
 4130 01df 1B660000 		.4byte	.LASF207
 4131 01e3 05       		.byte	0x5
 4132 01e4 01       		.uleb128 0x1
 4133 01e5 77570000 		.4byte	.LASF208
 4134 01e9 05       		.byte	0x5
 4135 01ea 01       		.uleb128 0x1
 4136 01eb 11530000 		.4byte	.LASF209
 4137 01ef 05       		.byte	0x5
 4138 01f0 01       		.uleb128 0x1
 4139 01f1 900F0000 		.4byte	.LASF210
 4140 01f5 05       		.byte	0x5
 4141 01f6 01       		.uleb128 0x1
 4142 01f7 74010000 		.4byte	.LASF211
 4143 01fb 05       		.byte	0x5
 4144 01fc 01       		.uleb128 0x1
 4145 01fd 12550000 		.4byte	.LASF212
 4146 0201 05       		.byte	0x5
 4147 0202 01       		.uleb128 0x1
 4148 0203 74130000 		.4byte	.LASF213
 4149 0207 05       		.byte	0x5
 4150 0208 01       		.uleb128 0x1
 4151 0209 FB430000 		.4byte	.LASF214
 4152 020d 05       		.byte	0x5
 4153 020e 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 84


 4154 020f E2280000 		.4byte	.LASF215
 4155 0213 05       		.byte	0x5
 4156 0214 01       		.uleb128 0x1
 4157 0215 40150000 		.4byte	.LASF216
 4158 0219 05       		.byte	0x5
 4159 021a 01       		.uleb128 0x1
 4160 021b CD0E0000 		.4byte	.LASF217
 4161 021f 05       		.byte	0x5
 4162 0220 01       		.uleb128 0x1
 4163 0221 BA4A0000 		.4byte	.LASF218
 4164 0225 05       		.byte	0x5
 4165 0226 01       		.uleb128 0x1
 4166 0227 3E1B0000 		.4byte	.LASF219
 4167 022b 05       		.byte	0x5
 4168 022c 01       		.uleb128 0x1
 4169 022d C36B0000 		.4byte	.LASF220
 4170 0231 05       		.byte	0x5
 4171 0232 01       		.uleb128 0x1
 4172 0233 905A0000 		.4byte	.LASF221
 4173 0237 05       		.byte	0x5
 4174 0238 01       		.uleb128 0x1
 4175 0239 7C390000 		.4byte	.LASF222
 4176 023d 05       		.byte	0x5
 4177 023e 01       		.uleb128 0x1
 4178 023f CB090000 		.4byte	.LASF223
 4179 0243 05       		.byte	0x5
 4180 0244 01       		.uleb128 0x1
 4181 0245 DB450000 		.4byte	.LASF224
 4182 0249 05       		.byte	0x5
 4183 024a 01       		.uleb128 0x1
 4184 024b 2E490000 		.4byte	.LASF225
 4185 024f 05       		.byte	0x5
 4186 0250 01       		.uleb128 0x1
 4187 0251 57240000 		.4byte	.LASF226
 4188 0255 05       		.byte	0x5
 4189 0256 01       		.uleb128 0x1
 4190 0257 FF6A0000 		.4byte	.LASF227
 4191 025b 05       		.byte	0x5
 4192 025c 01       		.uleb128 0x1
 4193 025d 36590000 		.4byte	.LASF228
 4194 0261 05       		.byte	0x5
 4195 0262 01       		.uleb128 0x1
 4196 0263 7C0C0000 		.4byte	.LASF229
 4197 0267 05       		.byte	0x5
 4198 0268 01       		.uleb128 0x1
 4199 0269 6B520000 		.4byte	.LASF230
 4200 026d 05       		.byte	0x5
 4201 026e 01       		.uleb128 0x1
 4202 026f 21590000 		.4byte	.LASF231
 4203 0273 05       		.byte	0x5
 4204 0274 01       		.uleb128 0x1
 4205 0275 0C6C0000 		.4byte	.LASF232
 4206 0279 05       		.byte	0x5
 4207 027a 01       		.uleb128 0x1
 4208 027b E6060000 		.4byte	.LASF233
 4209 027f 05       		.byte	0x5
 4210 0280 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 85


 4211 0281 874F0000 		.4byte	.LASF234
 4212 0285 05       		.byte	0x5
 4213 0286 01       		.uleb128 0x1
 4214 0287 795B0000 		.4byte	.LASF235
 4215 028b 05       		.byte	0x5
 4216 028c 01       		.uleb128 0x1
 4217 028d 543B0000 		.4byte	.LASF236
 4218 0291 05       		.byte	0x5
 4219 0292 01       		.uleb128 0x1
 4220 0293 20250000 		.4byte	.LASF237
 4221 0297 05       		.byte	0x5
 4222 0298 01       		.uleb128 0x1
 4223 0299 3C480000 		.4byte	.LASF238
 4224 029d 05       		.byte	0x5
 4225 029e 01       		.uleb128 0x1
 4226 029f B5320000 		.4byte	.LASF239
 4227 02a3 05       		.byte	0x5
 4228 02a4 01       		.uleb128 0x1
 4229 02a5 81480000 		.4byte	.LASF240
 4230 02a9 05       		.byte	0x5
 4231 02aa 01       		.uleb128 0x1
 4232 02ab A4140000 		.4byte	.LASF241
 4233 02af 05       		.byte	0x5
 4234 02b0 01       		.uleb128 0x1
 4235 02b1 42000000 		.4byte	.LASF242
 4236 02b5 05       		.byte	0x5
 4237 02b6 01       		.uleb128 0x1
 4238 02b7 472B0000 		.4byte	.LASF243
 4239 02bb 05       		.byte	0x5
 4240 02bc 01       		.uleb128 0x1
 4241 02bd 951C0000 		.4byte	.LASF244
 4242 02c1 05       		.byte	0x5
 4243 02c2 01       		.uleb128 0x1
 4244 02c3 A4470000 		.4byte	.LASF245
 4245 02c7 05       		.byte	0x5
 4246 02c8 01       		.uleb128 0x1
 4247 02c9 EC6B0000 		.4byte	.LASF246
 4248 02cd 05       		.byte	0x5
 4249 02ce 01       		.uleb128 0x1
 4250 02cf 1E120000 		.4byte	.LASF247
 4251 02d3 05       		.byte	0x5
 4252 02d4 01       		.uleb128 0x1
 4253 02d5 86540000 		.4byte	.LASF248
 4254 02d9 05       		.byte	0x5
 4255 02da 01       		.uleb128 0x1
 4256 02db 6A400000 		.4byte	.LASF249
 4257 02df 05       		.byte	0x5
 4258 02e0 01       		.uleb128 0x1
 4259 02e1 04410000 		.4byte	.LASF250
 4260 02e5 05       		.byte	0x5
 4261 02e6 01       		.uleb128 0x1
 4262 02e7 23400000 		.4byte	.LASF251
 4263 02eb 05       		.byte	0x5
 4264 02ec 01       		.uleb128 0x1
 4265 02ed 8A3A0000 		.4byte	.LASF252
 4266 02f1 05       		.byte	0x5
 4267 02f2 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 86


 4268 02f3 E7330000 		.4byte	.LASF253
 4269 02f7 05       		.byte	0x5
 4270 02f8 01       		.uleb128 0x1
 4271 02f9 98400000 		.4byte	.LASF254
 4272 02fd 05       		.byte	0x5
 4273 02fe 01       		.uleb128 0x1
 4274 02ff 0C400000 		.4byte	.LASF255
 4275 0303 05       		.byte	0x5
 4276 0304 01       		.uleb128 0x1
 4277 0305 D04C0000 		.4byte	.LASF256
 4278 0309 05       		.byte	0x5
 4279 030a 01       		.uleb128 0x1
 4280 030b 0C160000 		.4byte	.LASF257
 4281 030f 05       		.byte	0x5
 4282 0310 01       		.uleb128 0x1
 4283 0311 CE1A0000 		.4byte	.LASF258
 4284 0315 05       		.byte	0x5
 4285 0316 01       		.uleb128 0x1
 4286 0317 43170000 		.4byte	.LASF259
 4287 031b 05       		.byte	0x5
 4288 031c 01       		.uleb128 0x1
 4289 031d EC380000 		.4byte	.LASF260
 4290 0321 05       		.byte	0x5
 4291 0322 01       		.uleb128 0x1
 4292 0323 9B200000 		.4byte	.LASF261
 4293 0327 05       		.byte	0x5
 4294 0328 01       		.uleb128 0x1
 4295 0329 9A250000 		.4byte	.LASF262
 4296 032d 05       		.byte	0x5
 4297 032e 01       		.uleb128 0x1
 4298 032f 1D240000 		.4byte	.LASF263
 4299 0333 05       		.byte	0x5
 4300 0334 01       		.uleb128 0x1
 4301 0335 14060000 		.4byte	.LASF264
 4302 0339 05       		.byte	0x5
 4303 033a 01       		.uleb128 0x1
 4304 033b F55B0000 		.4byte	.LASF265
 4305 033f 05       		.byte	0x5
 4306 0340 01       		.uleb128 0x1
 4307 0341 C7440000 		.4byte	.LASF266
 4308 0345 05       		.byte	0x5
 4309 0346 01       		.uleb128 0x1
 4310 0347 BB750000 		.4byte	.LASF267
 4311 034b 05       		.byte	0x5
 4312 034c 01       		.uleb128 0x1
 4313 034d 44040000 		.4byte	.LASF268
 4314 0351 05       		.byte	0x5
 4315 0352 01       		.uleb128 0x1
 4316 0353 8D4A0000 		.4byte	.LASF269
 4317 0357 05       		.byte	0x5
 4318 0358 01       		.uleb128 0x1
 4319 0359 191B0000 		.4byte	.LASF270
 4320 035d 05       		.byte	0x5
 4321 035e 01       		.uleb128 0x1
 4322 035f 91330000 		.4byte	.LASF271
 4323 0363 05       		.byte	0x5
 4324 0364 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 87


 4325 0365 76040000 		.4byte	.LASF272
 4326 0369 05       		.byte	0x5
 4327 036a 01       		.uleb128 0x1
 4328 036b 095E0000 		.4byte	.LASF273
 4329 036f 05       		.byte	0x5
 4330 0370 01       		.uleb128 0x1
 4331 0371 B42E0000 		.4byte	.LASF274
 4332 0375 05       		.byte	0x5
 4333 0376 01       		.uleb128 0x1
 4334 0377 E10E0000 		.4byte	.LASF275
 4335 037b 05       		.byte	0x5
 4336 037c 01       		.uleb128 0x1
 4337 037d EE110000 		.4byte	.LASF276
 4338 0381 05       		.byte	0x5
 4339 0382 01       		.uleb128 0x1
 4340 0383 2C520000 		.4byte	.LASF277
 4341 0387 05       		.byte	0x5
 4342 0388 01       		.uleb128 0x1
 4343 0389 0E2A0000 		.4byte	.LASF278
 4344 038d 05       		.byte	0x5
 4345 038e 01       		.uleb128 0x1
 4346 038f CF5C0000 		.4byte	.LASF279
 4347 0393 05       		.byte	0x5
 4348 0394 01       		.uleb128 0x1
 4349 0395 31630000 		.4byte	.LASF280
 4350 0399 05       		.byte	0x5
 4351 039a 01       		.uleb128 0x1
 4352 039b B0060000 		.4byte	.LASF281
 4353 039f 05       		.byte	0x5
 4354 03a0 01       		.uleb128 0x1
 4355 03a1 B5650000 		.4byte	.LASF282
 4356 03a5 05       		.byte	0x5
 4357 03a6 01       		.uleb128 0x1
 4358 03a7 97060000 		.4byte	.LASF283
 4359 03ab 05       		.byte	0x5
 4360 03ac 01       		.uleb128 0x1
 4361 03ad 442F0000 		.4byte	.LASF284
 4362 03b1 05       		.byte	0x5
 4363 03b2 01       		.uleb128 0x1
 4364 03b3 A3220000 		.4byte	.LASF285
 4365 03b7 05       		.byte	0x5
 4366 03b8 01       		.uleb128 0x1
 4367 03b9 303F0000 		.4byte	.LASF286
 4368 03bd 05       		.byte	0x5
 4369 03be 01       		.uleb128 0x1
 4370 03bf 20000000 		.4byte	.LASF287
 4371 03c3 05       		.byte	0x5
 4372 03c4 01       		.uleb128 0x1
 4373 03c5 283A0000 		.4byte	.LASF288
 4374 03c9 05       		.byte	0x5
 4375 03ca 01       		.uleb128 0x1
 4376 03cb 185A0000 		.4byte	.LASF289
 4377 03cf 05       		.byte	0x5
 4378 03d0 01       		.uleb128 0x1
 4379 03d1 27330000 		.4byte	.LASF290
 4380 03d5 05       		.byte	0x5
 4381 03d6 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 88


 4382 03d7 37370000 		.4byte	.LASF291
 4383 03db 05       		.byte	0x5
 4384 03dc 01       		.uleb128 0x1
 4385 03dd 6C4B0000 		.4byte	.LASF292
 4386 03e1 05       		.byte	0x5
 4387 03e2 01       		.uleb128 0x1
 4388 03e3 F9270000 		.4byte	.LASF293
 4389 03e7 05       		.byte	0x5
 4390 03e8 01       		.uleb128 0x1
 4391 03e9 B8100000 		.4byte	.LASF294
 4392 03ed 05       		.byte	0x5
 4393 03ee 01       		.uleb128 0x1
 4394 03ef C4150000 		.4byte	.LASF295
 4395 03f3 05       		.byte	0x5
 4396 03f4 01       		.uleb128 0x1
 4397 03f5 B4610000 		.4byte	.LASF296
 4398 03f9 05       		.byte	0x5
 4399 03fa 01       		.uleb128 0x1
 4400 03fb DE300000 		.4byte	.LASF297
 4401 03ff 05       		.byte	0x5
 4402 0400 01       		.uleb128 0x1
 4403 0401 99600000 		.4byte	.LASF298
 4404 0405 05       		.byte	0x5
 4405 0406 01       		.uleb128 0x1
 4406 0407 2B280000 		.4byte	.LASF299
 4407 040b 05       		.byte	0x5
 4408 040c 01       		.uleb128 0x1
 4409 040d 440E0000 		.4byte	.LASF300
 4410 0411 05       		.byte	0x5
 4411 0412 01       		.uleb128 0x1
 4412 0413 CF020000 		.4byte	.LASF301
 4413 0417 05       		.byte	0x5
 4414 0418 01       		.uleb128 0x1
 4415 0419 A34C0000 		.4byte	.LASF302
 4416 041d 05       		.byte	0x5
 4417 041e 01       		.uleb128 0x1
 4418 041f 2B420000 		.4byte	.LASF303
 4419 0423 05       		.byte	0x5
 4420 0424 01       		.uleb128 0x1
 4421 0425 A4050000 		.4byte	.LASF304
 4422 0429 05       		.byte	0x5
 4423 042a 01       		.uleb128 0x1
 4424 042b 0C4B0000 		.4byte	.LASF305
 4425 042f 05       		.byte	0x5
 4426 0430 01       		.uleb128 0x1
 4427 0431 DC160000 		.4byte	.LASF306
 4428 0435 05       		.byte	0x5
 4429 0436 01       		.uleb128 0x1
 4430 0437 59660000 		.4byte	.LASF307
 4431 043b 05       		.byte	0x5
 4432 043c 01       		.uleb128 0x1
 4433 043d D22A0000 		.4byte	.LASF308
 4434 0441 05       		.byte	0x5
 4435 0442 01       		.uleb128 0x1
 4436 0443 E4430000 		.4byte	.LASF309
 4437 0447 05       		.byte	0x5
 4438 0448 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 89


 4439 0449 DF120000 		.4byte	.LASF310
 4440 044d 05       		.byte	0x5
 4441 044e 01       		.uleb128 0x1
 4442 044f 436B0000 		.4byte	.LASF311
 4443 0453 05       		.byte	0x5
 4444 0454 01       		.uleb128 0x1
 4445 0455 08590000 		.4byte	.LASF312
 4446 0459 05       		.byte	0x5
 4447 045a 01       		.uleb128 0x1
 4448 045b 3A020000 		.4byte	.LASF313
 4449 045f 05       		.byte	0x5
 4450 0460 01       		.uleb128 0x1
 4451 0461 F9320000 		.4byte	.LASF314
 4452 0465 05       		.byte	0x5
 4453 0466 01       		.uleb128 0x1
 4454 0467 54580000 		.4byte	.LASF315
 4455 046b 05       		.byte	0x5
 4456 046c 01       		.uleb128 0x1
 4457 046d F1040000 		.4byte	.LASF316
 4458 0471 05       		.byte	0x5
 4459 0472 01       		.uleb128 0x1
 4460 0473 17690000 		.4byte	.LASF317
 4461 0477 05       		.byte	0x5
 4462 0478 01       		.uleb128 0x1
 4463 0479 C52F0000 		.4byte	.LASF318
 4464 047d 05       		.byte	0x5
 4465 047e 01       		.uleb128 0x1
 4466 047f 356A0000 		.4byte	.LASF319
 4467 0483 05       		.byte	0x5
 4468 0484 01       		.uleb128 0x1
 4469 0485 570C0000 		.4byte	.LASF320
 4470 0489 05       		.byte	0x5
 4471 048a 01       		.uleb128 0x1
 4472 048b 14330000 		.4byte	.LASF321
 4473 048f 05       		.byte	0x5
 4474 0490 01       		.uleb128 0x1
 4475 0491 266B0000 		.4byte	.LASF322
 4476 0495 05       		.byte	0x5
 4477 0496 01       		.uleb128 0x1
 4478 0497 DB210000 		.4byte	.LASF323
 4479 049b 05       		.byte	0x5
 4480 049c 01       		.uleb128 0x1
 4481 049d F2090000 		.4byte	.LASF324
 4482 04a1 05       		.byte	0x5
 4483 04a2 01       		.uleb128 0x1
 4484 04a3 032B0000 		.4byte	.LASF325
 4485 04a7 05       		.byte	0x5
 4486 04a8 01       		.uleb128 0x1
 4487 04a9 2F180000 		.4byte	.LASF326
 4488 04ad 05       		.byte	0x5
 4489 04ae 01       		.uleb128 0x1
 4490 04af 594C0000 		.4byte	.LASF327
 4491 04b3 05       		.byte	0x5
 4492 04b4 01       		.uleb128 0x1
 4493 04b5 8D040000 		.4byte	.LASF328
 4494 04b9 05       		.byte	0x5
 4495 04ba 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 90


 4496 04bb FA1A0000 		.4byte	.LASF329
 4497 04bf 05       		.byte	0x5
 4498 04c0 01       		.uleb128 0x1
 4499 04c1 82310000 		.4byte	.LASF330
 4500 04c5 05       		.byte	0x5
 4501 04c6 01       		.uleb128 0x1
 4502 04c7 F43E0000 		.4byte	.LASF331
 4503 04cb 05       		.byte	0x5
 4504 04cc 01       		.uleb128 0x1
 4505 04cd 17490000 		.4byte	.LASF332
 4506 04d1 05       		.byte	0x5
 4507 04d2 01       		.uleb128 0x1
 4508 04d3 F7200000 		.4byte	.LASF333
 4509 04d7 05       		.byte	0x5
 4510 04d8 01       		.uleb128 0x1
 4511 04d9 C83D0000 		.4byte	.LASF334
 4512 04dd 05       		.byte	0x5
 4513 04de 01       		.uleb128 0x1
 4514 04df 4E390000 		.4byte	.LASF335
 4515 04e3 05       		.byte	0x5
 4516 04e4 01       		.uleb128 0x1
 4517 04e5 1D3D0000 		.4byte	.LASF336
 4518 04e9 05       		.byte	0x5
 4519 04ea 01       		.uleb128 0x1
 4520 04eb 20450000 		.4byte	.LASF337
 4521 04ef 05       		.byte	0x5
 4522 04f0 01       		.uleb128 0x1
 4523 04f1 A6560000 		.4byte	.LASF338
 4524 04f5 05       		.byte	0x5
 4525 04f6 01       		.uleb128 0x1
 4526 04f7 89420000 		.4byte	.LASF339
 4527 04fb 05       		.byte	0x5
 4528 04fc 01       		.uleb128 0x1
 4529 04fd 4B450000 		.4byte	.LASF340
 4530 0501 05       		.byte	0x5
 4531 0502 01       		.uleb128 0x1
 4532 0503 530B0000 		.4byte	.LASF341
 4533 0507 05       		.byte	0x5
 4534 0508 01       		.uleb128 0x1
 4535 0509 CF750000 		.4byte	.LASF342
 4536 050d 05       		.byte	0x5
 4537 050e 01       		.uleb128 0x1
 4538 050f 3D510000 		.4byte	.LASF343
 4539 0513 05       		.byte	0x5
 4540 0514 01       		.uleb128 0x1
 4541 0515 524E0000 		.4byte	.LASF344
 4542 0519 05       		.byte	0x5
 4543 051a 01       		.uleb128 0x1
 4544 051b A4580000 		.4byte	.LASF345
 4545 051f 05       		.byte	0x5
 4546 0520 01       		.uleb128 0x1
 4547 0521 9C670000 		.4byte	.LASF346
 4548 0525 05       		.byte	0x5
 4549 0526 01       		.uleb128 0x1
 4550 0527 31640000 		.4byte	.LASF347
 4551 052b 05       		.byte	0x5
 4552 052c 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 91


 4553 052d 580F0000 		.4byte	.LASF348
 4554 0531 05       		.byte	0x5
 4555 0532 01       		.uleb128 0x1
 4556 0533 853E0000 		.4byte	.LASF349
 4557 0537 05       		.byte	0x5
 4558 0538 01       		.uleb128 0x1
 4559 0539 1C270000 		.4byte	.LASF350
 4560 053d 05       		.byte	0x5
 4561 053e 01       		.uleb128 0x1
 4562 053f E8070000 		.4byte	.LASF351
 4563 0543 05       		.byte	0x5
 4564 0544 01       		.uleb128 0x1
 4565 0545 99370000 		.4byte	.LASF352
 4566 0549 05       		.byte	0x5
 4567 054a 01       		.uleb128 0x1
 4568 054b 5D630000 		.4byte	.LASF353
 4569 054f 05       		.byte	0x5
 4570 0550 01       		.uleb128 0x1
 4571 0551 FD140000 		.4byte	.LASF354
 4572 0555 05       		.byte	0x5
 4573 0556 01       		.uleb128 0x1
 4574 0557 AF600000 		.4byte	.LASF355
 4575 055b 05       		.byte	0x5
 4576 055c 01       		.uleb128 0x1
 4577 055d 2D760000 		.4byte	.LASF356
 4578 0561 05       		.byte	0x5
 4579 0562 01       		.uleb128 0x1
 4580 0563 B31A0000 		.4byte	.LASF357
 4581 0567 05       		.byte	0x5
 4582 0568 01       		.uleb128 0x1
 4583 0569 304E0000 		.4byte	.LASF358
 4584 056d 05       		.byte	0x5
 4585 056e 01       		.uleb128 0x1
 4586 056f BF570000 		.4byte	.LASF359
 4587 0573 05       		.byte	0x5
 4588 0574 01       		.uleb128 0x1
 4589 0575 98640000 		.4byte	.LASF360
 4590 0579 05       		.byte	0x5
 4591 057a 01       		.uleb128 0x1
 4592 057b 3B270000 		.4byte	.LASF361
 4593 057f 05       		.byte	0x5
 4594 0580 01       		.uleb128 0x1
 4595 0581 4C400000 		.4byte	.LASF362
 4596 0585 05       		.byte	0x5
 4597 0586 01       		.uleb128 0x1
 4598 0587 58060000 		.4byte	.LASF363
 4599 058b 05       		.byte	0x5
 4600 058c 01       		.uleb128 0x1
 4601 058d D4040000 		.4byte	.LASF364
 4602 0591 05       		.byte	0x5
 4603 0592 01       		.uleb128 0x1
 4604 0593 56130000 		.4byte	.LASF365
 4605 0597 05       		.byte	0x5
 4606 0598 01       		.uleb128 0x1
 4607 0599 85110000 		.4byte	.LASF366
 4608 059d 05       		.byte	0x5
 4609 059e 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 92


 4610 059f 545A0000 		.4byte	.LASF367
 4611 05a3 05       		.byte	0x5
 4612 05a4 01       		.uleb128 0x1
 4613 05a5 C84B0000 		.4byte	.LASF368
 4614 05a9 05       		.byte	0x5
 4615 05aa 01       		.uleb128 0x1
 4616 05ab 262F0000 		.4byte	.LASF369
 4617 05af 05       		.byte	0x5
 4618 05b0 01       		.uleb128 0x1
 4619 05b1 75650000 		.4byte	.LASF370
 4620 05b5 05       		.byte	0x5
 4621 05b6 01       		.uleb128 0x1
 4622 05b7 10390000 		.4byte	.LASF371
 4623 05bb 05       		.byte	0x5
 4624 05bc 01       		.uleb128 0x1
 4625 05bd EC530000 		.4byte	.LASF372
 4626 05c1 05       		.byte	0x5
 4627 05c2 01       		.uleb128 0x1
 4628 05c3 4D250000 		.4byte	.LASF373
 4629 05c7 05       		.byte	0x5
 4630 05c8 01       		.uleb128 0x1
 4631 05c9 44420000 		.4byte	.LASF374
 4632 05cd 05       		.byte	0x5
 4633 05ce 01       		.uleb128 0x1
 4634 05cf A6400000 		.4byte	.LASF375
 4635 05d3 05       		.byte	0x5
 4636 05d4 01       		.uleb128 0x1
 4637 05d5 1E0C0000 		.4byte	.LASF376
 4638 05d9 05       		.byte	0x5
 4639 05da 01       		.uleb128 0x1
 4640 05db 8F0E0000 		.4byte	.LASF377
 4641 05df 05       		.byte	0x5
 4642 05e0 01       		.uleb128 0x1
 4643 05e1 70610000 		.4byte	.LASF378
 4644 05e5 05       		.byte	0x5
 4645 05e6 01       		.uleb128 0x1
 4646 05e7 CF4E0000 		.4byte	.LASF379
 4647 05eb 05       		.byte	0x5
 4648 05ec 01       		.uleb128 0x1
 4649 05ed 1D020000 		.4byte	.LASF380
 4650 05f1 05       		.byte	0x5
 4651 05f2 01       		.uleb128 0x1
 4652 05f3 7D030000 		.4byte	.LASF381
 4653 05f7 05       		.byte	0x5
 4654 05f8 01       		.uleb128 0x1
 4655 05f9 E94C0000 		.4byte	.LASF382
 4656 05fd 05       		.byte	0x5
 4657 05fe 01       		.uleb128 0x1
 4658 05ff EB390000 		.4byte	.LASF383
 4659 0603 05       		.byte	0x5
 4660 0604 01       		.uleb128 0x1
 4661 0605 04510000 		.4byte	.LASF384
 4662 0609 05       		.byte	0x5
 4663 060a 01       		.uleb128 0x1
 4664 060b 90650000 		.4byte	.LASF385
 4665 060f 05       		.byte	0x5
 4666 0610 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 93


 4667 0611 FE540000 		.4byte	.LASF386
 4668 0615 05       		.byte	0x5
 4669 0616 01       		.uleb128 0x1
 4670 0617 49310000 		.4byte	.LASF387
 4671 061b 05       		.byte	0x5
 4672 061c 01       		.uleb128 0x1
 4673 061d E2010000 		.4byte	.LASF388
 4674 0621 05       		.byte	0x5
 4675 0622 01       		.uleb128 0x1
 4676 0623 B62B0000 		.4byte	.LASF389
 4677 0627 05       		.byte	0x5
 4678 0628 01       		.uleb128 0x1
 4679 0629 41180000 		.4byte	.LASF390
 4680 062d 05       		.byte	0x5
 4681 062e 01       		.uleb128 0x1
 4682 062f E31D0000 		.4byte	.LASF391
 4683 0633 05       		.byte	0x5
 4684 0634 01       		.uleb128 0x1
 4685 0635 6C600000 		.4byte	.LASF392
 4686 0639 05       		.byte	0x5
 4687 063a 01       		.uleb128 0x1
 4688 063b E2610000 		.4byte	.LASF393
 4689 063f 05       		.byte	0x5
 4690 0640 01       		.uleb128 0x1
 4691 0641 A8040000 		.4byte	.LASF394
 4692 0645 05       		.byte	0x5
 4693 0646 01       		.uleb128 0x1
 4694 0647 244D0000 		.4byte	.LASF395
 4695 064b 05       		.byte	0x5
 4696 064c 01       		.uleb128 0x1
 4697 064d AF5F0000 		.4byte	.LASF396
 4698 0651 05       		.byte	0x5
 4699 0652 01       		.uleb128 0x1
 4700 0653 78540000 		.4byte	.LASF397
 4701 0657 05       		.byte	0x5
 4702 0658 01       		.uleb128 0x1
 4703 0659 5D680000 		.4byte	.LASF398
 4704 065d 05       		.byte	0x5
 4705 065e 01       		.uleb128 0x1
 4706 065f 6E6B0000 		.4byte	.LASF399
 4707 0663 05       		.byte	0x5
 4708 0664 01       		.uleb128 0x1
 4709 0665 FB0C0000 		.4byte	.LASF400
 4710 0669 05       		.byte	0x5
 4711 066a 01       		.uleb128 0x1
 4712 066b 61050000 		.4byte	.LASF401
 4713 066f 05       		.byte	0x5
 4714 0670 01       		.uleb128 0x1
 4715 0671 604D0000 		.4byte	.LASF402
 4716 0675 05       		.byte	0x5
 4717 0676 01       		.uleb128 0x1
 4718 0677 65510000 		.4byte	.LASF403
 4719 067b 05       		.byte	0x5
 4720 067c 01       		.uleb128 0x1
 4721 067d D01C0000 		.4byte	.LASF404
 4722 0681 05       		.byte	0x5
 4723 0682 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 94


 4724 0683 F6020000 		.4byte	.LASF405
 4725 0687 05       		.byte	0x5
 4726 0688 01       		.uleb128 0x1
 4727 0689 15420000 		.4byte	.LASF406
 4728 068d 05       		.byte	0x5
 4729 068e 01       		.uleb128 0x1
 4730 068f 98390000 		.4byte	.LASF407
 4731 0693 05       		.byte	0x5
 4732 0694 01       		.uleb128 0x1
 4733 0695 E60D0000 		.4byte	.LASF408
 4734 0699 05       		.byte	0x5
 4735 069a 01       		.uleb128 0x1
 4736 069b 7C4D0000 		.4byte	.LASF409
 4737 069f 05       		.byte	0x5
 4738 06a0 01       		.uleb128 0x1
 4739 06a1 900C0000 		.4byte	.LASF410
 4740 06a5 05       		.byte	0x5
 4741 06a6 01       		.uleb128 0x1
 4742 06a7 8D550000 		.4byte	.LASF411
 4743 06ab 05       		.byte	0x5
 4744 06ac 01       		.uleb128 0x1
 4745 06ad 073F0000 		.4byte	.LASF412
 4746 06b1 05       		.byte	0x5
 4747 06b2 01       		.uleb128 0x1
 4748 06b3 27340000 		.4byte	.LASF413
 4749 06b7 05       		.byte	0x5
 4750 06b8 01       		.uleb128 0x1
 4751 06b9 B54F0000 		.4byte	.LASF414
 4752 06bd 05       		.byte	0x5
 4753 06be 01       		.uleb128 0x1
 4754 06bf 5A530000 		.4byte	.LASF415
 4755 06c3 05       		.byte	0x5
 4756 06c4 01       		.uleb128 0x1
 4757 06c5 D2200000 		.4byte	.LASF416
 4758 06c9 05       		.byte	0x5
 4759 06ca 01       		.uleb128 0x1
 4760 06cb 0B3C0000 		.4byte	.LASF417
 4761 06cf 05       		.byte	0x5
 4762 06d0 01       		.uleb128 0x1
 4763 06d1 69530000 		.4byte	.LASF418
 4764 06d5 05       		.byte	0x5
 4765 06d6 01       		.uleb128 0x1
 4766 06d7 F52F0000 		.4byte	.LASF419
 4767 06db 05       		.byte	0x5
 4768 06dc 01       		.uleb128 0x1
 4769 06dd 8F230000 		.4byte	.LASF420
 4770 06e1 05       		.byte	0x5
 4771 06e2 01       		.uleb128 0x1
 4772 06e3 440B0000 		.4byte	.LASF421
 4773 06e7 05       		.byte	0x5
 4774 06e8 01       		.uleb128 0x1
 4775 06e9 D8140000 		.4byte	.LASF422
 4776 06ed 05       		.byte	0x5
 4777 06ee 01       		.uleb128 0x1
 4778 06ef 81470000 		.4byte	.LASF423
 4779 06f3 05       		.byte	0x5
 4780 06f4 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 95


 4781 06f5 33000000 		.4byte	.LASF424
 4782 06f9 05       		.byte	0x5
 4783 06fa 01       		.uleb128 0x1
 4784 06fb 57650000 		.4byte	.LASF425
 4785 06ff 05       		.byte	0x5
 4786 0700 01       		.uleb128 0x1
 4787 0701 4E440000 		.4byte	.LASF426
 4788 0705 05       		.byte	0x5
 4789 0706 01       		.uleb128 0x1
 4790 0707 571F0000 		.4byte	.LASF427
 4791 070b 05       		.byte	0x5
 4792 070c 01       		.uleb128 0x1
 4793 070d 3A130000 		.4byte	.LASF428
 4794 0711 05       		.byte	0x5
 4795 0712 01       		.uleb128 0x1
 4796 0713 A05B0000 		.4byte	.LASF429
 4797 0717 05       		.byte	0x5
 4798 0718 01       		.uleb128 0x1
 4799 0719 1D170000 		.4byte	.LASF430
 4800 071d 05       		.byte	0x5
 4801 071e 01       		.uleb128 0x1
 4802 071f D6400000 		.4byte	.LASF431
 4803 0723 05       		.byte	0x5
 4804 0724 01       		.uleb128 0x1
 4805 0725 3F580000 		.4byte	.LASF432
 4806 0729 05       		.byte	0x5
 4807 072a 01       		.uleb128 0x1
 4808 072b 292C0000 		.4byte	.LASF433
 4809 072f 05       		.byte	0x5
 4810 0730 01       		.uleb128 0x1
 4811 0731 6C680000 		.4byte	.LASF434
 4812 0735 05       		.byte	0x5
 4813 0736 01       		.uleb128 0x1
 4814 0737 D4000000 		.4byte	.LASF435
 4815 073b 05       		.byte	0x5
 4816 073c 01       		.uleb128 0x1
 4817 073d 3F110000 		.4byte	.LASF436
 4818 0741 05       		.byte	0x5
 4819 0742 01       		.uleb128 0x1
 4820 0743 EE130000 		.4byte	.LASF437
 4821 0747 05       		.byte	0x5
 4822 0748 01       		.uleb128 0x1
 4823 0749 DF440000 		.4byte	.LASF438
 4824 074d 05       		.byte	0x5
 4825 074e 01       		.uleb128 0x1
 4826 074f 55330000 		.4byte	.LASF439
 4827 0753 05       		.byte	0x5
 4828 0754 01       		.uleb128 0x1
 4829 0755 60180000 		.4byte	.LASF440
 4830 0759 05       		.byte	0x5
 4831 075a 01       		.uleb128 0x1
 4832 075b 6E000000 		.4byte	.LASF441
 4833 075f 05       		.byte	0x5
 4834 0760 01       		.uleb128 0x1
 4835 0761 F4260000 		.4byte	.LASF442
 4836 0765 05       		.byte	0x5
 4837 0766 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 96


 4838 0767 18560000 		.4byte	.LASF443
 4839 076b 05       		.byte	0x5
 4840 076c 01       		.uleb128 0x1
 4841 076d CD390000 		.4byte	.LASF444
 4842 0771 05       		.byte	0x5
 4843 0772 01       		.uleb128 0x1
 4844 0773 20210000 		.4byte	.LASF445
 4845 0777 05       		.byte	0x5
 4846 0778 01       		.uleb128 0x1
 4847 0779 4E270000 		.4byte	.LASF446
 4848 077d 05       		.byte	0x5
 4849 077e 01       		.uleb128 0x1
 4850 077f 6C4A0000 		.4byte	.LASF447
 4851 0783 05       		.byte	0x5
 4852 0784 01       		.uleb128 0x1
 4853 0785 952F0000 		.4byte	.LASF448
 4854 0789 05       		.byte	0x5
 4855 078a 01       		.uleb128 0x1
 4856 078b FA1E0000 		.4byte	.LASF449
 4857 078f 05       		.byte	0x5
 4858 0790 01       		.uleb128 0x1
 4859 0791 493D0000 		.4byte	.LASF450
 4860 0795 05       		.byte	0x5
 4861 0796 01       		.uleb128 0x1
 4862 0797 FA600000 		.4byte	.LASF451
 4863 079b 05       		.byte	0x5
 4864 079c 01       		.uleb128 0x1
 4865 079d A9420000 		.4byte	.LASF452
 4866 07a1 05       		.byte	0x5
 4867 07a2 01       		.uleb128 0x1
 4868 07a3 30460000 		.4byte	.LASF453
 4869 07a7 05       		.byte	0x5
 4870 07a8 01       		.uleb128 0x1
 4871 07a9 9E070000 		.4byte	.LASF454
 4872 07ad 05       		.byte	0x5
 4873 07ae 01       		.uleb128 0x1
 4874 07af BD670000 		.4byte	.LASF455
 4875 07b3 05       		.byte	0x5
 4876 07b4 01       		.uleb128 0x1
 4877 07b5 0A680000 		.4byte	.LASF456
 4878 07b9 05       		.byte	0x5
 4879 07ba 01       		.uleb128 0x1
 4880 07bb 16540000 		.4byte	.LASF457
 4881 07bf 05       		.byte	0x5
 4882 07c0 01       		.uleb128 0x1
 4883 07c1 BD300000 		.4byte	.LASF458
 4884 07c5 05       		.byte	0x5
 4885 07c6 01       		.uleb128 0x1
 4886 07c7 4B0F0000 		.4byte	.LASF459
 4887 07cb 05       		.byte	0x5
 4888 07cc 01       		.uleb128 0x1
 4889 07cd E7140000 		.4byte	.LASF460
 4890 07d1 05       		.byte	0x5
 4891 07d2 01       		.uleb128 0x1
 4892 07d3 046A0000 		.4byte	.LASF461
 4893 07d7 05       		.byte	0x5
 4894 07d8 01       		.uleb128 0x1
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 97


 4895 07d9 91280000 		.4byte	.LASF462
 4896 07dd 05       		.byte	0x5
 4897 07de 01       		.uleb128 0x1
 4898 07df FB750000 		.4byte	.LASF463
 4899 07e3 05       		.byte	0x5
 4900 07e4 01       		.uleb128 0x1
 4901 07e5 1E610000 		.4byte	.LASF464
 4902 07e9 05       		.byte	0x5
 4903 07ea 01       		.uleb128 0x1
 4904 07eb 0C540000 		.4byte	.LASF465
 4905 07ef 05       		.byte	0x5
 4906 07f0 00       		.uleb128 0
 4907 07f1 9A5D0000 		.4byte	.LASF466
 4908 07f5 00       		.byte	0
 4909              		.section	.debug_macro,"G",%progbits,wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5,comdat
 4910              	.Ldebug_macro2:
 4911 0000 0400     		.2byte	0x4
 4912 0002 00       		.byte	0
 4913 0003 05       		.byte	0x5
 4914 0004 08       		.uleb128 0x8
 4915 0005 BE0E0000 		.4byte	.LASF467
 4916 0009 05       		.byte	0x5
 4917 000a 0E       		.uleb128 0xe
 4918 000b BB5A0000 		.4byte	.LASF468
 4919 000f 05       		.byte	0x5
 4920 0010 15       		.uleb128 0x15
 4921 0011 946B0000 		.4byte	.LASF469
 4922 0015 05       		.byte	0x5
 4923 0016 18       		.uleb128 0x18
 4924 0017 C25E0000 		.4byte	.LASF470
 4925 001b 05       		.byte	0x5
 4926 001c 28       		.uleb128 0x28
 4927 001d 67230000 		.4byte	.LASF471
 4928 0021 05       		.byte	0x5
 4929 0022 32       		.uleb128 0x32
 4930 0023 56590000 		.4byte	.LASF472
 4931 0027 05       		.byte	0x5
 4932 0028 36       		.uleb128 0x36
 4933 0029 023A0000 		.4byte	.LASF473
 4934 002d 05       		.byte	0x5
 4935 002e 39       		.uleb128 0x39
 4936 002f 6E1D0000 		.4byte	.LASF474
 4937 0033 05       		.byte	0x5
 4938 0034 3C       		.uleb128 0x3c
 4939 0035 0D080000 		.4byte	.LASF475
 4940 0039 00       		.byte	0
 4941              		.section	.debug_macro,"G",%progbits,wm4.features.h.22.b72b3baab2bb2eab3661375590100b6b,comdat
 4942              	.Ldebug_macro3:
 4943 0000 0400     		.2byte	0x4
 4944 0002 00       		.byte	0
 4945 0003 05       		.byte	0x5
 4946 0004 16       		.uleb128 0x16
 4947 0005 781E0000 		.4byte	.LASF476
 4948 0009 05       		.byte	0x5
 4949 000a 1F       		.uleb128 0x1f
 4950 000b 45100000 		.4byte	.LASF477
 4951 000f 00       		.byte	0
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 98


 4952              		.section	.debug_macro,"G",%progbits,wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c,comdat
 4953              	.Ldebug_macro4:
 4954 0000 0400     		.2byte	0x4
 4955 0002 00       		.byte	0
 4956 0003 05       		.byte	0x5
 4957 0004 C101     		.uleb128 0xc1
 4958 0006 450C0000 		.4byte	.LASF478
 4959 000a 06       		.byte	0x6
 4960 000b C701     		.uleb128 0xc7
 4961 000d B50F0000 		.4byte	.LASF479
 4962 0011 05       		.byte	0x5
 4963 0012 CB01     		.uleb128 0xcb
 4964 0014 C1460000 		.4byte	.LASF480
 4965 0018 05       		.byte	0x5
 4966 0019 DB01     		.uleb128 0xdb
 4967 001b 64370000 		.4byte	.LASF481
 4968 001f 05       		.byte	0x5
 4969 0020 DF01     		.uleb128 0xdf
 4970 0022 396B0000 		.4byte	.LASF482
 4971 0026 05       		.byte	0x5
 4972 0027 E601     		.uleb128 0xe6
 4973 0029 751B0000 		.4byte	.LASF483
 4974 002d 00       		.byte	0
 4975              		.section	.debug_macro,"G",%progbits,wm4._ansi.h.23.fff5fb436fa813a3c343750c1b5c0dee,comdat
 4976              	.Ldebug_macro5:
 4977 0000 0400     		.2byte	0x4
 4978 0002 00       		.byte	0
 4979 0003 05       		.byte	0x5
 4980 0004 17       		.uleb128 0x17
 4981 0005 7B590000 		.4byte	.LASF484
 4982 0009 05       		.byte	0x5
 4983 000a 22       		.uleb128 0x22
 4984 000b 01320000 		.4byte	.LASF485
 4985 000f 05       		.byte	0x5
 4986 0010 23       		.uleb128 0x23
 4987 0011 A85C0000 		.4byte	.LASF486
 4988 0015 05       		.byte	0x5
 4989 0016 26       		.uleb128 0x26
 4990 0017 E05F0000 		.4byte	.LASF487
 4991 001b 05       		.byte	0x5
 4992 001c 32       		.uleb128 0x32
 4993 001d 90670000 		.4byte	.LASF488
 4994 0021 05       		.byte	0x5
 4995 0022 33       		.uleb128 0x33
 4996 0023 1F6B0000 		.4byte	.LASF489
 4997 0027 05       		.byte	0x5
 4998 0028 34       		.uleb128 0x34
 4999 0029 62550000 		.4byte	.LASF490
 5000 002d 05       		.byte	0x5
 5001 002e 35       		.uleb128 0x35
 5002 002f FF530000 		.4byte	.LASF491
 5003 0033 05       		.byte	0x5
 5004 0034 36       		.uleb128 0x36
 5005 0035 970A0000 		.4byte	.LASF492
 5006 0039 05       		.byte	0x5
 5007 003a 37       		.uleb128 0x37
 5008 003b CA230000 		.4byte	.LASF493
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 99


 5009 003f 05       		.byte	0x5
 5010 0040 38       		.uleb128 0x38
 5011 0041 7E3A0000 		.4byte	.LASF494
 5012 0045 05       		.byte	0x5
 5013 0046 39       		.uleb128 0x39
 5014 0047 3F610000 		.4byte	.LASF495
 5015 004b 05       		.byte	0x5
 5016 004c 40       		.uleb128 0x40
 5017 004d D1410000 		.4byte	.LASF496
 5018 0051 05       		.byte	0x5
 5019 0052 41       		.uleb128 0x41
 5020 0053 6F060000 		.4byte	.LASF497
 5021 0057 05       		.byte	0x5
 5022 0058 42       		.uleb128 0x42
 5023 0059 FD440000 		.4byte	.LASF498
 5024 005d 05       		.byte	0x5
 5025 005e 43       		.uleb128 0x43
 5026 005f 72090000 		.4byte	.LASF499
 5027 0063 05       		.byte	0x5
 5028 0064 45       		.uleb128 0x45
 5029 0065 56220000 		.4byte	.LASF500
 5030 0069 05       		.byte	0x5
 5031 006a 46       		.uleb128 0x46
 5032 006b 7E0B0000 		.4byte	.LASF501
 5033 006f 05       		.byte	0x5
 5034 0070 47       		.uleb128 0x47
 5035 0071 92530000 		.4byte	.LASF502
 5036 0075 05       		.byte	0x5
 5037 0076 49       		.uleb128 0x49
 5038 0077 FD4C0000 		.4byte	.LASF503
 5039 007b 05       		.byte	0x5
 5040 007c 4C       		.uleb128 0x4c
 5041 007d 82180000 		.4byte	.LASF504
 5042 0081 05       		.byte	0x5
 5043 0082 4F       		.uleb128 0x4f
 5044 0083 44160000 		.4byte	.LASF505
 5045 0087 05       		.byte	0x5
 5046 0088 69       		.uleb128 0x69
 5047 0089 805C0000 		.4byte	.LASF506
 5048 008d 05       		.byte	0x5
 5049 008e 7C       		.uleb128 0x7c
 5050 008f 0C140000 		.4byte	.LASF507
 5051 0093 05       		.byte	0x5
 5052 0094 8401     		.uleb128 0x84
 5053 0096 11130000 		.4byte	.LASF508
 5054 009a 05       		.byte	0x5
 5055 009b 8501     		.uleb128 0x85
 5056 009d 10570000 		.4byte	.LASF509
 5057 00a1 00       		.byte	0
 5058              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58,comdat
 5059              	.Ldebug_macro6:
 5060 0000 0400     		.2byte	0x4
 5061 0002 00       		.byte	0
 5062 0003 05       		.byte	0x5
 5063 0004 0D       		.uleb128 0xd
 5064 0005 48240000 		.4byte	.LASF510
 5065 0009 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 100


 5066 000a 0E       		.uleb128 0xe
 5067 000b B81F0000 		.4byte	.LASF81
 5068 000f 00       		.byte	0
 5069              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14,comdat
 5070              	.Ldebug_macro7:
 5071 0000 0400     		.2byte	0x4
 5072 0002 00       		.byte	0
 5073 0003 05       		.byte	0x5
 5074 0004 BB01     		.uleb128 0xbb
 5075 0006 53230000 		.4byte	.LASF511
 5076 000a 05       		.byte	0x5
 5077 000b BC01     		.uleb128 0xbc
 5078 000d 66090000 		.4byte	.LASF512
 5079 0011 05       		.byte	0x5
 5080 0012 BD01     		.uleb128 0xbd
 5081 0014 E7470000 		.4byte	.LASF513
 5082 0018 05       		.byte	0x5
 5083 0019 BE01     		.uleb128 0xbe
 5084 001b 12110000 		.4byte	.LASF514
 5085 001f 05       		.byte	0x5
 5086 0020 BF01     		.uleb128 0xbf
 5087 0022 F3300000 		.4byte	.LASF515
 5088 0026 05       		.byte	0x5
 5089 0027 C001     		.uleb128 0xc0
 5090 0029 730C0000 		.4byte	.LASF516
 5091 002d 05       		.byte	0x5
 5092 002e C101     		.uleb128 0xc1
 5093 0030 A54A0000 		.4byte	.LASF517
 5094 0034 05       		.byte	0x5
 5095 0035 C201     		.uleb128 0xc2
 5096 0037 743A0000 		.4byte	.LASF518
 5097 003b 05       		.byte	0x5
 5098 003c C301     		.uleb128 0xc3
 5099 003e D4510000 		.4byte	.LASF519
 5100 0042 05       		.byte	0x5
 5101 0043 C401     		.uleb128 0xc4
 5102 0045 E83F0000 		.4byte	.LASF520
 5103 0049 05       		.byte	0x5
 5104 004a C501     		.uleb128 0xc5
 5105 004c 4F4D0000 		.4byte	.LASF521
 5106 0050 05       		.byte	0x5
 5107 0051 C601     		.uleb128 0xc6
 5108 0053 2A1A0000 		.4byte	.LASF522
 5109 0057 05       		.byte	0x5
 5110 0058 C701     		.uleb128 0xc7
 5111 005a 90150000 		.4byte	.LASF523
 5112 005e 05       		.byte	0x5
 5113 005f C801     		.uleb128 0xc8
 5114 0061 8F1A0000 		.4byte	.LASF524
 5115 0065 05       		.byte	0x5
 5116 0066 C901     		.uleb128 0xc9
 5117 0068 49630000 		.4byte	.LASF525
 5118 006c 05       		.byte	0x5
 5119 006d CA01     		.uleb128 0xca
 5120 006f 9D560000 		.4byte	.LASF526
 5121 0073 05       		.byte	0x5
 5122 0074 CF01     		.uleb128 0xcf
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 101


 5123 0076 9E0B0000 		.4byte	.LASF527
 5124 007a 06       		.byte	0x6
 5125 007b EB01     		.uleb128 0xeb
 5126 007d 1A3A0000 		.4byte	.LASF528
 5127 0081 05       		.byte	0x5
 5128 0082 8802     		.uleb128 0x108
 5129 0084 B0670000 		.4byte	.LASF529
 5130 0088 05       		.byte	0x5
 5131 0089 8902     		.uleb128 0x109
 5132 008b C0420000 		.4byte	.LASF530
 5133 008f 05       		.byte	0x5
 5134 0090 8A02     		.uleb128 0x10a
 5135 0092 D7460000 		.4byte	.LASF531
 5136 0096 05       		.byte	0x5
 5137 0097 8B02     		.uleb128 0x10b
 5138 0099 76630000 		.4byte	.LASF532
 5139 009d 05       		.byte	0x5
 5140 009e 8C02     		.uleb128 0x10c
 5141 00a0 A0520000 		.4byte	.LASF533
 5142 00a4 05       		.byte	0x5
 5143 00a5 8D02     		.uleb128 0x10d
 5144 00a7 7C3C0000 		.4byte	.LASF534
 5145 00ab 05       		.byte	0x5
 5146 00ac 8E02     		.uleb128 0x10e
 5147 00ae 60520000 		.4byte	.LASF535
 5148 00b2 05       		.byte	0x5
 5149 00b3 8F02     		.uleb128 0x10f
 5150 00b5 39290000 		.4byte	.LASF536
 5151 00b9 05       		.byte	0x5
 5152 00ba 9002     		.uleb128 0x110
 5153 00bc 7C6B0000 		.4byte	.LASF537
 5154 00c0 05       		.byte	0x5
 5155 00c1 9102     		.uleb128 0x111
 5156 00c3 E1500000 		.4byte	.LASF538
 5157 00c7 05       		.byte	0x5
 5158 00c8 9202     		.uleb128 0x112
 5159 00ca F0470000 		.4byte	.LASF539
 5160 00ce 05       		.byte	0x5
 5161 00cf 9302     		.uleb128 0x113
 5162 00d1 0F620000 		.4byte	.LASF540
 5163 00d5 05       		.byte	0x5
 5164 00d6 9402     		.uleb128 0x114
 5165 00d8 78530000 		.4byte	.LASF541
 5166 00dc 05       		.byte	0x5
 5167 00dd 9502     		.uleb128 0x115
 5168 00df E94B0000 		.4byte	.LASF542
 5169 00e3 05       		.byte	0x5
 5170 00e4 9602     		.uleb128 0x116
 5171 00e6 C3400000 		.4byte	.LASF543
 5172 00ea 06       		.byte	0x6
 5173 00eb A302     		.uleb128 0x123
 5174 00ed 1B640000 		.4byte	.LASF544
 5175 00f1 06       		.byte	0x6
 5176 00f2 D802     		.uleb128 0x158
 5177 00f4 00650000 		.4byte	.LASF545
 5178 00f8 06       		.byte	0x6
 5179 00f9 9903     		.uleb128 0x199
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 102


 5180 00fb 763B0000 		.4byte	.LASF546
 5181 00ff 00       		.byte	0
 5182              		.section	.debug_macro,"G",%progbits,wm4._default_types.h.6.5e12cd604db8ce00b62bb2f02708eaf3,comdat
 5183              	.Ldebug_macro8:
 5184 0000 0400     		.2byte	0x4
 5185 0002 00       		.byte	0
 5186 0003 05       		.byte	0x5
 5187 0004 06       		.uleb128 0x6
 5188 0005 3F470000 		.4byte	.LASF547
 5189 0009 05       		.byte	0x5
 5190 000a 11       		.uleb128 0x11
 5191 000b 103E0000 		.4byte	.LASF548
 5192 000f 05       		.byte	0x5
 5193 0010 1B       		.uleb128 0x1b
 5194 0011 B12F0000 		.4byte	.LASF549
 5195 0015 05       		.byte	0x5
 5196 0016 25       		.uleb128 0x25
 5197 0017 7B220000 		.4byte	.LASF550
 5198 001b 05       		.byte	0x5
 5199 001c 2F       		.uleb128 0x2f
 5200 001d AA120000 		.4byte	.LASF551
 5201 0021 05       		.byte	0x5
 5202 0022 3B       		.uleb128 0x3b
 5203 0023 C53C0000 		.4byte	.LASF552
 5204 0027 05       		.byte	0x5
 5205 0028 4D       		.uleb128 0x4d
 5206 0029 9B2B0000 		.4byte	.LASF553
 5207 002d 05       		.byte	0x5
 5208 002e 64       		.uleb128 0x64
 5209 002f 574B0000 		.4byte	.LASF554
 5210 0033 06       		.byte	0x6
 5211 0034 72       		.uleb128 0x72
 5212 0035 A20E0000 		.4byte	.LASF555
 5213 0039 00       		.byte	0
 5214              		.section	.debug_macro,"G",%progbits,wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea,comdat
 5215              	.Ldebug_macro9:
 5216 0000 0400     		.2byte	0x4
 5217 0002 00       		.byte	0
 5218 0003 05       		.byte	0x5
 5219 0004 02       		.uleb128 0x2
 5220 0005 A96B0000 		.4byte	.LASF556
 5221 0009 05       		.byte	0x5
 5222 000a 0B       		.uleb128 0xb
 5223 000b 034E0000 		.4byte	.LASF557
 5224 000f 05       		.byte	0x5
 5225 0010 0C       		.uleb128 0xc
 5226 0011 65340000 		.4byte	.LASF558
 5227 0015 05       		.byte	0x5
 5228 0016 0D       		.uleb128 0xd
 5229 0017 71440000 		.4byte	.LASF559
 5230 001b 05       		.byte	0x5
 5231 001c 0E       		.uleb128 0xe
 5232 001d 32680000 		.4byte	.LASF560
 5233 0021 05       		.byte	0x5
 5234 0022 0F       		.uleb128 0xf
 5235 0023 B56A0000 		.4byte	.LASF561
 5236 0027 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 103


 5237 0028 10       		.uleb128 0x10
 5238 0029 D40A0000 		.4byte	.LASF562
 5239 002d 05       		.byte	0x5
 5240 002e 11       		.uleb128 0x11
 5241 002f 5D380000 		.4byte	.LASF563
 5242 0033 05       		.byte	0x5
 5243 0034 12       		.uleb128 0x12
 5244 0035 A1290000 		.4byte	.LASF564
 5245 0039 05       		.byte	0x5
 5246 003a 13       		.uleb128 0x13
 5247 003b 68210000 		.4byte	.LASF565
 5248 003f 05       		.byte	0x5
 5249 0040 14       		.uleb128 0x14
 5250 0041 DA4A0000 		.4byte	.LASF566
 5251 0045 05       		.byte	0x5
 5252 0046 15       		.uleb128 0x15
 5253 0047 3E3C0000 		.4byte	.LASF567
 5254 004b 05       		.byte	0x5
 5255 004c 16       		.uleb128 0x16
 5256 004d 4F5E0000 		.4byte	.LASF568
 5257 0051 00       		.byte	0
 5258              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47,comdat
 5259              	.Ldebug_macro10:
 5260 0000 0400     		.2byte	0x4
 5261 0002 00       		.byte	0
 5262 0003 05       		.byte	0x5
 5263 0004 DD02     		.uleb128 0x15d
 5264 0006 5B200000 		.4byte	.LASF569
 5265 000a 06       		.byte	0x6
 5266 000b E402     		.uleb128 0x164
 5267 000d 1F1C0000 		.4byte	.LASF570
 5268 0011 06       		.byte	0x6
 5269 0012 9903     		.uleb128 0x199
 5270 0014 763B0000 		.4byte	.LASF546
 5271 0018 00       		.byte	0
 5272              		.section	.debug_macro,"G",%progbits,wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64,comdat
 5273              	.Ldebug_macro11:
 5274 0000 0400     		.2byte	0x4
 5275 0002 00       		.byte	0
 5276 0003 05       		.byte	0x5
 5277 0004 10       		.uleb128 0x10
 5278 0005 305E0000 		.4byte	.LASF571
 5279 0009 05       		.byte	0x5
 5280 000a 14       		.uleb128 0x14
 5281 000b 91560000 		.4byte	.LASF572
 5282 000f 05       		.byte	0x5
 5283 0010 45       		.uleb128 0x45
 5284 0011 3E440000 		.4byte	.LASF573
 5285 0015 05       		.byte	0x5
 5286 0016 A601     		.uleb128 0xa6
 5287 0018 3F380000 		.4byte	.LASF574
 5288 001c 05       		.byte	0x5
 5289 001d AA02     		.uleb128 0x12a
 5290 001f 5F560000 		.4byte	.LASF575
 5291 0023 05       		.byte	0x5
 5292 0024 AB02     		.uleb128 0x12b
 5293 0026 0F340000 		.4byte	.LASF576
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 104


 5294 002a 05       		.byte	0x5
 5295 002b AC02     		.uleb128 0x12c
 5296 002d C8180000 		.4byte	.LASF577
 5297 0031 05       		.byte	0x5
 5298 0032 AD02     		.uleb128 0x12d
 5299 0034 1F5D0000 		.4byte	.LASF578
 5300 0038 05       		.byte	0x5
 5301 0039 AE02     		.uleb128 0x12e
 5302 003b E2550000 		.4byte	.LASF579
 5303 003f 05       		.byte	0x5
 5304 0040 AF02     		.uleb128 0x12f
 5305 0042 B9410000 		.4byte	.LASF580
 5306 0046 05       		.byte	0x5
 5307 0047 B002     		.uleb128 0x130
 5308 0049 A1690000 		.4byte	.LASF581
 5309 004d 05       		.byte	0x5
 5310 004e BC02     		.uleb128 0x13c
 5311 0050 F60D0000 		.4byte	.LASF582
 5312 0054 05       		.byte	0x5
 5313 0055 BD02     		.uleb128 0x13d
 5314 0057 D56B0000 		.4byte	.LASF583
 5315 005b 05       		.byte	0x5
 5316 005c BE02     		.uleb128 0x13e
 5317 005e 37030000 		.4byte	.LASF584
 5318 0062 05       		.byte	0x5
 5319 0063 FE04     		.uleb128 0x27e
 5320 0065 4A130000 		.4byte	.LASF585
 5321 0069 05       		.byte	0x5
 5322 006a 9205     		.uleb128 0x292
 5323 006c 05350000 		.4byte	.LASF586
 5324 0070 05       		.byte	0x5
 5325 0071 C305     		.uleb128 0x2c3
 5326 0073 396C0000 		.4byte	.LASF587
 5327 0077 05       		.byte	0x5
 5328 0078 8106     		.uleb128 0x301
 5329 007a AB630000 		.4byte	.LASF588
 5330 007e 05       		.byte	0x5
 5331 007f 8206     		.uleb128 0x302
 5332 0081 790E0000 		.4byte	.LASF589
 5333 0085 05       		.byte	0x5
 5334 0086 8306     		.uleb128 0x303
 5335 0088 44530000 		.4byte	.LASF590
 5336 008c 05       		.byte	0x5
 5337 008d 8406     		.uleb128 0x304
 5338 008f F5190000 		.4byte	.LASF591
 5339 0093 05       		.byte	0x5
 5340 0094 8506     		.uleb128 0x305
 5341 0096 3A2A0000 		.4byte	.LASF592
 5342 009a 05       		.byte	0x5
 5343 009b 8606     		.uleb128 0x306
 5344 009d 2C070000 		.4byte	.LASF593
 5345 00a1 05       		.byte	0x5
 5346 00a2 8706     		.uleb128 0x307
 5347 00a4 BF370000 		.4byte	.LASF594
 5348 00a8 05       		.byte	0x5
 5349 00a9 8906     		.uleb128 0x309
 5350 00ab BC260000 		.4byte	.LASF595
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 105


 5351 00af 05       		.byte	0x5
 5352 00b0 8A06     		.uleb128 0x30a
 5353 00b2 E12E0000 		.4byte	.LASF596
 5354 00b6 05       		.byte	0x5
 5355 00b7 8B06     		.uleb128 0x30b
 5356 00b9 7F2D0000 		.4byte	.LASF597
 5357 00bd 05       		.byte	0x5
 5358 00be 8C06     		.uleb128 0x30c
 5359 00c0 B53A0000 		.4byte	.LASF598
 5360 00c4 05       		.byte	0x5
 5361 00c5 8D06     		.uleb128 0x30d
 5362 00c7 F9170000 		.4byte	.LASF599
 5363 00cb 05       		.byte	0x5
 5364 00cc 8E06     		.uleb128 0x30e
 5365 00ce 8F080000 		.4byte	.LASF600
 5366 00d2 05       		.byte	0x5
 5367 00d3 8F06     		.uleb128 0x30f
 5368 00d5 34190000 		.4byte	.LASF601
 5369 00d9 05       		.byte	0x5
 5370 00da 9006     		.uleb128 0x310
 5371 00dc B1500000 		.4byte	.LASF602
 5372 00e0 05       		.byte	0x5
 5373 00e1 9106     		.uleb128 0x311
 5374 00e3 BA050000 		.4byte	.LASF603
 5375 00e7 05       		.byte	0x5
 5376 00e8 9206     		.uleb128 0x312
 5377 00ea DA4F0000 		.4byte	.LASF604
 5378 00ee 05       		.byte	0x5
 5379 00ef 9306     		.uleb128 0x313
 5380 00f1 DE5A0000 		.4byte	.LASF605
 5381 00f5 05       		.byte	0x5
 5382 00f6 9406     		.uleb128 0x314
 5383 00f8 08220000 		.4byte	.LASF606
 5384 00fc 05       		.byte	0x5
 5385 00fd 9506     		.uleb128 0x315
 5386 00ff 03090000 		.4byte	.LASF607
 5387 0103 05       		.byte	0x5
 5388 0104 9606     		.uleb128 0x316
 5389 0106 182D0000 		.4byte	.LASF608
 5390 010a 05       		.byte	0x5
 5391 010b 9706     		.uleb128 0x317
 5392 010d 812C0000 		.4byte	.LASF609
 5393 0111 05       		.byte	0x5
 5394 0112 9806     		.uleb128 0x318
 5395 0114 AF4D0000 		.4byte	.LASF610
 5396 0118 05       		.byte	0x5
 5397 0119 9906     		.uleb128 0x319
 5398 011b 204F0000 		.4byte	.LASF611
 5399 011f 05       		.byte	0x5
 5400 0120 9A06     		.uleb128 0x31a
 5401 0122 BB170000 		.4byte	.LASF612
 5402 0126 05       		.byte	0x5
 5403 0127 9B06     		.uleb128 0x31b
 5404 0129 A40D0000 		.4byte	.LASF613
 5405 012d 05       		.byte	0x5
 5406 012e 9C06     		.uleb128 0x31c
 5407 0130 52670000 		.4byte	.LASF614
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 106


 5408 0134 05       		.byte	0x5
 5409 0135 9D06     		.uleb128 0x31d
 5410 0137 B3190000 		.4byte	.LASF615
 5411 013b 05       		.byte	0x5
 5412 013c 9E06     		.uleb128 0x31e
 5413 013e E0360000 		.4byte	.LASF616
 5414 0142 05       		.byte	0x5
 5415 0143 9F06     		.uleb128 0x31f
 5416 0145 82680000 		.4byte	.LASF617
 5417 0149 05       		.byte	0x5
 5418 014a A006     		.uleb128 0x320
 5419 014c 8F000000 		.4byte	.LASF618
 5420 0150 05       		.byte	0x5
 5421 0151 A706     		.uleb128 0x327
 5422 0153 4D030000 		.4byte	.LASF619
 5423 0157 05       		.byte	0x5
 5424 0158 AF06     		.uleb128 0x32f
 5425 015a B55C0000 		.4byte	.LASF620
 5426 015e 05       		.byte	0x5
 5427 015f C106     		.uleb128 0x341
 5428 0161 90220000 		.4byte	.LASF621
 5429 0165 05       		.byte	0x5
 5430 0166 C606     		.uleb128 0x346
 5431 0168 DA570000 		.4byte	.LASF622
 5432 016c 00       		.byte	0
 5433              		.section	.debug_macro,"G",%progbits,wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d,comdat
 5434              	.Ldebug_macro12:
 5435 0000 0400     		.2byte	0x4
 5436 0002 00       		.byte	0
 5437 0003 05       		.byte	0x5
 5438 0004 08       		.uleb128 0x8
 5439 0005 E7270000 		.4byte	.LASF623
 5440 0009 06       		.byte	0x6
 5441 000a 0D       		.uleb128 0xd
 5442 000b 82420000 		.4byte	.LASF624
 5443 000f 05       		.byte	0x5
 5444 0010 10       		.uleb128 0x10
 5445 0011 32220000 		.4byte	.LASF625
 5446 0015 00       		.byte	0
 5447              		.section	.debug_macro,"G",%progbits,wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a,comdat
 5448              	.Ldebug_macro13:
 5449 0000 0400     		.2byte	0x4
 5450 0002 00       		.byte	0
 5451 0003 05       		.byte	0x5
 5452 0004 32       		.uleb128 0x32
 5453 0005 97070000 		.4byte	.LASF626
 5454 0009 05       		.byte	0x5
 5455 000a 35       		.uleb128 0x35
 5456 000b 172F0000 		.4byte	.LASF627
 5457 000f 05       		.byte	0x5
 5458 0010 36       		.uleb128 0x36
 5459 0011 0E170000 		.4byte	.LASF628
 5460 0015 05       		.byte	0x5
 5461 0016 38       		.uleb128 0x38
 5462 0017 212B0000 		.4byte	.LASF629
 5463 001b 05       		.byte	0x5
 5464 001c 3C       		.uleb128 0x3c
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 107


 5465 001d 993C0000 		.4byte	.LASF630
 5466 0021 05       		.byte	0x5
 5467 0022 8401     		.uleb128 0x84
 5468 0024 6C590000 		.4byte	.LASF631
 5469 0028 00       		.byte	0
 5470              		.section	.debug_macro,"G",%progbits,wm4.string.h.8.ef946ad0bc9ad5c970c365dcd1fc4b0a,comdat
 5471              	.Ldebug_macro14:
 5472 0000 0400     		.2byte	0x4
 5473 0002 00       		.byte	0
 5474 0003 05       		.byte	0x5
 5475 0004 08       		.uleb128 0x8
 5476 0005 1E580000 		.4byte	.LASF632
 5477 0009 05       		.byte	0x5
 5478 000a 0D       		.uleb128 0xd
 5479 000b 48240000 		.4byte	.LASF510
 5480 000f 00       		.byte	0
 5481              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.235.d9f4f80b8c4429535175712282cda6a6,comdat
 5482              	.Ldebug_macro15:
 5483 0000 0400     		.2byte	0x4
 5484 0002 00       		.byte	0
 5485 0003 06       		.byte	0x6
 5486 0004 EB01     		.uleb128 0xeb
 5487 0006 1A3A0000 		.4byte	.LASF528
 5488 000a 06       		.byte	0x6
 5489 000b 9903     		.uleb128 0x199
 5490 000d 763B0000 		.4byte	.LASF546
 5491 0011 00       		.byte	0
 5492              		.section	.debug_macro,"G",%progbits,wm4.string.h.86.d5c872ff52e2712c985b588a0ef39f3c,comdat
 5493              	.Ldebug_macro16:
 5494 0000 0400     		.2byte	0x4
 5495 0002 00       		.byte	0
 5496 0003 05       		.byte	0x5
 5497 0004 56       		.uleb128 0x56
 5498 0005 A81E0000 		.4byte	.LASF633
 5499 0009 05       		.byte	0x5
 5500 000a 59       		.uleb128 0x59
 5501 000b ED3A0000 		.4byte	.LASF634
 5502 000f 05       		.byte	0x5
 5503 0010 5C       		.uleb128 0x5c
 5504 0011 44640000 		.4byte	.LASF635
 5505 0015 05       		.byte	0x5
 5506 0016 5F       		.uleb128 0x5f
 5507 0017 2A580000 		.4byte	.LASF636
 5508 001b 00       		.byte	0
 5509              		.section	.debug_macro,"G",%progbits,wm4.stdint.h.10.90b695f550ca6cc3fb08fa83baf01e05,comdat
 5510              	.Ldebug_macro17:
 5511 0000 0400     		.2byte	0x4
 5512 0002 00       		.byte	0
 5513 0003 05       		.byte	0x5
 5514 0004 0A       		.uleb128 0xa
 5515 0005 E1690000 		.4byte	.LASF637
 5516 0009 05       		.byte	0x5
 5517 000a 14       		.uleb128 0x14
 5518 000b F43D0000 		.4byte	.LASF638
 5519 000f 05       		.byte	0x5
 5520 0010 1E       		.uleb128 0x1e
 5521 0011 3F500000 		.4byte	.LASF639
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 108


 5522 0015 05       		.byte	0x5
 5523 0016 25       		.uleb128 0x25
 5524 0017 205E0000 		.4byte	.LASF640
 5525 001b 05       		.byte	0x5
 5526 001c 2B       		.uleb128 0x2b
 5527 001d 0B230000 		.4byte	.LASF641
 5528 0021 05       		.byte	0x5
 5529 0022 31       		.uleb128 0x31
 5530 0023 2E690000 		.4byte	.LASF642
 5531 0027 05       		.byte	0x5
 5532 0028 37       		.uleb128 0x37
 5533 0029 85370000 		.4byte	.LASF643
 5534 002d 05       		.byte	0x5
 5535 002e 45       		.uleb128 0x45
 5536 002f A2260000 		.4byte	.LASF644
 5537 0033 05       		.byte	0x5
 5538 0034 51       		.uleb128 0x51
 5539 0035 CA300000 		.4byte	.LASF645
 5540 0039 05       		.byte	0x5
 5541 003a 63       		.uleb128 0x63
 5542 003b 76190000 		.4byte	.LASF646
 5543 003f 05       		.byte	0x5
 5544 0040 79       		.uleb128 0x79
 5545 0041 A55E0000 		.4byte	.LASF647
 5546 0045 05       		.byte	0x5
 5547 0046 8301     		.uleb128 0x83
 5548 0048 9E2A0000 		.4byte	.LASF648
 5549 004c 05       		.byte	0x5
 5550 004d A101     		.uleb128 0xa1
 5551 004f 54430000 		.4byte	.LASF649
 5552 0053 05       		.byte	0x5
 5553 0054 A701     		.uleb128 0xa7
 5554 0056 173F0000 		.4byte	.LASF650
 5555 005a 05       		.byte	0x5
 5556 005b AD01     		.uleb128 0xad
 5557 005d BE0B0000 		.4byte	.LASF651
 5558 0061 05       		.byte	0x5
 5559 0062 D701     		.uleb128 0xd7
 5560 0064 B2380000 		.4byte	.LASF652
 5561 0068 05       		.byte	0x5
 5562 0069 F501     		.uleb128 0xf5
 5563 006b 2B660000 		.4byte	.LASF653
 5564 006f 05       		.byte	0x5
 5565 0070 F601     		.uleb128 0xf6
 5566 0072 821D0000 		.4byte	.LASF654
 5567 0076 05       		.byte	0x5
 5568 0077 F801     		.uleb128 0xf8
 5569 0079 18190000 		.4byte	.LASF655
 5570 007d 05       		.byte	0x5
 5571 007e 8B02     		.uleb128 0x10b
 5572 0080 C60A0000 		.4byte	.LASF656
 5573 0084 05       		.byte	0x5
 5574 0085 8C02     		.uleb128 0x10c
 5575 0087 73510000 		.4byte	.LASF657
 5576 008b 05       		.byte	0x5
 5577 008c 8D02     		.uleb128 0x10d
 5578 008e 160B0000 		.4byte	.LASF658
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 109


 5579 0092 05       		.byte	0x5
 5580 0093 9102     		.uleb128 0x111
 5581 0095 5E3D0000 		.4byte	.LASF659
 5582 0099 05       		.byte	0x5
 5583 009a 9202     		.uleb128 0x112
 5584 009c A24F0000 		.4byte	.LASF660
 5585 00a0 05       		.byte	0x5
 5586 00a1 9302     		.uleb128 0x113
 5587 00a3 1D630000 		.4byte	.LASF661
 5588 00a7 05       		.byte	0x5
 5589 00a8 9902     		.uleb128 0x119
 5590 00aa CF5F0000 		.4byte	.LASF662
 5591 00ae 05       		.byte	0x5
 5592 00af 9A02     		.uleb128 0x11a
 5593 00b1 82160000 		.4byte	.LASF663
 5594 00b5 05       		.byte	0x5
 5595 00b6 9B02     		.uleb128 0x11b
 5596 00b8 824B0000 		.4byte	.LASF664
 5597 00bc 05       		.byte	0x5
 5598 00bd 9F02     		.uleb128 0x11f
 5599 00bf 3C230000 		.4byte	.LASF665
 5600 00c3 05       		.byte	0x5
 5601 00c4 A002     		.uleb128 0x120
 5602 00c6 8B690000 		.4byte	.LASF666
 5603 00ca 05       		.byte	0x5
 5604 00cb A102     		.uleb128 0x121
 5605 00cd 5C4F0000 		.4byte	.LASF667
 5606 00d1 05       		.byte	0x5
 5607 00d2 A802     		.uleb128 0x128
 5608 00d4 8F3F0000 		.4byte	.LASF668
 5609 00d8 05       		.byte	0x5
 5610 00d9 A902     		.uleb128 0x129
 5611 00db 10470000 		.4byte	.LASF669
 5612 00df 05       		.byte	0x5
 5613 00e0 AA02     		.uleb128 0x12a
 5614 00e2 89300000 		.4byte	.LASF670
 5615 00e6 05       		.byte	0x5
 5616 00e7 B402     		.uleb128 0x134
 5617 00e9 E20F0000 		.4byte	.LASF671
 5618 00ed 05       		.byte	0x5
 5619 00ee B502     		.uleb128 0x135
 5620 00f0 3F760000 		.4byte	.LASF672
 5621 00f4 05       		.byte	0x5
 5622 00f5 B602     		.uleb128 0x136
 5623 00f7 34670000 		.4byte	.LASF673
 5624 00fb 05       		.byte	0x5
 5625 00fc C602     		.uleb128 0x146
 5626 00fe C0270000 		.4byte	.LASF674
 5627 0102 05       		.byte	0x5
 5628 0103 C702     		.uleb128 0x147
 5629 0105 62640000 		.4byte	.LASF675
 5630 0109 05       		.byte	0x5
 5631 010a C802     		.uleb128 0x148
 5632 010c D9150000 		.4byte	.LASF676
 5633 0110 05       		.byte	0x5
 5634 0111 D202     		.uleb128 0x152
 5635 0113 522D0000 		.4byte	.LASF677
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 110


 5636 0117 05       		.byte	0x5
 5637 0118 D302     		.uleb128 0x153
 5638 011a 003B0000 		.4byte	.LASF678
 5639 011e 05       		.byte	0x5
 5640 011f D402     		.uleb128 0x154
 5641 0121 3D090000 		.4byte	.LASF679
 5642 0125 05       		.byte	0x5
 5643 0126 DA02     		.uleb128 0x15a
 5644 0128 74020000 		.4byte	.LASF680
 5645 012c 05       		.byte	0x5
 5646 012d DB02     		.uleb128 0x15b
 5647 012f 555B0000 		.4byte	.LASF681
 5648 0133 05       		.byte	0x5
 5649 0134 DC02     		.uleb128 0x15c
 5650 0136 401A0000 		.4byte	.LASF682
 5651 013a 05       		.byte	0x5
 5652 013b E602     		.uleb128 0x166
 5653 013d 35560000 		.4byte	.LASF683
 5654 0141 05       		.byte	0x5
 5655 0142 E702     		.uleb128 0x167
 5656 0144 E01C0000 		.4byte	.LASF684
 5657 0148 05       		.byte	0x5
 5658 0149 E802     		.uleb128 0x168
 5659 014b 723D0000 		.4byte	.LASF685
 5660 014f 05       		.byte	0x5
 5661 0150 F202     		.uleb128 0x172
 5662 0152 C4110000 		.4byte	.LASF686
 5663 0156 05       		.byte	0x5
 5664 0157 F302     		.uleb128 0x173
 5665 0159 C9670000 		.4byte	.LASF687
 5666 015d 05       		.byte	0x5
 5667 015e F402     		.uleb128 0x174
 5668 0160 02460000 		.4byte	.LASF688
 5669 0164 05       		.byte	0x5
 5670 0165 8203     		.uleb128 0x182
 5671 0167 81380000 		.4byte	.LASF689
 5672 016b 05       		.byte	0x5
 5673 016c 8303     		.uleb128 0x183
 5674 016e 55460000 		.4byte	.LASF690
 5675 0172 05       		.byte	0x5
 5676 0173 8403     		.uleb128 0x184
 5677 0175 6F150000 		.4byte	.LASF691
 5678 0179 05       		.byte	0x5
 5679 017a 8903     		.uleb128 0x189
 5680 017c 623C0000 		.4byte	.LASF692
 5681 0180 05       		.byte	0x5
 5682 0181 8A03     		.uleb128 0x18a
 5683 0183 94170000 		.4byte	.LASF693
 5684 0187 05       		.byte	0x5
 5685 0188 9203     		.uleb128 0x192
 5686 018a C6280000 		.4byte	.LASF694
 5687 018e 05       		.byte	0x5
 5688 018f 9A03     		.uleb128 0x19a
 5689 0191 4A120000 		.4byte	.LASF695
 5690 0195 05       		.byte	0x5
 5691 0196 A003     		.uleb128 0x1a0
 5692 0198 75290000 		.4byte	.LASF696
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 111


 5693 019c 05       		.byte	0x5
 5694 019d A103     		.uleb128 0x1a1
 5695 019f 88450000 		.4byte	.LASF697
 5696 01a3 05       		.byte	0x5
 5697 01a4 A503     		.uleb128 0x1a5
 5698 01a6 77500000 		.4byte	.LASF698
 5699 01aa 05       		.byte	0x5
 5700 01ab A903     		.uleb128 0x1a9
 5701 01ad 87750000 		.4byte	.LASF699
 5702 01b1 05       		.byte	0x5
 5703 01b2 AC03     		.uleb128 0x1ac
 5704 01b4 EA100000 		.4byte	.LASF700
 5705 01b8 05       		.byte	0x5
 5706 01b9 AF03     		.uleb128 0x1af
 5707 01bb 69480000 		.4byte	.LASF701
 5708 01bf 05       		.byte	0x5
 5709 01c0 B403     		.uleb128 0x1b4
 5710 01c2 321F0000 		.4byte	.LASF702
 5711 01c6 05       		.byte	0x5
 5712 01c7 B903     		.uleb128 0x1b9
 5713 01c9 21030000 		.4byte	.LASF703
 5714 01cd 05       		.byte	0x5
 5715 01ce BF03     		.uleb128 0x1bf
 5716 01d0 A7190000 		.4byte	.LASF704
 5717 01d4 05       		.byte	0x5
 5718 01d5 C103     		.uleb128 0x1c1
 5719 01d7 5B070000 		.4byte	.LASF705
 5720 01db 05       		.byte	0x5
 5721 01dc C603     		.uleb128 0x1c6
 5722 01de 3C490000 		.4byte	.LASF706
 5723 01e2 05       		.byte	0x5
 5724 01e3 C803     		.uleb128 0x1c8
 5725 01e5 24540000 		.4byte	.LASF707
 5726 01e9 05       		.byte	0x5
 5727 01ea CE03     		.uleb128 0x1ce
 5728 01ec 263B0000 		.4byte	.LASF708
 5729 01f0 05       		.byte	0x5
 5730 01f1 CF03     		.uleb128 0x1cf
 5731 01f3 39400000 		.4byte	.LASF709
 5732 01f7 05       		.byte	0x5
 5733 01f8 DA03     		.uleb128 0x1da
 5734 01fa 021E0000 		.4byte	.LASF710
 5735 01fe 05       		.byte	0x5
 5736 01ff DB03     		.uleb128 0x1db
 5737 0201 E3290000 		.4byte	.LASF711
 5738 0205 05       		.byte	0x5
 5739 0206 E403     		.uleb128 0x1e4
 5740 0208 BF200000 		.4byte	.LASF712
 5741 020c 05       		.byte	0x5
 5742 020d E503     		.uleb128 0x1e5
 5743 020f 94240000 		.4byte	.LASF713
 5744 0213 00       		.byte	0
 5745              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.344.4bee28520e334d56befdb7f304761799,comdat
 5746              	.Ldebug_macro18:
 5747 0000 0400     		.2byte	0x4
 5748 0002 00       		.byte	0
 5749 0003 06       		.byte	0x6
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 112


 5750 0004 D802     		.uleb128 0x158
 5751 0006 00650000 		.4byte	.LASF545
 5752 000a 06       		.byte	0x6
 5753 000b 9903     		.uleb128 0x199
 5754 000d 763B0000 		.4byte	.LASF546
 5755 0011 00       		.byte	0
 5756              		.section	.debug_macro,"G",%progbits,wm4.inttypes.h.20.54b7c434bb63171d5145327a6d429f51,comdat
 5757              	.Ldebug_macro19:
 5758 0000 0400     		.2byte	0x4
 5759 0002 00       		.byte	0
 5760 0003 05       		.byte	0x5
 5761 0004 14       		.uleb128 0x14
 5762 0005 19440000 		.4byte	.LASF714
 5763 0009 05       		.byte	0x5
 5764 000a 17       		.uleb128 0x17
 5765 000b 32450000 		.4byte	.LASF715
 5766 000f 05       		.byte	0x5
 5767 0010 18       		.uleb128 0x18
 5768 0011 D0130000 		.4byte	.LASF716
 5769 0015 05       		.byte	0x5
 5770 0016 1B       		.uleb128 0x1b
 5771 0017 FD070000 		.4byte	.LASF717
 5772 001b 05       		.byte	0x5
 5773 001c 1C       		.uleb128 0x1c
 5774 001d 1C080000 		.4byte	.LASF718
 5775 0021 05       		.byte	0x5
 5776 0022 1D       		.uleb128 0x1d
 5777 0023 E43D0000 		.4byte	.LASF719
 5778 0027 05       		.byte	0x5
 5779 0028 1E       		.uleb128 0x1e
 5780 0029 3B4C0000 		.4byte	.LASF720
 5781 002d 05       		.byte	0x5
 5782 002e 1F       		.uleb128 0x1f
 5783 002f F3080000 		.4byte	.LASF721
 5784 0033 05       		.byte	0x5
 5785 0034 20       		.uleb128 0x20
 5786 0035 02110000 		.4byte	.LASF722
 5787 0039 05       		.byte	0x5
 5788 003a 22       		.uleb128 0x22
 5789 003b 68450000 		.4byte	.LASF723
 5790 003f 05       		.byte	0x5
 5791 0040 23       		.uleb128 0x23
 5792 0041 78450000 		.4byte	.LASF724
 5793 0045 05       		.byte	0x5
 5794 0046 24       		.uleb128 0x24
 5795 0047 98430000 		.4byte	.LASF725
 5796 004b 05       		.byte	0x5
 5797 004c 25       		.uleb128 0x25
 5798 004d BD3E0000 		.4byte	.LASF726
 5799 0051 05       		.byte	0x5
 5800 0052 26       		.uleb128 0x26
 5801 0053 F2450000 		.4byte	.LASF727
 5802 0057 05       		.byte	0x5
 5803 0058 29       		.uleb128 0x29
 5804 0059 A6750000 		.4byte	.LASF728
 5805 005d 05       		.byte	0x5
 5806 005e 2A       		.uleb128 0x2a
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 113


 5807 005f AC070000 		.4byte	.LASF729
 5808 0063 05       		.byte	0x5
 5809 0064 2B       		.uleb128 0x2b
 5810 0065 5B760000 		.4byte	.LASF730
 5811 0069 05       		.byte	0x5
 5812 006a 2C       		.uleb128 0x2c
 5813 006b BB1D0000 		.4byte	.LASF731
 5814 006f 05       		.byte	0x5
 5815 0070 2D       		.uleb128 0x2d
 5816 0071 92160000 		.4byte	.LASF732
 5817 0075 05       		.byte	0x5
 5818 0076 2E       		.uleb128 0x2e
 5819 0077 E1460000 		.4byte	.LASF733
 5820 007b 05       		.byte	0x5
 5821 007c 30       		.uleb128 0x30
 5822 007d 02690000 		.4byte	.LASF734
 5823 0081 05       		.byte	0x5
 5824 0082 31       		.uleb128 0x31
 5825 0083 8B620000 		.4byte	.LASF735
 5826 0087 05       		.byte	0x5
 5827 0088 32       		.uleb128 0x32
 5828 0089 A3100000 		.4byte	.LASF736
 5829 008d 05       		.byte	0x5
 5830 008e 33       		.uleb128 0x33
 5831 008f C1070000 		.4byte	.LASF737
 5832 0093 05       		.byte	0x5
 5833 0094 34       		.uleb128 0x34
 5834 0095 EF030000 		.4byte	.LASF738
 5835 0099 05       		.byte	0x5
 5836 009a 37       		.uleb128 0x37
 5837 009b D0560000 		.4byte	.LASF739
 5838 009f 05       		.byte	0x5
 5839 00a0 38       		.uleb128 0x38
 5840 00a1 EC3C0000 		.4byte	.LASF740
 5841 00a5 05       		.byte	0x5
 5842 00a6 39       		.uleb128 0x39
 5843 00a7 7E2E0000 		.4byte	.LASF741
 5844 00ab 05       		.byte	0x5
 5845 00ac 3A       		.uleb128 0x3a
 5846 00ad 07660000 		.4byte	.LASF742
 5847 00b1 05       		.byte	0x5
 5848 00b2 3B       		.uleb128 0x3b
 5849 00b3 42570000 		.4byte	.LASF743
 5850 00b7 05       		.byte	0x5
 5851 00b8 3C       		.uleb128 0x3c
 5852 00b9 572C0000 		.4byte	.LASF744
 5853 00bd 05       		.byte	0x5
 5854 00be 3E       		.uleb128 0x3e
 5855 00bf 941E0000 		.4byte	.LASF745
 5856 00c3 05       		.byte	0x5
 5857 00c4 3F       		.uleb128 0x3f
 5858 00c5 9D020000 		.4byte	.LASF746
 5859 00c9 05       		.byte	0x5
 5860 00ca 40       		.uleb128 0x40
 5861 00cb FB610000 		.4byte	.LASF747
 5862 00cf 05       		.byte	0x5
 5863 00d0 41       		.uleb128 0x41
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 114


 5864 00d1 30410000 		.4byte	.LASF748
 5865 00d5 05       		.byte	0x5
 5866 00d6 42       		.uleb128 0x42
 5867 00d7 E61E0000 		.4byte	.LASF749
 5868 00db 05       		.byte	0x5
 5869 00dc 45       		.uleb128 0x45
 5870 00dd 04300000 		.4byte	.LASF750
 5871 00e1 05       		.byte	0x5
 5872 00e2 46       		.uleb128 0x46
 5873 00e3 51150000 		.4byte	.LASF751
 5874 00e7 05       		.byte	0x5
 5875 00e8 49       		.uleb128 0x49
 5876 00e9 1A070000 		.4byte	.LASF752
 5877 00ed 05       		.byte	0x5
 5878 00ee 4A       		.uleb128 0x4a
 5879 00ef 32540000 		.4byte	.LASF753
 5880 00f3 05       		.byte	0x5
 5881 00f4 4B       		.uleb128 0x4b
 5882 00f5 D41E0000 		.4byte	.LASF754
 5883 00f9 05       		.byte	0x5
 5884 00fa 4C       		.uleb128 0x4c
 5885 00fb 7E5A0000 		.4byte	.LASF755
 5886 00ff 05       		.byte	0x5
 5887 0100 4D       		.uleb128 0x4d
 5888 0101 11600000 		.4byte	.LASF756
 5889 0105 05       		.byte	0x5
 5890 0106 4E       		.uleb128 0x4e
 5891 0107 752A0000 		.4byte	.LASF757
 5892 010b 05       		.byte	0x5
 5893 010c 50       		.uleb128 0x50
 5894 010d 81120000 		.4byte	.LASF758
 5895 0111 05       		.byte	0x5
 5896 0112 51       		.uleb128 0x51
 5897 0113 5E5F0000 		.4byte	.LASF759
 5898 0117 05       		.byte	0x5
 5899 0118 52       		.uleb128 0x52
 5900 0119 27290000 		.4byte	.LASF760
 5901 011d 05       		.byte	0x5
 5902 011e 53       		.uleb128 0x53
 5903 011f 5A600000 		.4byte	.LASF761
 5904 0123 05       		.byte	0x5
 5905 0124 54       		.uleb128 0x54
 5906 0125 B6690000 		.4byte	.LASF762
 5907 0129 05       		.byte	0x5
 5908 012a 57       		.uleb128 0x57
 5909 012b C1250000 		.4byte	.LASF763
 5910 012f 05       		.byte	0x5
 5911 0130 58       		.uleb128 0x58
 5912 0131 15520000 		.4byte	.LASF764
 5913 0135 05       		.byte	0x5
 5914 0136 59       		.uleb128 0x59
 5915 0137 835D0000 		.4byte	.LASF765
 5916 013b 05       		.byte	0x5
 5917 013c 5A       		.uleb128 0x5a
 5918 013d 3F210000 		.4byte	.LASF766
 5919 0141 05       		.byte	0x5
 5920 0142 5B       		.uleb128 0x5b
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 115


 5921 0143 29150000 		.4byte	.LASF767
 5922 0147 05       		.byte	0x5
 5923 0148 5C       		.uleb128 0x5c
 5924 0149 72070000 		.4byte	.LASF768
 5925 014d 05       		.byte	0x5
 5926 014e 5E       		.uleb128 0x5e
 5927 014f E0200000 		.4byte	.LASF769
 5928 0153 05       		.byte	0x5
 5929 0154 5F       		.uleb128 0x5f
 5930 0155 554A0000 		.4byte	.LASF770
 5931 0159 05       		.byte	0x5
 5932 015a 60       		.uleb128 0x60
 5933 015b 375D0000 		.4byte	.LASF771
 5934 015f 05       		.byte	0x5
 5935 0160 61       		.uleb128 0x61
 5936 0161 E7540000 		.4byte	.LASF772
 5937 0165 05       		.byte	0x5
 5938 0166 62       		.uleb128 0x62
 5939 0167 5F2F0000 		.4byte	.LASF773
 5940 016b 05       		.byte	0x5
 5941 016c 65       		.uleb128 0x65
 5942 016d 000B0000 		.4byte	.LASF774
 5943 0171 05       		.byte	0x5
 5944 0172 66       		.uleb128 0x66
 5945 0173 D0600000 		.4byte	.LASF775
 5946 0177 05       		.byte	0x5
 5947 0178 67       		.uleb128 0x67
 5948 0179 0E0F0000 		.4byte	.LASF776
 5949 017d 05       		.byte	0x5
 5950 017e 68       		.uleb128 0x68
 5951 017f 8F5E0000 		.4byte	.LASF777
 5952 0183 05       		.byte	0x5
 5953 0184 69       		.uleb128 0x69
 5954 0185 CC610000 		.4byte	.LASF778
 5955 0189 05       		.byte	0x5
 5956 018a 6A       		.uleb128 0x6a
 5957 018b E41A0000 		.4byte	.LASF779
 5958 018f 05       		.byte	0x5
 5959 0190 6C       		.uleb128 0x6c
 5960 0191 D4580000 		.4byte	.LASF780
 5961 0195 05       		.byte	0x5
 5962 0196 6D       		.uleb128 0x6d
 5963 0197 E96A0000 		.4byte	.LASF781
 5964 019b 05       		.byte	0x5
 5965 019c 6E       		.uleb128 0x6e
 5966 019d D8420000 		.4byte	.LASF782
 5967 01a1 05       		.byte	0x5
 5968 01a2 6F       		.uleb128 0x6f
 5969 01a3 71240000 		.4byte	.LASF783
 5970 01a7 05       		.byte	0x5
 5971 01a8 70       		.uleb128 0x70
 5972 01a9 73300000 		.4byte	.LASF784
 5973 01ad 05       		.byte	0x5
 5974 01ae 74       		.uleb128 0x74
 5975 01af 572A0000 		.4byte	.LASF785
 5976 01b3 05       		.byte	0x5
 5977 01b4 75       		.uleb128 0x75
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 116


 5978 01b5 A3460000 		.4byte	.LASF786
 5979 01b9 05       		.byte	0x5
 5980 01ba 7B       		.uleb128 0x7b
 5981 01bb CB380000 		.4byte	.LASF787
 5982 01bf 05       		.byte	0x5
 5983 01c0 7C       		.uleb128 0x7c
 5984 01c1 32160000 		.4byte	.LASF788
 5985 01c5 05       		.byte	0x5
 5986 01c6 7D       		.uleb128 0x7d
 5987 01c7 A0380000 		.4byte	.LASF789
 5988 01cb 05       		.byte	0x5
 5989 01cc 7E       		.uleb128 0x7e
 5990 01cd 56410000 		.4byte	.LASF790
 5991 01d1 05       		.byte	0x5
 5992 01d2 7F       		.uleb128 0x7f
 5993 01d3 56210000 		.4byte	.LASF791
 5994 01d7 05       		.byte	0x5
 5995 01d8 8001     		.uleb128 0x80
 5996 01da AD370000 		.4byte	.LASF792
 5997 01de 05       		.byte	0x5
 5998 01df 8201     		.uleb128 0x82
 5999 01e1 44410000 		.4byte	.LASF793
 6000 01e5 05       		.byte	0x5
 6001 01e6 8301     		.uleb128 0x83
 6002 01e8 53340000 		.4byte	.LASF794
 6003 01ec 05       		.byte	0x5
 6004 01ed 8401     		.uleb128 0x84
 6005 01ef C7310000 		.4byte	.LASF795
 6006 01f3 05       		.byte	0x5
 6007 01f4 8501     		.uleb128 0x85
 6008 01f6 D76A0000 		.4byte	.LASF796
 6009 01fa 05       		.byte	0x5
 6010 01fb 8601     		.uleb128 0x86
 6011 01fd 352B0000 		.4byte	.LASF797
 6012 0201 05       		.byte	0x5
 6013 0202 8901     		.uleb128 0x89
 6014 0204 5F190000 		.4byte	.LASF798
 6015 0208 05       		.byte	0x5
 6016 0209 8A01     		.uleb128 0x8a
 6017 020b 702B0000 		.4byte	.LASF799
 6018 020f 05       		.byte	0x5
 6019 0210 8B01     		.uleb128 0x8b
 6020 0212 AF280000 		.4byte	.LASF800
 6021 0216 05       		.byte	0x5
 6022 0217 8C01     		.uleb128 0x8c
 6023 0219 122C0000 		.4byte	.LASF801
 6024 021d 05       		.byte	0x5
 6025 021e 8D01     		.uleb128 0x8d
 6026 0220 FE370000 		.4byte	.LASF802
 6027 0224 05       		.byte	0x5
 6028 0225 8E01     		.uleb128 0x8e
 6029 0227 E65C0000 		.4byte	.LASF803
 6030 022b 05       		.byte	0x5
 6031 022c 9001     		.uleb128 0x90
 6032 022e 790F0000 		.4byte	.LASF804
 6033 0232 05       		.byte	0x5
 6034 0233 9101     		.uleb128 0x91
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 117


 6035 0235 26260000 		.4byte	.LASF805
 6036 0239 05       		.byte	0x5
 6037 023a 9201     		.uleb128 0x92
 6038 023c 2B1E0000 		.4byte	.LASF806
 6039 0240 05       		.byte	0x5
 6040 0241 9301     		.uleb128 0x93
 6041 0243 D3640000 		.4byte	.LASF807
 6042 0247 05       		.byte	0x5
 6043 0248 9401     		.uleb128 0x94
 6044 024a 4E5D0000 		.4byte	.LASF808
 6045 024e 05       		.byte	0x5
 6046 024f 9701     		.uleb128 0x97
 6047 0251 A80E0000 		.4byte	.LASF809
 6048 0255 05       		.byte	0x5
 6049 0256 9801     		.uleb128 0x98
 6050 0258 F2210000 		.4byte	.LASF810
 6051 025c 05       		.byte	0x5
 6052 025d 9901     		.uleb128 0x99
 6053 025f A80B0000 		.4byte	.LASF811
 6054 0263 05       		.byte	0x5
 6055 0264 9A01     		.uleb128 0x9a
 6056 0266 82640000 		.4byte	.LASF812
 6057 026a 05       		.byte	0x5
 6058 026b 9B01     		.uleb128 0x9b
 6059 026d 21370000 		.4byte	.LASF813
 6060 0271 05       		.byte	0x5
 6061 0272 9C01     		.uleb128 0x9c
 6062 0274 283C0000 		.4byte	.LASF814
 6063 0278 05       		.byte	0x5
 6064 0279 9E01     		.uleb128 0x9e
 6065 027b 141A0000 		.4byte	.LASF815
 6066 027f 05       		.byte	0x5
 6067 0280 9F01     		.uleb128 0x9f
 6068 0282 6B2C0000 		.4byte	.LASF816
 6069 0286 05       		.byte	0x5
 6070 0287 A001     		.uleb128 0xa0
 6071 0289 1B5F0000 		.4byte	.LASF817
 6072 028d 05       		.byte	0x5
 6073 028e A101     		.uleb128 0xa1
 6074 0290 21110000 		.4byte	.LASF818
 6075 0294 05       		.byte	0x5
 6076 0295 A201     		.uleb128 0xa2
 6077 0297 6C160000 		.4byte	.LASF819
 6078 029b 05       		.byte	0x5
 6079 029c AA01     		.uleb128 0xaa
 6080 029e 166A0000 		.4byte	.LASF820
 6081 02a2 05       		.byte	0x5
 6082 02a3 AB01     		.uleb128 0xab
 6083 02a5 C3010000 		.4byte	.LASF821
 6084 02a9 05       		.byte	0x5
 6085 02aa B101     		.uleb128 0xb1
 6086 02ac 97110000 		.4byte	.LASF822
 6087 02b0 05       		.byte	0x5
 6088 02b1 B201     		.uleb128 0xb2
 6089 02b3 7D5E0000 		.4byte	.LASF823
 6090 02b7 05       		.byte	0x5
 6091 02b8 B301     		.uleb128 0xb3
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 118


 6092 02ba 9D280000 		.4byte	.LASF824
 6093 02be 05       		.byte	0x5
 6094 02bf B401     		.uleb128 0xb4
 6095 02c1 BD5F0000 		.4byte	.LASF825
 6096 02c5 05       		.byte	0x5
 6097 02c6 B501     		.uleb128 0xb5
 6098 02c8 4E6A0000 		.4byte	.LASF826
 6099 02cc 05       		.byte	0x5
 6100 02cd B601     		.uleb128 0xb6
 6101 02cf 41340000 		.4byte	.LASF827
 6102 02d3 05       		.byte	0x5
 6103 02d4 B801     		.uleb128 0xb8
 6104 02d6 441C0000 		.4byte	.LASF828
 6105 02da 05       		.byte	0x5
 6106 02db B901     		.uleb128 0xb9
 6107 02dd DA3C0000 		.4byte	.LASF829
 6108 02e1 05       		.byte	0x5
 6109 02e2 BA01     		.uleb128 0xba
 6110 02e4 B64B0000 		.4byte	.LASF830
 6111 02e8 05       		.byte	0x5
 6112 02e9 BB01     		.uleb128 0xbb
 6113 02eb 47690000 		.4byte	.LASF831
 6114 02ef 05       		.byte	0x5
 6115 02f0 BC01     		.uleb128 0xbc
 6116 02f2 03050000 		.4byte	.LASF832
 6117 02f6 05       		.byte	0x5
 6118 02f7 BF01     		.uleb128 0xbf
 6119 02f9 232A0000 		.4byte	.LASF833
 6120 02fd 05       		.byte	0x5
 6121 02fe C001     		.uleb128 0xc0
 6122 0300 6C140000 		.4byte	.LASF834
 6123 0304 05       		.byte	0x5
 6124 0305 C101     		.uleb128 0xc1
 6125 0307 33320000 		.4byte	.LASF835
 6126 030b 05       		.byte	0x5
 6127 030c C201     		.uleb128 0xc2
 6128 030e 872A0000 		.4byte	.LASF836
 6129 0312 05       		.byte	0x5
 6130 0313 C301     		.uleb128 0xc3
 6131 0315 88270000 		.4byte	.LASF837
 6132 0319 05       		.byte	0x5
 6133 031a C401     		.uleb128 0xc4
 6134 031c 402C0000 		.4byte	.LASF838
 6135 0320 05       		.byte	0x5
 6136 0321 C601     		.uleb128 0xc6
 6137 0323 F7290000 		.4byte	.LASF839
 6138 0327 05       		.byte	0x5
 6139 0328 C701     		.uleb128 0xc7
 6140 032a 6E370000 		.4byte	.LASF840
 6141 032e 05       		.byte	0x5
 6142 032f C801     		.uleb128 0xc8
 6143 0331 42660000 		.4byte	.LASF841
 6144 0335 05       		.byte	0x5
 6145 0336 C901     		.uleb128 0xc9
 6146 0338 895F0000 		.4byte	.LASF842
 6147 033c 05       		.byte	0x5
 6148 033d CA01     		.uleb128 0xca
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 119


 6149 033f 895B0000 		.4byte	.LASF843
 6150 0343 05       		.byte	0x5
 6151 0344 CD01     		.uleb128 0xcd
 6152 0346 800D0000 		.4byte	.LASF844
 6153 034a 05       		.byte	0x5
 6154 034b CE01     		.uleb128 0xce
 6155 034d 85200000 		.4byte	.LASF845
 6156 0351 05       		.byte	0x5
 6157 0352 CF01     		.uleb128 0xcf
 6158 0354 0D0A0000 		.4byte	.LASF846
 6159 0358 05       		.byte	0x5
 6160 0359 D001     		.uleb128 0xd0
 6161 035b 07630000 		.4byte	.LASF847
 6162 035f 05       		.byte	0x5
 6163 0360 D101     		.uleb128 0xd1
 6164 0362 03100000 		.4byte	.LASF848
 6165 0366 05       		.byte	0x5
 6166 0367 D201     		.uleb128 0xd2
 6167 0369 3E5A0000 		.4byte	.LASF849
 6168 036d 05       		.byte	0x5
 6169 036e D401     		.uleb128 0xd4
 6170 0370 72270000 		.4byte	.LASF850
 6171 0374 05       		.byte	0x5
 6172 0375 D501     		.uleb128 0xd5
 6173 0377 C5060000 		.4byte	.LASF851
 6174 037b 05       		.byte	0x5
 6175 037c D601     		.uleb128 0xd6
 6176 037e 3A600000 		.4byte	.LASF852
 6177 0382 05       		.byte	0x5
 6178 0383 D701     		.uleb128 0xd7
 6179 0385 234B0000 		.4byte	.LASF853
 6180 0389 05       		.byte	0x5
 6181 038a D801     		.uleb128 0xd8
 6182 038c 991D0000 		.4byte	.LASF854
 6183 0390 05       		.byte	0x5
 6184 0391 E001     		.uleb128 0xe0
 6185 0393 F2250000 		.4byte	.LASF855
 6186 0397 05       		.byte	0x5
 6187 0398 E101     		.uleb128 0xe1
 6188 039a 58540000 		.4byte	.LASF856
 6189 039e 05       		.byte	0x5
 6190 039f E701     		.uleb128 0xe7
 6191 03a1 E6600000 		.4byte	.LASF857
 6192 03a5 05       		.byte	0x5
 6193 03a6 E801     		.uleb128 0xe8
 6194 03a8 561C0000 		.4byte	.LASF858
 6195 03ac 05       		.byte	0x5
 6196 03ad E901     		.uleb128 0xe9
 6197 03af A7160000 		.4byte	.LASF859
 6198 03b3 05       		.byte	0x5
 6199 03b4 EA01     		.uleb128 0xea
 6200 03b6 0A0D0000 		.4byte	.LASF860
 6201 03ba 05       		.byte	0x5
 6202 03bb EB01     		.uleb128 0xeb
 6203 03bd 73660000 		.4byte	.LASF861
 6204 03c1 05       		.byte	0x5
 6205 03c2 EC01     		.uleb128 0xec
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 120


 6206 03c4 E82D0000 		.4byte	.LASF862
 6207 03c8 05       		.byte	0x5
 6208 03c9 EE01     		.uleb128 0xee
 6209 03cb AB570000 		.4byte	.LASF863
 6210 03cf 05       		.byte	0x5
 6211 03d0 EF01     		.uleb128 0xef
 6212 03d2 734F0000 		.4byte	.LASF864
 6213 03d6 05       		.byte	0x5
 6214 03d7 F001     		.uleb128 0xf0
 6215 03d9 CF290000 		.4byte	.LASF865
 6216 03dd 05       		.byte	0x5
 6217 03de F101     		.uleb128 0xf1
 6218 03e0 125B0000 		.4byte	.LASF866
 6219 03e4 05       		.byte	0x5
 6220 03e5 F201     		.uleb128 0xf2
 6221 03e7 0C210000 		.4byte	.LASF867
 6222 03eb 05       		.byte	0x5
 6223 03ec F901     		.uleb128 0xf9
 6224 03ee 29620000 		.4byte	.LASF868
 6225 03f2 05       		.byte	0x5
 6226 03f3 FA01     		.uleb128 0xfa
 6227 03f5 240B0000 		.4byte	.LASF869
 6228 03f9 05       		.byte	0x5
 6229 03fa 8002     		.uleb128 0x100
 6230 03fc 90470000 		.4byte	.LASF870
 6231 0400 05       		.byte	0x5
 6232 0401 8102     		.uleb128 0x101
 6233 0403 09020000 		.4byte	.LASF871
 6234 0407 05       		.byte	0x5
 6235 0408 8202     		.uleb128 0x102
 6236 040a 14500000 		.4byte	.LASF872
 6237 040e 05       		.byte	0x5
 6238 040f 8302     		.uleb128 0x103
 6239 0411 812F0000 		.4byte	.LASF873
 6240 0415 05       		.byte	0x5
 6241 0416 8402     		.uleb128 0x104
 6242 0418 310C0000 		.4byte	.LASF874
 6243 041c 05       		.byte	0x5
 6244 041d 8502     		.uleb128 0x105
 6245 041f EA1B0000 		.4byte	.LASF875
 6246 0423 05       		.byte	0x5
 6247 0424 8702     		.uleb128 0x107
 6248 0426 A03D0000 		.4byte	.LASF876
 6249 042a 05       		.byte	0x5
 6250 042b 8802     		.uleb128 0x108
 6251 042d B43D0000 		.4byte	.LASF877
 6252 0431 05       		.byte	0x5
 6253 0432 8902     		.uleb128 0x109
 6254 0434 C64F0000 		.4byte	.LASF878
 6255 0438 05       		.byte	0x5
 6256 0439 8A02     		.uleb128 0x10a
 6257 043b B7090000 		.4byte	.LASF879
 6258 043f 05       		.byte	0x5
 6259 0440 8B02     		.uleb128 0x10b
 6260 0442 0A0C0000 		.4byte	.LASF880
 6261 0446 00       		.byte	0
 6262              		.section	.debug_macro,"G",%progbits,wm4.stdio.h.27.f2ac352bab34f31f9f478442827b2ba6,comdat
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 121


 6263              	.Ldebug_macro20:
 6264 0000 0400     		.2byte	0x4
 6265 0002 00       		.byte	0
 6266 0003 05       		.byte	0x5
 6267 0004 1B       		.uleb128 0x1b
 6268 0005 891E0000 		.4byte	.LASF881
 6269 0009 05       		.byte	0x5
 6270 000a 1F       		.uleb128 0x1f
 6271 000b 89530000 		.4byte	.LASF882
 6272 000f 05       		.byte	0x5
 6273 0010 21       		.uleb128 0x21
 6274 0011 48240000 		.4byte	.LASF510
 6275 0015 00       		.byte	0
 6276              		.section	.debug_macro,"G",%progbits,wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6,comdat
 6277              	.Ldebug_macro21:
 6278 0000 0400     		.2byte	0x4
 6279 0002 00       		.byte	0
 6280 0003 06       		.byte	0x6
 6281 0004 22       		.uleb128 0x22
 6282 0005 3D390000 		.4byte	.LASF883
 6283 0009 05       		.byte	0x5
 6284 000a 27       		.uleb128 0x27
 6285 000b 71280000 		.4byte	.LASF884
 6286 000f 00       		.byte	0
 6287              		.section	.debug_macro,"G",%progbits,wm4.types.h.23.0d949686bbcadd1621462d4fa1f884f9,comdat
 6288              	.Ldebug_macro22:
 6289 0000 0400     		.2byte	0x4
 6290 0002 00       		.byte	0
 6291 0003 05       		.byte	0x5
 6292 0004 17       		.uleb128 0x17
 6293 0005 8E140000 		.4byte	.LASF885
 6294 0009 05       		.byte	0x5
 6295 000a 3C       		.uleb128 0x3c
 6296 000b E1240000 		.4byte	.LASF886
 6297 000f 00       		.byte	0
 6298              		.section	.debug_macro,"G",%progbits,wm4.stddef.h.40.087efe82bda91542a59914ae13ce2e85,comdat
 6299              	.Ldebug_macro23:
 6300 0000 0400     		.2byte	0x4
 6301 0002 00       		.byte	0
 6302 0003 05       		.byte	0x5
 6303 0004 28       		.uleb128 0x28
 6304 0005 DD370000 		.4byte	.LASF887
 6305 0009 05       		.byte	0x5
 6306 000a 29       		.uleb128 0x29
 6307 000b F8690000 		.4byte	.LASF888
 6308 000f 05       		.byte	0x5
 6309 0010 2B       		.uleb128 0x2b
 6310 0011 6E2E0000 		.4byte	.LASF889
 6311 0015 05       		.byte	0x5
 6312 0016 2D       		.uleb128 0x2d
 6313 0017 C9520000 		.4byte	.LASF890
 6314 001b 05       		.byte	0x5
 6315 001c 8B01     		.uleb128 0x8b
 6316 001e C73B0000 		.4byte	.LASF891
 6317 0022 05       		.byte	0x5
 6318 0023 8C01     		.uleb128 0x8c
 6319 0025 14370000 		.4byte	.LASF892
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 122


 6320 0029 05       		.byte	0x5
 6321 002a 8D01     		.uleb128 0x8d
 6322 002c 09420000 		.4byte	.LASF893
 6323 0030 05       		.byte	0x5
 6324 0031 8E01     		.uleb128 0x8e
 6325 0033 6F4D0000 		.4byte	.LASF894
 6326 0037 05       		.byte	0x5
 6327 0038 8F01     		.uleb128 0x8f
 6328 003a 6A570000 		.4byte	.LASF895
 6329 003e 05       		.byte	0x5
 6330 003f 9001     		.uleb128 0x90
 6331 0041 0E6B0000 		.4byte	.LASF896
 6332 0045 05       		.byte	0x5
 6333 0046 9101     		.uleb128 0x91
 6334 0048 D7520000 		.4byte	.LASF897
 6335 004c 05       		.byte	0x5
 6336 004d 9201     		.uleb128 0x92
 6337 004f 71470000 		.4byte	.LASF898
 6338 0053 06       		.byte	0x6
 6339 0054 A101     		.uleb128 0xa1
 6340 0056 F85D0000 		.4byte	.LASF899
 6341 005a 06       		.byte	0x6
 6342 005b EB01     		.uleb128 0xeb
 6343 005d 1A3A0000 		.4byte	.LASF528
 6344 0061 06       		.byte	0x6
 6345 0062 D802     		.uleb128 0x158
 6346 0064 00650000 		.4byte	.LASF545
 6347 0068 06       		.byte	0x6
 6348 0069 8E03     		.uleb128 0x18e
 6349 006b 740E0000 		.4byte	.LASF900
 6350 006f 05       		.byte	0x5
 6351 0070 9003     		.uleb128 0x190
 6352 0072 0E070000 		.4byte	.LASF901
 6353 0076 06       		.byte	0x6
 6354 0077 9903     		.uleb128 0x199
 6355 0079 763B0000 		.4byte	.LASF546
 6356 007d 05       		.byte	0x5
 6357 007e 9E03     		.uleb128 0x19e
 6358 0080 7D320000 		.4byte	.LASF902
 6359 0084 00       		.byte	0
 6360              		.section	.debug_macro,"G",%progbits,wm4.types.h.2.e9cec8c90ab35f77d9f499e06ae02400,comdat
 6361              	.Ldebug_macro24:
 6362 0000 0400     		.2byte	0x4
 6363 0002 00       		.byte	0
 6364 0003 05       		.byte	0x5
 6365 0004 02       		.uleb128 0x2
 6366 0005 47280000 		.4byte	.LASF903
 6367 0009 05       		.byte	0x5
 6368 000a 0D       		.uleb128 0xd
 6369 000b BB160000 		.4byte	.LASF904
 6370 000f 05       		.byte	0x5
 6371 0010 0E       		.uleb128 0xe
 6372 0011 64420000 		.4byte	.LASF905
 6373 0015 05       		.byte	0x5
 6374 0016 0F       		.uleb128 0xf
 6375 0017 2A530000 		.4byte	.LASF906
 6376 001b 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 123


 6377 001c 10       		.uleb128 0x10
 6378 001d AF310000 		.4byte	.LASF907
 6379 0021 00       		.byte	0
 6380              		.section	.debug_macro,"G",%progbits,wm4.types.h.80.1f2c84c0d57dd52dd9936095d9ac218e,comdat
 6381              	.Ldebug_macro25:
 6382 0000 0400     		.2byte	0x4
 6383 0002 00       		.byte	0
 6384 0003 05       		.byte	0x5
 6385 0004 50       		.uleb128 0x50
 6386 0005 05310000 		.4byte	.LASF908
 6387 0009 05       		.byte	0x5
 6388 000a 57       		.uleb128 0x57
 6389 000b 86400000 		.4byte	.LASF909
 6390 000f 05       		.byte	0x5
 6391 0010 58       		.uleb128 0x58
 6392 0011 AF1D0000 		.4byte	.LASF910
 6393 0015 05       		.byte	0x5
 6394 0016 60       		.uleb128 0x60
 6395 0017 81630000 		.4byte	.LASF911
 6396 001b 05       		.byte	0x5
 6397 001c 69       		.uleb128 0x69
 6398 001d 2B440000 		.4byte	.LASF912
 6399 0021 05       		.byte	0x5
 6400 0022 6E       		.uleb128 0x6e
 6401 0023 0A480000 		.4byte	.LASF913
 6402 0027 05       		.byte	0x5
 6403 0028 D201     		.uleb128 0xd2
 6404 002a C6660000 		.4byte	.LASF914
 6405 002e 05       		.byte	0x5
 6406 002f D301     		.uleb128 0xd3
 6407 0031 24420000 		.4byte	.LASF915
 6408 0035 05       		.byte	0x5
 6409 0036 DB01     		.uleb128 0xdb
 6410 0038 E1030000 		.4byte	.LASF916
 6411 003c 05       		.byte	0x5
 6412 003d DF01     		.uleb128 0xdf
 6413 003f FD5C0000 		.4byte	.LASF917
 6414 0043 05       		.byte	0x5
 6415 0044 E101     		.uleb128 0xe1
 6416 0046 A8510000 		.4byte	.LASF918
 6417 004a 05       		.byte	0x5
 6418 004b EA01     		.uleb128 0xea
 6419 004d 0F650000 		.4byte	.LASF919
 6420 0051 05       		.byte	0x5
 6421 0052 EC01     		.uleb128 0xec
 6422 0054 D9230000 		.4byte	.LASF920
 6423 0058 05       		.byte	0x5
 6424 0059 ED01     		.uleb128 0xed
 6425 005b B05B0000 		.4byte	.LASF921
 6426 005f 05       		.byte	0x5
 6427 0060 EE01     		.uleb128 0xee
 6428 0062 C5630000 		.4byte	.LASF922
 6429 0066 05       		.byte	0x5
 6430 0067 EF01     		.uleb128 0xef
 6431 0069 87590000 		.4byte	.LASF923
 6432 006d 06       		.byte	0x6
 6433 006e F801     		.uleb128 0xf8
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 124


 6434 0070 0B5A0000 		.4byte	.LASF924
 6435 0074 06       		.byte	0x6
 6436 0075 F901     		.uleb128 0xf9
 6437 0077 F1750000 		.4byte	.LASF925
 6438 007b 05       		.byte	0x5
 6439 007c FE01     		.uleb128 0xfe
 6440 007e 246C0000 		.4byte	.LASF926
 6441 0082 05       		.byte	0x5
 6442 0083 8302     		.uleb128 0x103
 6443 0085 90460000 		.4byte	.LASF927
 6444 0089 06       		.byte	0x6
 6445 008a E503     		.uleb128 0x1e5
 6446 008c 80510000 		.4byte	.LASF928
 6447 0090 00       		.byte	0
 6448              		.section	.debug_macro,"G",%progbits,wm4.stdio.h.2.4aa87247282eca6c8f36f9de33d8df1a,comdat
 6449              	.Ldebug_macro26:
 6450 0000 0400     		.2byte	0x4
 6451 0002 00       		.byte	0
 6452 0003 05       		.byte	0x5
 6453 0004 02       		.uleb128 0x2
 6454 0005 C3580000 		.4byte	.LASF929
 6455 0009 05       		.byte	0x5
 6456 000a 0D       		.uleb128 0xd
 6457 000b 606A0000 		.4byte	.LASF930
 6458 000f 05       		.byte	0x5
 6459 0010 15       		.uleb128 0x15
 6460 0011 C0480000 		.4byte	.LASF931
 6461 0015 00       		.byte	0
 6462              		.section	.debug_macro,"G",%progbits,wm4.stdio.h.63.dfdea6580b080784d08faace69b6ed76,comdat
 6463              	.Ldebug_macro27:
 6464 0000 0400     		.2byte	0x4
 6465 0002 00       		.byte	0
 6466 0003 05       		.byte	0x5
 6467 0004 3F       		.uleb128 0x3f
 6468 0005 D70B0000 		.4byte	.LASF932
 6469 0009 05       		.byte	0x5
 6470 000a 40       		.uleb128 0x40
 6471 000b 394B0000 		.4byte	.LASF933
 6472 000f 05       		.byte	0x5
 6473 0010 41       		.uleb128 0x41
 6474 0011 0F0E0000 		.4byte	.LASF934
 6475 0015 05       		.byte	0x5
 6476 0016 42       		.uleb128 0x42
 6477 0017 87240000 		.4byte	.LASF935
 6478 001b 05       		.byte	0x5
 6479 001c 44       		.uleb128 0x44
 6480 001d 36250000 		.4byte	.LASF936
 6481 0021 05       		.byte	0x5
 6482 0022 45       		.uleb128 0x45
 6483 0023 483F0000 		.4byte	.LASF937
 6484 0027 05       		.byte	0x5
 6485 0028 46       		.uleb128 0x46
 6486 0029 6A1C0000 		.4byte	.LASF938
 6487 002d 05       		.byte	0x5
 6488 002e 47       		.uleb128 0x47
 6489 002f 960D0000 		.4byte	.LASF939
 6490 0033 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 125


 6491 0034 48       		.uleb128 0x48
 6492 0035 8C250000 		.4byte	.LASF940
 6493 0039 05       		.byte	0x5
 6494 003a 49       		.uleb128 0x49
 6495 003b 720D0000 		.4byte	.LASF941
 6496 003f 05       		.byte	0x5
 6497 0040 4A       		.uleb128 0x4a
 6498 0041 C5680000 		.4byte	.LASF942
 6499 0045 05       		.byte	0x5
 6500 0046 4B       		.uleb128 0x4b
 6501 0047 94260000 		.4byte	.LASF943
 6502 004b 05       		.byte	0x5
 6503 004c 4C       		.uleb128 0x4c
 6504 004d 0D200000 		.4byte	.LASF944
 6505 0051 05       		.byte	0x5
 6506 0052 4D       		.uleb128 0x4d
 6507 0053 164D0000 		.4byte	.LASF945
 6508 0057 05       		.byte	0x5
 6509 0058 51       		.uleb128 0x51
 6510 0059 BC230000 		.4byte	.LASF946
 6511 005d 05       		.byte	0x5
 6512 005e 54       		.uleb128 0x54
 6513 005f C2620000 		.4byte	.LASF947
 6514 0063 05       		.byte	0x5
 6515 0064 5F       		.uleb128 0x5f
 6516 0065 00000000 		.4byte	.LASF948
 6517 0069 05       		.byte	0x5
 6518 006a 60       		.uleb128 0x60
 6519 006b FC470000 		.4byte	.LASF949
 6520 006f 05       		.byte	0x5
 6521 0070 61       		.uleb128 0x61
 6522 0071 403D0000 		.4byte	.LASF950
 6523 0075 05       		.byte	0x5
 6524 0076 67       		.uleb128 0x67
 6525 0077 CD3E0000 		.4byte	.LASF951
 6526 007b 05       		.byte	0x5
 6527 007c 6C       		.uleb128 0x6c
 6528 007d 64200000 		.4byte	.LASF952
 6529 0081 05       		.byte	0x5
 6530 0082 72       		.uleb128 0x72
 6531 0083 2D170000 		.4byte	.LASF953
 6532 0087 05       		.byte	0x5
 6533 0088 78       		.uleb128 0x78
 6534 0089 86430000 		.4byte	.LASF954
 6535 008d 05       		.byte	0x5
 6536 008e 7E       		.uleb128 0x7e
 6537 008f 1C0E0000 		.4byte	.LASF955
 6538 0093 05       		.byte	0x5
 6539 0094 8201     		.uleb128 0x82
 6540 0096 9A3B0000 		.4byte	.LASF956
 6541 009a 05       		.byte	0x5
 6542 009b 8601     		.uleb128 0x86
 6543 009d 04030000 		.4byte	.LASF957
 6544 00a1 05       		.byte	0x5
 6545 00a2 8901     		.uleb128 0x89
 6546 00a4 61160000 		.4byte	.LASF958
 6547 00a8 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 126


 6548 00a9 8C01     		.uleb128 0x8c
 6549 00ab BA3C0000 		.4byte	.LASF959
 6550 00af 05       		.byte	0x5
 6551 00b0 8F01     		.uleb128 0x8f
 6552 00b2 C9510000 		.4byte	.LASF960
 6553 00b6 05       		.byte	0x5
 6554 00b7 9201     		.uleb128 0x92
 6555 00b9 44070000 		.4byte	.LASF961
 6556 00bd 05       		.byte	0x5
 6557 00be 9301     		.uleb128 0x93
 6558 00c0 92570000 		.4byte	.LASF962
 6559 00c4 05       		.byte	0x5
 6560 00c5 9401     		.uleb128 0x94
 6561 00c7 490A0000 		.4byte	.LASF963
 6562 00cb 05       		.byte	0x5
 6563 00cc 9B01     		.uleb128 0x9b
 6564 00ce D3650000 		.4byte	.LASF964
 6565 00d2 05       		.byte	0x5
 6566 00d3 9C01     		.uleb128 0x9c
 6567 00d5 74460000 		.4byte	.LASF965
 6568 00d9 05       		.byte	0x5
 6569 00da 9D01     		.uleb128 0x9d
 6570 00dc EE670000 		.4byte	.LASF966
 6571 00e0 05       		.byte	0x5
 6572 00e1 A501     		.uleb128 0xa5
 6573 00e3 823B0000 		.4byte	.LASF967
 6574 00e7 05       		.byte	0x5
 6575 00e8 A304     		.uleb128 0x223
 6576 00ea D9660000 		.4byte	.LASF968
 6577 00ee 05       		.byte	0x5
 6578 00ef A504     		.uleb128 0x225
 6579 00f1 BD2C0000 		.4byte	.LASF969
 6580 00f5 05       		.byte	0x5
 6581 00f6 C604     		.uleb128 0x246
 6582 00f8 911B0000 		.4byte	.LASF970
 6583 00fc 05       		.byte	0x5
 6584 00fd E304     		.uleb128 0x263
 6585 00ff B2030000 		.4byte	.LASF971
 6586 0103 05       		.byte	0x5
 6587 0104 F304     		.uleb128 0x273
 6588 0106 49490000 		.4byte	.LASF972
 6589 010a 05       		.byte	0x5
 6590 010b 8105     		.uleb128 0x281
 6591 010d A9240000 		.4byte	.LASF973
 6592 0111 05       		.byte	0x5
 6593 0112 8505     		.uleb128 0x285
 6594 0114 451D0000 		.4byte	.LASF974
 6595 0118 05       		.byte	0x5
 6596 0119 8605     		.uleb128 0x286
 6597 011b BA0C0000 		.4byte	.LASF975
 6598 011f 05       		.byte	0x5
 6599 0120 8705     		.uleb128 0x287
 6600 0122 8A010000 		.4byte	.LASF976
 6601 0126 05       		.byte	0x5
 6602 0127 8805     		.uleb128 0x288
 6603 0129 ED650000 		.4byte	.LASF977
 6604 012d 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 127


 6605 012e 8B05     		.uleb128 0x28b
 6606 0130 D52D0000 		.4byte	.LASF978
 6607 0134 05       		.byte	0x5
 6608 0135 8C05     		.uleb128 0x28c
 6609 0137 9D2E0000 		.4byte	.LASF979
 6610 013b 05       		.byte	0x5
 6611 013c 8D05     		.uleb128 0x28d
 6612 013e 6A3E0000 		.4byte	.LASF980
 6613 0142 05       		.byte	0x5
 6614 0143 9605     		.uleb128 0x296
 6615 0145 AA520000 		.4byte	.LASF981
 6616 0149 05       		.byte	0x5
 6617 014a 9705     		.uleb128 0x297
 6618 014c 051D0000 		.4byte	.LASF982
 6619 0150 05       		.byte	0x5
 6620 0151 9D05     		.uleb128 0x29d
 6621 0153 FC2D0000 		.4byte	.LASF983
 6622 0157 05       		.byte	0x5
 6623 0158 A005     		.uleb128 0x2a0
 6624 015a 49620000 		.4byte	.LASF984
 6625 015e 05       		.byte	0x5
 6626 015f A805     		.uleb128 0x2a8
 6627 0161 B2180000 		.4byte	.LASF985
 6628 0165 05       		.byte	0x5
 6629 0166 A905     		.uleb128 0x2a9
 6630 0168 A9110000 		.4byte	.LASF986
 6631 016c 00       		.byte	0
 6632              		.section	.debug_macro,"G",%progbits,wm4.ctype.h.2.c8defeb78957b878a8c8884c0f101735,comdat
 6633              	.Ldebug_macro28:
 6634 0000 0400     		.2byte	0x4
 6635 0002 00       		.byte	0
 6636 0003 05       		.byte	0x5
 6637 0004 02       		.uleb128 0x2
 6638 0005 922E0000 		.4byte	.LASF987
 6639 0009 05       		.byte	0x5
 6640 000a 1D       		.uleb128 0x1d
 6641 000b 5E080000 		.4byte	.LASF988
 6642 000f 05       		.byte	0x5
 6643 0010 1E       		.uleb128 0x1e
 6644 0011 EF240000 		.4byte	.LASF989
 6645 0015 05       		.byte	0x5
 6646 0016 21       		.uleb128 0x21
 6647 0017 AF650000 		.4byte	.LASF990
 6648 001b 05       		.byte	0x5
 6649 001c 22       		.uleb128 0x22
 6650 001d EB750000 		.4byte	.LASF991
 6651 0021 05       		.byte	0x5
 6652 0022 23       		.uleb128 0x23
 6653 0023 B9220000 		.4byte	.LASF992
 6654 0027 05       		.byte	0x5
 6655 0028 24       		.uleb128 0x24
 6656 0029 E0470000 		.4byte	.LASF993
 6657 002d 05       		.byte	0x5
 6658 002e 25       		.uleb128 0x25
 6659 002f 26470000 		.4byte	.LASF994
 6660 0033 05       		.byte	0x5
 6661 0034 26       		.uleb128 0x26
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 128


 6662 0035 253E0000 		.4byte	.LASF995
 6663 0039 05       		.byte	0x5
 6664 003a 27       		.uleb128 0x27
 6665 003b 87230000 		.4byte	.LASF996
 6666 003f 05       		.byte	0x5
 6667 0040 28       		.uleb128 0x28
 6668 0041 5F230000 		.4byte	.LASF997
 6669 0045 05       		.byte	0x5
 6670 0046 68       		.uleb128 0x68
 6671 0047 5D310000 		.4byte	.LASF998
 6672 004b 05       		.byte	0x5
 6673 004c 69       		.uleb128 0x69
 6674 004d 11280000 		.4byte	.LASF999
 6675 0051 00       		.byte	0
 6676              		.section	.debug_macro,"G",%progbits,wm4.Print.h.30.f0c5252e1c1c571b69cebbc87428dee1,comdat
 6677              	.Ldebug_macro29:
 6678 0000 0400     		.2byte	0x4
 6679 0002 00       		.byte	0
 6680 0003 05       		.byte	0x5
 6681 0004 1E       		.uleb128 0x1e
 6682 0005 FA3F0000 		.4byte	.LASF1000
 6683 0009 05       		.byte	0x5
 6684 000a 1F       		.uleb128 0x1f
 6685 000b EC690000 		.4byte	.LASF1001
 6686 000f 05       		.byte	0x5
 6687 0010 20       		.uleb128 0x20
 6688 0011 0B600000 		.4byte	.LASF1002
 6689 0015 05       		.byte	0x5
 6690 0016 21       		.uleb128 0x21
 6691 0017 CE000000 		.4byte	.LASF1003
 6692 001b 00       		.byte	0
 6693              		.section	.debug_macro,"G",%progbits,wm4.lpc.h.1.1d3a45b5e29fdf209290f88665d1fb1e,comdat
 6694              	.Ldebug_macro30:
 6695 0000 0400     		.2byte	0x4
 6696 0002 00       		.byte	0
 6697 0003 05       		.byte	0x5
 6698 0004 01       		.uleb128 0x1
 6699 0005 4F320000 		.4byte	.LASF1004
 6700 0009 05       		.byte	0x5
 6701 000a 02       		.uleb128 0x2
 6702 000b D7220000 		.4byte	.LASF1005
 6703 000f 05       		.byte	0x5
 6704 0010 04       		.uleb128 0x4
 6705 0011 240F0000 		.4byte	.LASF1006
 6706 0015 05       		.byte	0x5
 6707 0016 07       		.uleb128 0x7
 6708 0017 5D0E0000 		.4byte	.LASF1007
 6709 001b 05       		.byte	0x5
 6710 001c 08       		.uleb128 0x8
 6711 001d 141E0000 		.4byte	.LASF1008
 6712 0021 05       		.byte	0x5
 6713 0022 09       		.uleb128 0x9
 6714 0023 670B0000 		.4byte	.LASF1009
 6715 0027 05       		.byte	0x5
 6716 0028 0A       		.uleb128 0xa
 6717 0029 2D1C0000 		.4byte	.LASF1010
 6718 002d 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 129


 6719 002e 0B       		.uleb128 0xb
 6720 002f A9480000 		.4byte	.LASF1011
 6721 0033 05       		.byte	0x5
 6722 0034 0C       		.uleb128 0xc
 6723 0035 C43F0000 		.4byte	.LASF1012
 6724 0039 05       		.byte	0x5
 6725 003a 0D       		.uleb128 0xd
 6726 003b 611E0000 		.4byte	.LASF1013
 6727 003f 05       		.byte	0x5
 6728 0040 0E       		.uleb128 0xe
 6729 0041 23600000 		.4byte	.LASF1014
 6730 0045 05       		.byte	0x5
 6731 0046 0F       		.uleb128 0xf
 6732 0047 90190000 		.4byte	.LASF1015
 6733 004b 05       		.byte	0x5
 6734 004c 12       		.uleb128 0x12
 6735 004d 9E230000 		.4byte	.LASF1016
 6736 0051 05       		.byte	0x5
 6737 0052 13       		.uleb128 0x13
 6738 0053 AB340000 		.4byte	.LASF1017
 6739 0057 05       		.byte	0x5
 6740 0058 14       		.uleb128 0x14
 6741 0059 29300000 		.4byte	.LASF1018
 6742 005d 05       		.byte	0x5
 6743 005e 15       		.uleb128 0x15
 6744 005f 57290000 		.4byte	.LASF1019
 6745 0063 05       		.byte	0x5
 6746 0064 16       		.uleb128 0x16
 6747 0065 1E230000 		.4byte	.LASF1020
 6748 0069 05       		.byte	0x5
 6749 006a 17       		.uleb128 0x17
 6750 006b 655D0000 		.4byte	.LASF1021
 6751 006f 05       		.byte	0x5
 6752 0070 18       		.uleb128 0x18
 6753 0071 D63E0000 		.4byte	.LASF1022
 6754 0075 05       		.byte	0x5
 6755 0076 19       		.uleb128 0x19
 6756 0077 ED220000 		.4byte	.LASF1023
 6757 007b 05       		.byte	0x5
 6758 007c 1C       		.uleb128 0x1c
 6759 007d AA0A0000 		.4byte	.LASF1024
 6760 0081 05       		.byte	0x5
 6761 0082 1D       		.uleb128 0x1d
 6762 0083 45050000 		.4byte	.LASF1025
 6763 0087 05       		.byte	0x5
 6764 0088 1E       		.uleb128 0x1e
 6765 0089 C4470000 		.4byte	.LASF1026
 6766 008d 05       		.byte	0x5
 6767 008e 1F       		.uleb128 0x1f
 6768 008f 583A0000 		.4byte	.LASF1027
 6769 0093 05       		.byte	0x5
 6770 0094 20       		.uleb128 0x20
 6771 0095 93500000 		.4byte	.LASF1028
 6772 0099 05       		.byte	0x5
 6773 009a 21       		.uleb128 0x21
 6774 009b 6F550000 		.4byte	.LASF1029
 6775 009f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 130


 6776 00a0 22       		.uleb128 0x22
 6777 00a1 744E0000 		.4byte	.LASF1030
 6778 00a5 05       		.byte	0x5
 6779 00a6 23       		.uleb128 0x23
 6780 00a7 291D0000 		.4byte	.LASF1031
 6781 00ab 05       		.byte	0x5
 6782 00ac 24       		.uleb128 0x24
 6783 00ad B4640000 		.4byte	.LASF1032
 6784 00b1 05       		.byte	0x5
 6785 00b2 25       		.uleb128 0x25
 6786 00b3 B41C0000 		.4byte	.LASF1033
 6787 00b7 05       		.byte	0x5
 6788 00b8 26       		.uleb128 0x26
 6789 00b9 D8250000 		.4byte	.LASF1034
 6790 00bd 05       		.byte	0x5
 6791 00be 29       		.uleb128 0x29
 6792 00bf AA3F0000 		.4byte	.LASF1035
 6793 00c3 05       		.byte	0x5
 6794 00c4 2A       		.uleb128 0x2a
 6795 00c5 204C0000 		.4byte	.LASF1036
 6796 00c9 05       		.byte	0x5
 6797 00ca 2B       		.uleb128 0x2b
 6798 00cb E8680000 		.4byte	.LASF1037
 6799 00cf 05       		.byte	0x5
 6800 00d0 2C       		.uleb128 0x2c
 6801 00d1 56280000 		.4byte	.LASF1038
 6802 00d5 05       		.byte	0x5
 6803 00d6 2F       		.uleb128 0x2f
 6804 00d7 CC540000 		.4byte	.LASF1039
 6805 00db 05       		.byte	0x5
 6806 00dc 30       		.uleb128 0x30
 6807 00dd B95E0000 		.4byte	.LASF1040
 6808 00e1 05       		.byte	0x5
 6809 00e2 32       		.uleb128 0x32
 6810 00e3 5B3F0000 		.4byte	.LASF1041
 6811 00e7 05       		.byte	0x5
 6812 00e8 33       		.uleb128 0x33
 6813 00e9 B2390000 		.4byte	.LASF1042
 6814 00ed 05       		.byte	0x5
 6815 00ee 34       		.uleb128 0x34
 6816 00ef A0540000 		.4byte	.LASF1043
 6817 00f3 05       		.byte	0x5
 6818 00f4 35       		.uleb128 0x35
 6819 00f5 A1300000 		.4byte	.LASF1044
 6820 00f9 05       		.byte	0x5
 6821 00fa 36       		.uleb128 0x36
 6822 00fb E0180000 		.4byte	.LASF1045
 6823 00ff 05       		.byte	0x5
 6824 0100 39       		.uleb128 0x39
 6825 0101 6C430000 		.4byte	.LASF1046
 6826 0105 05       		.byte	0x5
 6827 0106 3A       		.uleb128 0x3a
 6828 0107 77330000 		.4byte	.LASF1047
 6829 010b 05       		.byte	0x5
 6830 010c 3B       		.uleb128 0x3b
 6831 010d FB510000 		.4byte	.LASF1048
 6832 0111 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 131


 6833 0112 3D       		.uleb128 0x3d
 6834 0113 C2140000 		.4byte	.LASF1049
 6835 0117 05       		.byte	0x5
 6836 0118 3E       		.uleb128 0x3e
 6837 0119 A55A0000 		.4byte	.LASF1050
 6838 011d 05       		.byte	0x5
 6839 011e 3F       		.uleb128 0x3f
 6840 011f 1A410000 		.4byte	.LASF1051
 6841 0123 05       		.byte	0x5
 6842 0124 40       		.uleb128 0x40
 6843 0125 E50C0000 		.4byte	.LASF1052
 6844 0129 05       		.byte	0x5
 6845 012a 42       		.uleb128 0x42
 6846 012b 50140000 		.4byte	.LASF1053
 6847 012f 05       		.byte	0x5
 6848 0130 43       		.uleb128 0x43
 6849 0131 25100000 		.4byte	.LASF1054
 6850 0135 05       		.byte	0x5
 6851 0136 44       		.uleb128 0x44
 6852 0137 D1100000 		.4byte	.LASF1055
 6853 013b 05       		.byte	0x5
 6854 013c 45       		.uleb128 0x45
 6855 013d 23390000 		.4byte	.LASF1056
 6856 0141 05       		.byte	0x5
 6857 0142 46       		.uleb128 0x46
 6858 0143 FE1B0000 		.4byte	.LASF1057
 6859 0147 05       		.byte	0x5
 6860 0148 47       		.uleb128 0x47
 6861 0149 22480000 		.4byte	.LASF1058
 6862 014d 05       		.byte	0x5
 6863 014e 48       		.uleb128 0x48
 6864 014f 28040000 		.4byte	.LASF1059
 6865 0153 00       		.byte	0
 6866              		.section	.debug_macro,"G",%progbits,wm4.stdarg.h.31.fa591a4b1df9e413e9f5b8097f9ae89d,comdat
 6867              	.Ldebug_macro31:
 6868 0000 0400     		.2byte	0x4
 6869 0002 00       		.byte	0
 6870 0003 05       		.byte	0x5
 6871 0004 1F       		.uleb128 0x1f
 6872 0005 36340000 		.4byte	.LASF1060
 6873 0009 05       		.byte	0x5
 6874 000a 20       		.uleb128 0x20
 6875 000b F3500000 		.4byte	.LASF1061
 6876 000f 06       		.byte	0x6
 6877 0010 22       		.uleb128 0x22
 6878 0011 3D390000 		.4byte	.LASF883
 6879 0015 05       		.byte	0x5
 6880 0016 2F       		.uleb128 0x2f
 6881 0017 C81F0000 		.4byte	.LASF1062
 6882 001b 05       		.byte	0x5
 6883 001c 30       		.uleb128 0x30
 6884 001d 52610000 		.4byte	.LASF1063
 6885 0021 05       		.byte	0x5
 6886 0022 31       		.uleb128 0x31
 6887 0023 335B0000 		.4byte	.LASF1064
 6888 0027 05       		.byte	0x5
 6889 0028 33       		.uleb128 0x33
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 132


 6890 0029 53500000 		.4byte	.LASF1065
 6891 002d 05       		.byte	0x5
 6892 002e 35       		.uleb128 0x35
 6893 002f EB520000 		.4byte	.LASF1066
 6894 0033 05       		.byte	0x5
 6895 0034 6C       		.uleb128 0x6c
 6896 0035 01400000 		.4byte	.LASF1067
 6897 0039 05       		.byte	0x5
 6898 003a 6F       		.uleb128 0x6f
 6899 003b 8F600000 		.4byte	.LASF1068
 6900 003f 05       		.byte	0x5
 6901 0040 72       		.uleb128 0x72
 6902 0041 AE270000 		.4byte	.LASF1069
 6903 0045 05       		.byte	0x5
 6904 0046 75       		.uleb128 0x75
 6905 0047 C5650000 		.4byte	.LASF1070
 6906 004b 05       		.byte	0x5
 6907 004c 78       		.uleb128 0x78
 6908 004d BA3B0000 		.4byte	.LASF1071
 6909 0051 00       		.byte	0
 6910              		.section	.debug_macro,"G",%progbits,wm4.printf.h.118.ab3672ee221610a07496c11f46394049,comdat
 6911              	.Ldebug_macro32:
 6912 0000 0400     		.2byte	0x4
 6913 0002 00       		.byte	0
 6914 0003 05       		.byte	0x5
 6915 0004 76       		.uleb128 0x76
 6916 0005 9D310000 		.4byte	.LASF1072
 6917 0009 05       		.byte	0x5
 6918 000a 77       		.uleb128 0x77
 6919 000b 63620000 		.4byte	.LASF1073
 6920 000f 00       		.byte	0
 6921              		.section	.debug_macro,"G",%progbits,wm4.Arduino.h.7.11ae76491bba122b55a6a0794d995347,comdat
 6922              	.Ldebug_macro33:
 6923 0000 0400     		.2byte	0x4
 6924 0002 00       		.byte	0
 6925 0003 05       		.byte	0x5
 6926 0004 07       		.uleb128 0x7
 6927 0005 533E0000 		.4byte	.LASF1074
 6928 0009 05       		.byte	0x5
 6929 000a 08       		.uleb128 0x8
 6930 000b 29640000 		.4byte	.LASF1075
 6931 000f 05       		.byte	0x5
 6932 0010 0A       		.uleb128 0xa
 6933 0011 50600000 		.4byte	.LASF1076
 6934 0015 05       		.byte	0x5
 6935 0016 0B       		.uleb128 0xb
 6936 0017 94610000 		.4byte	.LASF1077
 6937 001b 05       		.byte	0x5
 6938 001c 0C       		.uleb128 0xc
 6939 001d 54510000 		.4byte	.LASF1078
 6940 0021 05       		.byte	0x5
 6941 0022 0E       		.uleb128 0xe
 6942 0023 C51A0000 		.4byte	.LASF1079
 6943 0027 05       		.byte	0x5
 6944 0028 0F       		.uleb128 0xf
 6945 0029 4E540000 		.4byte	.LASF1080
 6946 002d 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 133


 6947 002e 11       		.uleb128 0x11
 6948 002f E50B0000 		.4byte	.LASF1081
 6949 0033 05       		.byte	0x5
 6950 0034 12       		.uleb128 0x12
 6951 0035 15380000 		.4byte	.LASF1082
 6952 0039 05       		.byte	0x5
 6953 003a 13       		.uleb128 0x13
 6954 003b D9310000 		.4byte	.LASF1083
 6955 003f 05       		.byte	0x5
 6956 0040 14       		.uleb128 0x14
 6957 0041 E5050000 		.4byte	.LASF1084
 6958 0045 05       		.byte	0x5
 6959 0046 15       		.uleb128 0x15
 6960 0047 AE210000 		.4byte	.LASF1085
 6961 004b 05       		.byte	0x5
 6962 004c 17       		.uleb128 0x17
 6963 004d 83140000 		.4byte	.LASF1086
 6964 0051 05       		.byte	0x5
 6965 0052 18       		.uleb128 0x18
 6966 0053 19100000 		.4byte	.LASF1087
 6967 0057 05       		.byte	0x5
 6968 0058 1A       		.uleb128 0x1a
 6969 0059 E02B0000 		.4byte	.LASF1088
 6970 005d 05       		.byte	0x5
 6971 005e 1B       		.uleb128 0x1b
 6972 005f CA2D0000 		.4byte	.LASF1089
 6973 0063 05       		.byte	0x5
 6974 0064 1D       		.uleb128 0x1d
 6975 0065 EF000000 		.4byte	.LASF1090
 6976 0069 05       		.byte	0x5
 6977 006a 1E       		.uleb128 0x1e
 6978 006b B1170000 		.4byte	.LASF1091
 6979 006f 05       		.byte	0x5
 6980 0070 1F       		.uleb128 0x1f
 6981 0071 E2750000 		.4byte	.LASF1092
 6982 0075 05       		.byte	0x5
 6983 0076 21       		.uleb128 0x21
 6984 0077 454D0000 		.4byte	.LASF1093
 6985 007b 05       		.byte	0x5
 6986 007c 22       		.uleb128 0x22
 6987 007d A7390000 		.4byte	.LASF1094
 6988 0081 05       		.byte	0x5
 6989 0082 29       		.uleb128 0x29
 6990 0083 3A460000 		.4byte	.LASF1095
 6991 0087 05       		.byte	0x5
 6992 0088 2A       		.uleb128 0x2a
 6993 0089 230A0000 		.4byte	.LASF1096
 6994 008d 05       		.byte	0x5
 6995 008e 2C       		.uleb128 0x2c
 6996 008f A4530000 		.4byte	.LASF1097
 6997 0093 05       		.byte	0x5
 6998 0094 2D       		.uleb128 0x2d
 6999 0095 59690000 		.4byte	.LASF1098
 7000 0099 05       		.byte	0x5
 7001 009a 2E       		.uleb128 0x2e
 7002 009b 87660000 		.4byte	.LASF1099
 7003 009f 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 134


 7004 00a0 2F       		.uleb128 0x2f
 7005 00a1 981F0000 		.4byte	.LASF1100
 7006 00a5 05       		.byte	0x5
 7007 00a6 30       		.uleb128 0x30
 7008 00a7 EE420000 		.4byte	.LASF1101
 7009 00ab 05       		.byte	0x5
 7010 00ac 32       		.uleb128 0x32
 7011 00ad 16680000 		.4byte	.LASF1102
 7012 00b1 05       		.byte	0x5
 7013 00b2 33       		.uleb128 0x33
 7014 00b3 0C5C0000 		.4byte	.LASF1103
 7015 00b7 05       		.byte	0x5
 7016 00b8 35       		.uleb128 0x35
 7017 00b9 A8430000 		.4byte	.LASF1104
 7018 00bd 05       		.byte	0x5
 7019 00be 36       		.uleb128 0x36
 7020 00bf 2A5C0000 		.4byte	.LASF1105
 7021 00c3 05       		.byte	0x5
 7022 00c4 37       		.uleb128 0x37
 7023 00c5 D85E0000 		.4byte	.LASF1106
 7024 00c9 05       		.byte	0x5
 7025 00ca 39       		.uleb128 0x39
 7026 00cb 8B4D0000 		.4byte	.LASF1107
 7027 00cf 05       		.byte	0x5
 7028 00d0 3A       		.uleb128 0x3a
 7029 00d1 934B0000 		.4byte	.LASF1108
 7030 00d5 05       		.byte	0x5
 7031 00d6 3C       		.uleb128 0x3c
 7032 00d7 B65D0000 		.4byte	.LASF1109
 7033 00db 05       		.byte	0x5
 7034 00dc 3D       		.uleb128 0x3d
 7035 00dd AD450000 		.4byte	.LASF1110
 7036 00e1 05       		.byte	0x5
 7037 00e2 3E       		.uleb128 0x3e
 7038 00e3 671F0000 		.4byte	.LASF1111
 7039 00e7 05       		.byte	0x5
 7040 00e8 3F       		.uleb128 0x3f
 7041 00e9 1E0D0000 		.4byte	.LASF1112
 7042 00ed 05       		.byte	0x5
 7043 00ee 43       		.uleb128 0x43
 7044 00ef 47200000 		.4byte	.LASF1113
 7045 00f3 05       		.byte	0x5
 7046 00f4 5C       		.uleb128 0x5c
 7047 00f5 620A0000 		.4byte	.LASF1114
 7048 00f9 05       		.byte	0x5
 7049 00fa 5D       		.uleb128 0x5d
 7050 00fb C9340000 		.4byte	.LASF1115
 7051 00ff 05       		.byte	0x5
 7052 0100 5E       		.uleb128 0x5e
 7053 0101 D0620000 		.4byte	.LASF1116
 7054 0105 05       		.byte	0x5
 7055 0106 5F       		.uleb128 0x5f
 7056 0107 BF220000 		.4byte	.LASF1117
 7057 010b 05       		.byte	0x5
 7058 010c 60       		.uleb128 0x60
 7059 010d 2C080000 		.4byte	.LASF1118
 7060 0111 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 135


 7061 0112 61       		.uleb128 0x61
 7062 0113 15050000 		.4byte	.LASF1119
 7063 0117 05       		.byte	0x5
 7064 0118 62       		.uleb128 0x62
 7065 0119 B9330000 		.4byte	.LASF1120
 7066 011d 05       		.byte	0x5
 7067 011e 64       		.uleb128 0x64
 7068 011f FF3B0000 		.4byte	.LASF1121
 7069 0123 05       		.byte	0x5
 7070 0124 65       		.uleb128 0x65
 7071 0125 D4690000 		.4byte	.LASF1122
 7072 0129 05       		.byte	0x5
 7073 012a 67       		.uleb128 0x67
 7074 012b 05480000 		.4byte	.LASF1123
 7075 012f 05       		.byte	0x5
 7076 0130 68       		.uleb128 0x68
 7077 0131 29690000 		.4byte	.LASF1124
 7078 0135 05       		.byte	0x5
 7079 0136 69       		.uleb128 0x69
 7080 0137 0F290000 		.4byte	.LASF1125
 7081 013b 05       		.byte	0x5
 7082 013c 6A       		.uleb128 0x6a
 7083 013d FB570000 		.4byte	.LASF1126
 7084 0141 05       		.byte	0x5
 7085 0142 6B       		.uleb128 0x6b
 7086 0143 50330000 		.4byte	.LASF1127
 7087 0147 05       		.byte	0x5
 7088 0148 6C       		.uleb128 0x6c
 7089 0149 29490000 		.4byte	.LASF1128
 7090 014d 05       		.byte	0x5
 7091 014e 6D       		.uleb128 0x6d
 7092 014f 595F0000 		.4byte	.LASF1129
 7093 0153 05       		.byte	0x5
 7094 0154 6E       		.uleb128 0x6e
 7095 0155 DB060000 		.4byte	.LASF1130
 7096 0159 05       		.byte	0x5
 7097 015a 6F       		.uleb128 0x6f
 7098 015b B82A0000 		.4byte	.LASF1131
 7099 015f 05       		.byte	0x5
 7100 0160 70       		.uleb128 0x70
 7101 0161 3F100000 		.4byte	.LASF1132
 7102 0165 05       		.byte	0x5
 7103 0166 71       		.uleb128 0x71
 7104 0167 1C480000 		.4byte	.LASF1133
 7105 016b 05       		.byte	0x5
 7106 016c 73       		.uleb128 0x73
 7107 016d 2E510000 		.4byte	.LASF1134
 7108 0171 05       		.byte	0x5
 7109 0172 74       		.uleb128 0x74
 7110 0173 8D060000 		.4byte	.LASF1135
 7111 0177 05       		.byte	0x5
 7112 0178 75       		.uleb128 0x75
 7113 0179 F81D0000 		.4byte	.LASF1136
 7114 017d 05       		.byte	0x5
 7115 017e 76       		.uleb128 0x76
 7116 017f 642E0000 		.4byte	.LASF1137
 7117 0183 05       		.byte	0x5
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 136


 7118 0184 77       		.uleb128 0x77
 7119 0185 44540000 		.4byte	.LASF1138
 7120 0189 05       		.byte	0x5
 7121 018a 78       		.uleb128 0x78
 7122 018b 13270000 		.4byte	.LASF1139
 7123 018f 05       		.byte	0x5
 7124 0190 79       		.uleb128 0x79
 7125 0191 68070000 		.4byte	.LASF1140
 7126 0195 05       		.byte	0x5
 7127 0196 7A       		.uleb128 0x7a
 7128 0197 481F0000 		.4byte	.LASF1141
 7129 019b 05       		.byte	0x5
 7130 019c 7C       		.uleb128 0x7c
 7131 019d 43250000 		.4byte	.LASF1142
 7132 01a1 05       		.byte	0x5
 7133 01a2 7D       		.uleb128 0x7d
 7134 01a3 4E3A0000 		.4byte	.LASF1143
 7135 01a7 05       		.byte	0x5
 7136 01a8 7E       		.uleb128 0x7e
 7137 01a9 5F400000 		.4byte	.LASF1144
 7138 01ad 05       		.byte	0x5
 7139 01ae 7F       		.uleb128 0x7f
 7140 01af 3E0A0000 		.4byte	.LASF1145
 7141 01b3 05       		.byte	0x5
 7142 01b4 8001     		.uleb128 0x80
 7143 01b6 CD420000 		.4byte	.LASF1146
 7144 01ba 05       		.byte	0x5
 7145 01bb 8101     		.uleb128 0x81
 7146 01bd 95520000 		.4byte	.LASF1147
 7147 01c1 05       		.byte	0x5
 7148 01c2 8201     		.uleb128 0x82
 7149 01c4 D9430000 		.4byte	.LASF1148
 7150 01c8 05       		.byte	0x5
 7151 01c9 8301     		.uleb128 0x83
 7152 01cb 9E480000 		.4byte	.LASF1149
 7153 01cf 05       		.byte	0x5
 7154 01d0 8401     		.uleb128 0x84
 7155 01d2 AF4A0000 		.4byte	.LASF1150
 7156 01d6 05       		.byte	0x5
 7157 01d7 8501     		.uleb128 0x85
 7158 01d9 BA680000 		.4byte	.LASF1151
 7159 01dd 00       		.byte	0
 7160              		.section	.debug_line,"",%progbits
 7161              	.Ldebug_line0:
 7162 0000 88050000 		.section	.debug_str,"MS",%progbits,1
 7162      0200C203 
 7162      00000201 
 7162      FB0E0D00 
 7162      01010101 
 7163              	.LASF948:
 7164 0000 5F494F46 		.ascii	"_IOFBF 0\000"
 7164      42462030 
 7164      00
 7165              	.LASF198:
 7166 0009 5F5F4758 		.ascii	"__GXX_ABI_VERSION 1002\000"
 7166      585F4142 
 7166      495F5645 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 137


 7166      5253494F 
 7166      4E203130 
 7167              	.LASF287:
 7168 0020 5F5F4445 		.ascii	"__DECIMAL_DIG__ 17\000"
 7168      43494D41 
 7168      4C5F4449 
 7168      475F5F20 
 7168      313700
 7169              	.LASF424:
 7170 0033 5F5F5548 		.ascii	"__UHA_FBIT__ 8\000"
 7170      415F4642 
 7170      49545F5F 
 7170      203800
 7171              	.LASF242:
 7172 0042 5F5F494E 		.ascii	"__INT_FAST32_MAX__ 2147483647\000"
 7172      545F4641 
 7172      53543332 
 7172      5F4D4158 
 7172      5F5F2032 
 7173              	.LASF2:
 7174 0060 756E7369 		.ascii	"unsigned char\000"
 7174      676E6564 
 7174      20636861 
 7174      7200
 7175              	.LASF441:
 7176 006e 5F5F4743 		.ascii	"__GCC_ATOMIC_WCHAR_T_LOCK_FREE 1\000"
 7176      435F4154 
 7176      4F4D4943 
 7176      5F574348 
 7176      41525F54 
 7177              	.LASF618:
 7178 008f 5F524545 		.ascii	"_REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._ge"
 7178      4E545F47 
 7178      45544441 
 7178      54455F45 
 7178      52525F50 
 7179 00c2 74646174 		.ascii	"tdate_err))\000"
 7179      655F6572 
 7179      72292900 
 7180              	.LASF1003:
 7181 00ce 42494E20 		.ascii	"BIN 2\000"
 7181      3200
 7182              	.LASF435:
 7183 00d4 5F5F4348 		.ascii	"__CHAR_UNSIGNED__ 1\000"
 7183      41525F55 
 7183      4E534947 
 7183      4E45445F 
 7183      5F203100 
 7184              	.LASF11:
 7185 00e8 73697A65 		.ascii	"size_t\000"
 7185      5F7400
 7186              	.LASF1090:
 7187 00ef 4348414E 		.ascii	"CHANGE 1\000"
 7187      47452031 
 7187      00
 7188              	.LASF60:
 7189 00f8 474E5520 		.ascii	"GNU C++ 4.7.4 20130613 (release) [ARM/embedded-4_7-"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 138


 7189      432B2B20 
 7189      342E372E 
 7189      34203230 
 7189      31333036 
 7190 012b 6272616E 		.ascii	"branch revision 200083]\000"
 7190      63682072 
 7190      65766973 
 7190      696F6E20 
 7190      32303030 
 7191              	.LASF8:
 7192 0143 73697A65 		.ascii	"sizetype\000"
 7192      74797065 
 7192      00
 7193              	.LASF203:
 7194 014c 5F5F4C4F 		.ascii	"__LONG_LONG_MAX__ 9223372036854775807LL\000"
 7194      4E475F4C 
 7194      4F4E475F 
 7194      4D41585F 
 7194      5F203932 
 7195              	.LASF211:
 7196 0174 5F5F494E 		.ascii	"__INTMAX_C(c) c ## LL\000"
 7196      544D4158 
 7196      5F432863 
 7196      29206320 
 7196      2323204C 
 7197              	.LASF976:
 7198 018a 5F5F7363 		.ascii	"__sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SE"
 7198      6C656172 
 7198      65727228 
 7198      70292028 
 7198      28766F69 
 7199 01bd 4F462929 		.ascii	"OF)))\000"
 7199      2900
 7200              	.LASF821:
 7201 01c3 5F5F5343 		.ascii	"__SCN64(x) __STRINGIFY(ll ##x)\000"
 7201      4E363428 
 7201      7829205F 
 7201      5F535452 
 7201      494E4749 
 7202              	.LASF388:
 7203 01e2 5F5F4C4C 		.ascii	"__LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)\000"
 7203      41434355 
 7203      4D5F4D49 
 7203      4E5F5F20 
 7203      282D3058 
 7204              	.LASF871:
 7205 0209 50524969 		.ascii	"PRIiPTR __PRIPTR(i)\000"
 7205      50545220 
 7205      5F5F5052 
 7205      49505452 
 7205      28692900 
 7206              	.LASF380:
 7207 021d 5F5F4C41 		.ascii	"__LACCUM_EPSILON__ 0x1P-31LK\000"
 7207      4343554D 
 7207      5F455053 
 7207      494C4F4E 
 7207      5F5F2030 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 139


 7208              	.LASF313:
 7209 023a 5F5F4445 		.ascii	"__DEC128_MAX__ 9.999999999999999999999999999999999E"
 7209      43313238 
 7209      5F4D4158 
 7209      5F5F2039 
 7209      2E393939 
 7210 026d 36313434 		.ascii	"6144DL\000"
 7210      444C00
 7211              	.LASF680:
 7212 0274 494E545F 		.ascii	"INT_FAST8_MIN (-__STDINT_EXP(INT_MAX)-1)\000"
 7212      46415354 
 7212      385F4D49 
 7212      4E20282D 
 7212      5F5F5354 
 7213              	.LASF746:
 7214 029d 53434E69 		.ascii	"SCNiFAST8 __SCN8(i)\000"
 7214      46415354 
 7214      38205F5F 
 7214      53434E38 
 7214      28692900 
 7215              	.LASF100:
 7216 02b1 4932435F 		.ascii	"I2C_IDLE 0\000"
 7216      49444C45 
 7216      203000
 7217              	.LASF109:
 7218 02bc 4932435F 		.ascii	"I2C_NACK_ON_DATA 9\000"
 7218      4E41434B 
 7218      5F4F4E5F 
 7218      44415441 
 7218      203900
 7219              	.LASF301:
 7220 02cf 5F5F4445 		.ascii	"__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\000"
 7220      4333325F 
 7220      5355424E 
 7220      4F524D41 
 7220      4C5F4D49 
 7221              	.LASF405:
 7222 02f6 5F5F5451 		.ascii	"__TQ_IBIT__ 0\000"
 7222      5F494249 
 7222      545F5F20 
 7222      3000
 7223              	.LASF957:
 7224 0304 5345454B 		.ascii	"SEEK_SET 0\000"
 7224      5F534554 
 7224      203000
 7225              	.LASF18:
 7226 030f 62656769 		.ascii	"beginTransmission\000"
 7226      6E547261 
 7226      6E736D69 
 7226      7373696F 
 7226      6E00
 7227              	.LASF703:
 7228 0321 57494E54 		.ascii	"WINT_MIN __WINT_MIN__\000"
 7228      5F4D494E 
 7228      205F5F57 
 7228      494E545F 
 7228      4D494E5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 140


 7229              	.LASF584:
 7230 0337 5F524545 		.ascii	"_REENT_SIGNAL_SIZE 24\000"
 7230      4E545F53 
 7230      49474E41 
 7230      4C5F5349 
 7230      5A452032 
 7231              	.LASF619:
 7232 034d 5F4B6D61 		.ascii	"_Kmax (sizeof (size_t) << 3)\000"
 7232      78202873 
 7232      697A656F 
 7232      66202873 
 7232      697A655F 
 7233              	.LASF140:
 7234 036a 5F5F4154 		.ascii	"__ATOMIC_CONSUME 1\000"
 7234      4F4D4943 
 7234      5F434F4E 
 7234      53554D45 
 7234      203100
 7235              	.LASF381:
 7236 037d 5F5F554C 		.ascii	"__ULACCUM_FBIT__ 32\000"
 7236      41434355 
 7236      4D5F4642 
 7236      49545F5F 
 7236      20333200 
 7237              	.LASF190:
 7238 0391 5F5F5549 		.ascii	"__UINT_FAST8_TYPE__ unsigned int\000"
 7238      4E545F46 
 7238      41535438 
 7238      5F545950 
 7238      455F5F20 
 7239              	.LASF971:
 7240 03b2 5F5F7367 		.ascii	"__sgetc_r(__ptr,__p) __sgetc_raw_r(__ptr, __p)\000"
 7240      6574635F 
 7240      72285F5F 
 7240      7074722C 
 7240      5F5F7029 
 7241              	.LASF916:
 7242 03e1 46445F53 		.ascii	"FD_SETSIZE 64\000"
 7242      45545349 
 7242      5A452036 
 7242      3400
 7243              	.LASF738:
 7244 03ef 53434E78 		.ascii	"SCNxLEAST8 __SCN8(x)\000"
 7244      4C454153 
 7244      5438205F 
 7244      5F53434E 
 7244      38287829 
 7245              	.LASF57:
 7246 0404 49324357 		.ascii	"I2CWriteLength\000"
 7246      72697465 
 7246      4C656E67 
 7246      746800
 7247              	.LASF114:
 7248 0413 4932434F 		.ascii	"I2CONSET_AA (0x1<<2)\000"
 7248      4E534554 
 7248      5F414120 
 7248      28307831 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 141


 7248      3C3C3229 
 7249              	.LASF1059:
 7250 0428 49324330 		.ascii	"I2C0CONCLR MMIO(0x40000018)\000"
 7250      434F4E43 
 7250      4C52204D 
 7250      4D494F28 
 7250      30783430 
 7251              	.LASF268:
 7252 0444 5F5F4442 		.ascii	"__DBL_DIG__ 15\000"
 7252      4C5F4449 
 7252      475F5F20 
 7252      313500
 7253              	.LASF1:
 7254 0453 7369676E 		.ascii	"signed char\000"
 7254      65642063 
 7254      68617200 
 7255              	.LASF146:
 7256 045f 5F5F5349 		.ascii	"__SIZEOF_LONG_LONG__ 8\000"
 7256      5A454F46 
 7256      5F4C4F4E 
 7256      475F4C4F 
 7256      4E475F5F 
 7257              	.LASF272:
 7258 0476 5F5F4442 		.ascii	"__DBL_MAX_10_EXP__ 308\000"
 7258      4C5F4D41 
 7258      585F3130 
 7258      5F455850 
 7258      5F5F2033 
 7259              	.LASF328:
 7260 048d 5F5F4652 		.ascii	"__FRACT_MIN__ (-0.5R-0.5R)\000"
 7260      4143545F 
 7260      4D494E5F 
 7260      5F20282D 
 7260      302E3552 
 7261              	.LASF394:
 7262 04a8 5F5F554C 		.ascii	"__ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK\000"
 7262      4C414343 
 7262      554D5F4D 
 7262      41585F5F 
 7262      20305846 
 7263              	.LASF364:
 7264 04d4 5F5F5553 		.ascii	"__USACCUM_MAX__ 0XFFFFP-8UHK\000"
 7264      41434355 
 7264      4D5F4D41 
 7264      585F5F20 
 7264      30584646 
 7265              	.LASF316:
 7266 04f1 5F5F5346 		.ascii	"__SFRACT_FBIT__ 7\000"
 7266      52414354 
 7266      5F464249 
 7266      545F5F20 
 7266      3700
 7267              	.LASF832:
 7268 0503 53434E78 		.ascii	"SCNx64 __SCN64(x)\000"
 7268      3634205F 
 7268      5F53434E 
 7268      36342878 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 142


 7268      2900
 7269              	.LASF1119:
 7270 0515 706F7274 		.ascii	"portInputRegister(P) *(port_to_input_PGM + (P))\000"
 7270      496E7075 
 7270      74526567 
 7270      69737465 
 7270      72285029 
 7271              	.LASF1025:
 7272 0545 53595350 		.ascii	"SYSPLLCTRL MMIO(0x40048008)\000"
 7272      4C4C4354 
 7272      524C204D 
 7272      4D494F28 
 7272      30783430 
 7273              	.LASF401:
 7274 0561 5F5F5351 		.ascii	"__SQ_IBIT__ 0\000"
 7274      5F494249 
 7274      545F5F20 
 7274      3000
 7275              	.LASF156:
 7276 056f 5F5F4F52 		.ascii	"__ORDER_PDP_ENDIAN__ 3412\000"
 7276      4445525F 
 7276      5044505F 
 7276      454E4449 
 7276      414E5F5F 
 7277              	.LASF161:
 7278 0589 5F5F5349 		.ascii	"__SIZE_TYPE__ unsigned int\000"
 7278      5A455F54 
 7278      5950455F 
 7278      5F20756E 
 7278      7369676E 
 7279              	.LASF304:
 7280 05a4 5F5F4445 		.ascii	"__DEC64_MAX_EXP__ 385\000"
 7280      4336345F 
 7280      4D41585F 
 7280      4558505F 
 7280      5F203338 
 7281              	.LASF603:
 7282 05ba 5F524545 		.ascii	"_REENT_MP_FREELIST(ptr) ((ptr)->_freelist)\000"
 7282      4E545F4D 
 7282      505F4652 
 7282      45454C49 
 7282      53542870 
 7283              	.LASF1084:
 7284 05e5 4445475F 		.ascii	"DEG_TO_RAD 0.017453292519943295769236907684886\000"
 7284      544F5F52 
 7284      41442030 
 7284      2E303137 
 7284      34353332 
 7285              	.LASF264:
 7286 0614 5F5F464C 		.ascii	"__FLT_HAS_DENORM__ 1\000"
 7286      545F4841 
 7286      535F4445 
 7286      4E4F524D 
 7286      5F5F2031 
 7287              	.LASF170:
 7288 0629 5F5F494E 		.ascii	"__INT8_TYPE__ signed char\000"
 7288      54385F54 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 143


 7288      5950455F 
 7288      5F207369 
 7288      676E6564 
 7289              	.LASF122:
 7290 0643 49324441 		.ascii	"I2DAT_I2C 0x00000000\000"
 7290      545F4932 
 7290      43203078 
 7290      30303030 
 7290      30303030 
 7291              	.LASF363:
 7292 0658 5F5F5553 		.ascii	"__USACCUM_MIN__ 0.0UHK\000"
 7292      41434355 
 7292      4D5F4D49 
 7292      4E5F5F20 
 7292      302E3055 
 7293              	.LASF497:
 7294 066f 5F455846 		.ascii	"_EXFUN(name,proto) name proto\000"
 7294      554E286E 
 7294      616D652C 
 7294      70726F74 
 7294      6F29206E 
 7295              	.LASF1135:
 7296 068d 54494D45 		.ascii	"TIMER0A 1\000"
 7296      52304120 
 7296      3100
 7297              	.LASF283:
 7298 0697 5F5F4C44 		.ascii	"__LDBL_MIN_EXP__ (-1021)\000"
 7298      424C5F4D 
 7298      494E5F45 
 7298      58505F5F 
 7298      20282D31 
 7299              	.LASF281:
 7300 06b0 5F5F4C44 		.ascii	"__LDBL_MANT_DIG__ 53\000"
 7300      424C5F4D 
 7300      414E545F 
 7300      4449475F 
 7300      5F203533 
 7301              	.LASF851:
 7302 06c5 53434E69 		.ascii	"SCNiFAST64 __SCN64(i)\000"
 7302      46415354 
 7302      3634205F 
 7302      5F53434E 
 7302      36342869 
 7303              	.LASF1130:
 7304 06db 50482038 		.ascii	"PH 8\000"
 7304      00
 7305              	.LASF30:
 7306 06e0 77726974 		.ascii	"write\000"
 7306      6500
 7307              	.LASF233:
 7308 06e6 5F5F5549 		.ascii	"__UINT8_C(c) c\000"
 7308      4E54385F 
 7308      43286329 
 7308      206300
 7309              	.LASF171:
 7310 06f5 5F5F494E 		.ascii	"__INT16_TYPE__ short int\000"
 7310      5431365F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 144


 7310      54595045 
 7310      5F5F2073 
 7310      686F7274 
 7311              	.LASF901:
 7312 070e 4E554C4C 		.ascii	"NULL __null\000"
 7312      205F5F6E 
 7312      756C6C00 
 7313              	.LASF752:
 7314 071a 50524964 		.ascii	"PRId16 __PRI16(d)\000"
 7314      3136205F 
 7314      5F505249 
 7314      31362864 
 7314      2900
 7315              	.LASF593:
 7316 072c 5F524545 		.ascii	"_REENT_CHECK_MISC(ptr) \000"
 7316      4E545F43 
 7316      4845434B 
 7316      5F4D4953 
 7316      43287074 
 7317              	.LASF961:
 7318 0744 73746469 		.ascii	"stdin (_REENT->_stdin)\000"
 7318      6E20285F 
 7318      5245454E 
 7318      542D3E5F 
 7318      73746469 
 7319              	.LASF705:
 7320 075b 55494E54 		.ascii	"UINT8_C(x) x\000"
 7320      385F4328 
 7320      78292078 
 7320      00
 7321              	.LASF1140:
 7322 0768 54494D45 		.ascii	"TIMER2A 6\000"
 7322      52324120 
 7322      3600
 7323              	.LASF768:
 7324 0772 50524958 		.ascii	"PRIXLEAST16 __PRI16(X)\000"
 7324      4C454153 
 7324      54313620 
 7324      5F5F5052 
 7324      49313628 
 7325              	.LASF69:
 7326 0789 5F5A3949 		.ascii	"_Z9I2CEnginev\000"
 7326      3243456E 
 7326      67696E65 
 7326      7600
 7327              	.LASF626:
 7328 0797 4E554C4C 		.ascii	"NULL 0\000"
 7328      203000
 7329              	.LASF454:
 7330 079e 5F5F4150 		.ascii	"__APCS_32__ 1\000"
 7330      43535F33 
 7330      325F5F20 
 7330      3100
 7331              	.LASF729:
 7332 07ac 50524969 		.ascii	"PRIiLEAST8 __PRI8(i)\000"
 7332      4C454153 
 7332      5438205F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 145


 7332      5F505249 
 7332      38286929 
 7333              	.LASF737:
 7334 07c1 53434E75 		.ascii	"SCNuLEAST8 __SCN8(u)\000"
 7334      4C454153 
 7334      5438205F 
 7334      5F53434E 
 7334      38287529 
 7335              	.LASF130:
 7336 07d6 5F5F5354 		.ascii	"__STDC_HOSTED__ 1\000"
 7336      44435F48 
 7336      4F535445 
 7336      445F5F20 
 7336      3100
 7337              	.LASF351:
 7338 07e8 5F5F554C 		.ascii	"__ULLFRACT_FBIT__ 64\000"
 7338      4C465241 
 7338      43545F46 
 7338      4249545F 
 7338      5F203634 
 7339              	.LASF717:
 7340 07fd 50524964 		.ascii	"PRId8 __PRI8(d)\000"
 7340      38205F5F 
 7340      50524938 
 7340      28642900 
 7341              	.LASF475:
 7342 080d 5F4C4442 		.ascii	"_LDBL_EQ_DBL 1\000"
 7342      4C5F4551 
 7342      5F44424C 
 7342      203100
 7343              	.LASF718:
 7344 081c 50524969 		.ascii	"PRIi8 __PRI8(i)\000"
 7344      38205F5F 
 7344      50524938 
 7344      28692900 
 7345              	.LASF1118:
 7346 082c 706F7274 		.ascii	"portOutputRegister(P) *(port_to_output_PGM + (P))\000"
 7346      4F757470 
 7346      75745265 
 7346      67697374 
 7346      65722850 
 7347              	.LASF988:
 7348 085e 5F746F6C 		.ascii	"_tolower(__c) ((unsigned char)(__c) - 'A' + 'a')\000"
 7348      6F776572 
 7348      285F5F63 
 7348      29202828 
 7348      756E7369 
 7349              	.LASF600:
 7350 088f 5F524545 		.ascii	"_REENT_MP_RESULT(ptr) ((ptr)->_result)\000"
 7350      4E545F4D 
 7350      505F5245 
 7350      53554C54 
 7350      28707472 
 7351              	.LASF189:
 7352 08b6 5F5F494E 		.ascii	"__INT_FAST64_TYPE__ long long int\000"
 7352      545F4641 
 7352      53543634 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 146


 7352      5F545950 
 7352      455F5F20 
 7353              	.LASF164:
 7354 08d8 5F5F5749 		.ascii	"__WINT_TYPE__ unsigned int\000"
 7354      4E545F54 
 7354      5950455F 
 7354      5F20756E 
 7354      7369676E 
 7355              	.LASF721:
 7356 08f3 50524978 		.ascii	"PRIx8 __PRI8(x)\000"
 7356      38205F5F 
 7356      50524938 
 7356      28782900 
 7357              	.LASF607:
 7358 0903 5F524545 		.ascii	"_REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok"
 7358      4E545F53 
 7358      5452544F 
 7358      4B5F4C41 
 7358      53542870 
 7359 0936 5F6C6173 		.ascii	"_last)\000"
 7359      742900
 7360              	.LASF679:
 7361 093d 55494E54 		.ascii	"UINT_LEAST64_MAX 18446744073709551615ULL\000"
 7361      5F4C4541 
 7361      53543634 
 7361      5F4D4158 
 7361      20313834 
 7362              	.LASF512:
 7363 0966 5F5F5349 		.ascii	"__SIZE_T__ \000"
 7363      5A455F54 
 7363      5F5F2000 
 7364              	.LASF499:
 7365 0972 5F455846 		.ascii	"_EXFNPTR(name,proto) (* name) proto\000"
 7365      4E505452 
 7365      286E616D 
 7365      652C7072 
 7365      6F746F29 
 7366              	.LASF48:
 7367 0996 4932434D 		.ascii	"I2CMasterState\000"
 7367      61737465 
 7367      72537461 
 7367      746500
 7368              	.LASF85:
 7369 09a5 5F5F6E65 		.ascii	"__need___va_list \000"
 7369      65645F5F 
 7369      5F76615F 
 7369      6C697374 
 7369      2000
 7370              	.LASF879:
 7371 09b7 53434E75 		.ascii	"SCNuPTR __SCNPTR(u)\000"
 7371      50545220 
 7371      5F5F5343 
 7371      4E505452 
 7371      28752900 
 7372              	.LASF223:
 7373 09cb 5F5F5549 		.ascii	"__UINT64_MAX__ 18446744073709551615ULL\000"
 7373      4E543634 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 147


 7373      5F4D4158 
 7373      5F5F2031 
 7373      38343436 
 7374              	.LASF324:
 7375 09f2 5F5F5553 		.ascii	"__USFRACT_MAX__ 0XFFP-8UHR\000"
 7375      46524143 
 7375      545F4D41 
 7375      585F5F20 
 7375      30584646 
 7376              	.LASF846:
 7377 0a0d 5052496F 		.ascii	"PRIoFAST64 __PRI64(o)\000"
 7377      46415354 
 7377      3634205F 
 7377      5F505249 
 7377      3634286F 
 7378              	.LASF1096:
 7379 0a23 6D617828 		.ascii	"max(a,b) ((a)>(b)?(a):(b))\000"
 7379      612C6229 
 7379      20282861 
 7379      293E2862 
 7379      293F2861 
 7380              	.LASF1145:
 7381 0a3e 54494D45 		.ascii	"TIMER4A 11\000"
 7381      52344120 
 7381      313100
 7382              	.LASF963:
 7383 0a49 73746465 		.ascii	"stderr (_REENT->_stderr)\000"
 7383      72722028 
 7383      5F524545 
 7383      4E542D3E 
 7383      5F737464 
 7384              	.LASF1114:
 7385 0a62 64696769 		.ascii	"digitalPinToPort(P) *(digital_pin_to_port_PGM + (P)"
 7385      74616C50 
 7385      696E546F 
 7385      506F7274 
 7385      28502920 
 7386 0a95 2900     		.ascii	")\000"
 7387              	.LASF492:
 7388 0a97 5F564F4C 		.ascii	"_VOLATILE volatile\000"
 7388      4154494C 
 7388      4520766F 
 7388      6C617469 
 7388      6C6500
 7389              	.LASF1024:
 7390 0aaa 50524553 		.ascii	"PRESETCTRL MMIO(0x40048004)\000"
 7390      45544354 
 7390      524C204D 
 7390      4D494F28 
 7390      30783430 
 7391              	.LASF656:
 7392 0ac6 494E5438 		.ascii	"INT8_MIN -128\000"
 7392      5F4D494E 
 7392      202D3132 
 7392      3800
 7393              	.LASF562:
 7394 0ad4 5F5F6C6F 		.ascii	"__lock_close_recursive(lock) (_CAST_VOID 0)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 148


 7394      636B5F63 
 7394      6C6F7365 
 7394      5F726563 
 7394      75727369 
 7395              	.LASF774:
 7396 0b00 50524964 		.ascii	"PRIdFAST16 __PRI16(d)\000"
 7396      46415354 
 7396      3136205F 
 7396      5F505249 
 7396      31362864 
 7397              	.LASF658:
 7398 0b16 55494E54 		.ascii	"UINT8_MAX 255\000"
 7398      385F4D41 
 7398      58203235 
 7398      3500
 7399              	.LASF869:
 7400 0b24 5F5F5343 		.ascii	"__SCNPTR(x) __STRINGIFY(ll ##x)\000"
 7400      4E505452 
 7400      28782920 
 7400      5F5F5354 
 7400      52494E47 
 7401              	.LASF421:
 7402 0b44 5F5F4441 		.ascii	"__DA_IBIT__ 32\000"
 7402      5F494249 
 7402      545F5F20 
 7402      333200
 7403              	.LASF341:
 7404 0b53 5F5F554C 		.ascii	"__ULFRACT_FBIT__ 32\000"
 7404      46524143 
 7404      545F4642 
 7404      49545F5F 
 7404      20333200 
 7405              	.LASF1009:
 7406 0b67 5530444C 		.ascii	"U0DLL MMIO(0x40008000)\000"
 7406      4C204D4D 
 7406      494F2830 
 7406      78343030 
 7406      30383030 
 7407              	.LASF501:
 7408 0b7e 5F444546 		.ascii	"_DEFUN_VOID(name) name(_NOARGS)\000"
 7408      554E5F56 
 7408      4F494428 
 7408      6E616D65 
 7408      29206E61 
 7409              	.LASF527:
 7410 0b9e 5F5F7369 		.ascii	"__size_t \000"
 7410      7A655F74 
 7410      2000
 7411              	.LASF811:
 7412 0ba8 5052496F 		.ascii	"PRIoFAST32 __PRI32(o)\000"
 7412      46415354 
 7412      3332205F 
 7412      5F505249 
 7412      3332286F 
 7413              	.LASF651:
 7414 0bbe 5F5F696E 		.ascii	"__int_fast32_t_defined 1\000"
 7414      745F6661 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 149


 7414      73743332 
 7414      5F745F64 
 7414      6566696E 
 7415              	.LASF932:
 7416 0bd7 5F5F534C 		.ascii	"__SLBF 0x0001\000"
 7416      42462030 
 7416      78303030 
 7416      3100
 7417              	.LASF1081:
 7418 0be5 50492033 		.ascii	"PI 3.1415926535897932384626433832795\000"
 7418      2E313431 
 7418      35393236 
 7418      35333538 
 7418      39373933 
 7419              	.LASF880:
 7420 0c0a 53434E78 		.ascii	"SCNxPTR __SCNPTR(x)\000"
 7420      50545220 
 7420      5F5F5343 
 7420      4E505452 
 7420      28782900 
 7421              	.LASF376:
 7422 0c1e 5F5F4C41 		.ascii	"__LACCUM_FBIT__ 31\000"
 7422      4343554D 
 7422      5F464249 
 7422      545F5F20 
 7422      333100
 7423              	.LASF874:
 7424 0c31 50524978 		.ascii	"PRIxPTR __PRIPTR(x)\000"
 7424      50545220 
 7424      5F5F5052 
 7424      49505452 
 7424      28782900 
 7425              	.LASF478:
 7426 0c45 5F504F49 		.ascii	"_POINTER_INT long\000"
 7426      4E544552 
 7426      5F494E54 
 7426      206C6F6E 
 7426      6700
 7427              	.LASF320:
 7428 0c57 5F5F5346 		.ascii	"__SFRACT_EPSILON__ 0x1P-7HR\000"
 7428      52414354 
 7428      5F455053 
 7428      494C4F4E 
 7428      5F5F2030 
 7429              	.LASF516:
 7430 0c73 5F545F53 		.ascii	"_T_SIZE \000"
 7430      495A4520 
 7430      00
 7431              	.LASF229:
 7432 0c7c 5F5F494E 		.ascii	"__INT32_C(c) c ## L\000"
 7432      5433325F 
 7432      43286329 
 7432      20632023 
 7432      23204C00 
 7433              	.LASF410:
 7434 0c90 5F5F5553 		.ascii	"__USQ_FBIT__ 32\000"
 7434      515F4642 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 150


 7434      49545F5F 
 7434      20333200 
 7435              	.LASF155:
 7436 0ca0 5F5F4F52 		.ascii	"__ORDER_BIG_ENDIAN__ 4321\000"
 7436      4445525F 
 7436      4249475F 
 7436      454E4449 
 7436      414E5F5F 
 7437              	.LASF975:
 7438 0cba 5F5F7366 		.ascii	"__sferror(p) (((p)->_flags & __SERR) != 0)\000"
 7438      6572726F 
 7438      72287029 
 7438      20282828 
 7438      70292D3E 
 7439              	.LASF1052:
 7440 0ce5 49435052 		.ascii	"ICPR MMIO(0xE000E280)\000"
 7440      204D4D49 
 7440      4F283078 
 7440      45303030 
 7440      45323830 
 7441              	.LASF400:
 7442 0cfb 5F5F5351 		.ascii	"__SQ_FBIT__ 31\000"
 7442      5F464249 
 7442      545F5F20 
 7442      333100
 7443              	.LASF860:
 7444 0d0a 50524975 		.ascii	"PRIuMAX __PRIMAX(u)\000"
 7444      4D415820 
 7444      5F5F5052 
 7444      494D4158 
 7444      28752900 
 7445              	.LASF1112:
 7446 0d1e 62697457 		.ascii	"bitWrite(value,bit,bitvalue) (bitvalue ? bitSet(val"
 7446      72697465 
 7446      2876616C 
 7446      75652C62 
 7446      69742C62 
 7447 0d51 75652C20 		.ascii	"ue, bit) : bitClear(value, bit))\000"
 7447      62697429 
 7447      203A2062 
 7447      6974436C 
 7447      65617228 
 7448              	.LASF941:
 7449 0d72 5F5F5353 		.ascii	"__SSTR 0x0200\000"
 7449      54522030 
 7449      78303230 
 7449      3000
 7450              	.LASF844:
 7451 0d80 50524964 		.ascii	"PRIdFAST64 __PRI64(d)\000"
 7451      46415354 
 7451      3634205F 
 7451      5F505249 
 7451      36342864 
 7452              	.LASF939:
 7453 0d96 5F5F534D 		.ascii	"__SMBF 0x0080\000"
 7453      42462030 
 7453      78303038 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 151


 7453      3000
 7454              	.LASF613:
 7455 0da4 5F524545 		.ascii	"_REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mb"
 7455      4E545F4D 
 7455      42535254 
 7455      4F574353 
 7455      5F535441 
 7456 0dd7 7372746F 		.ascii	"srtowcs_state)\000"
 7456      7763735F 
 7456      73746174 
 7456      652900
 7457              	.LASF408:
 7458 0de6 5F5F5548 		.ascii	"__UHQ_FBIT__ 16\000"
 7458      515F4642 
 7458      49545F5F 
 7458      20313600 
 7459              	.LASF582:
 7460 0df6 5F524545 		.ascii	"_REENT_EMERGENCY_SIZE 25\000"
 7460      4E545F45 
 7460      4D455247 
 7460      454E4359 
 7460      5F53495A 
 7461              	.LASF934:
 7462 0e0f 5F5F5352 		.ascii	"__SRD 0x0004\000"
 7462      44203078 
 7462      30303034 
 7462      00
 7463              	.LASF955:
 7464 0e1c 4C5F746D 		.ascii	"L_tmpnam FILENAME_MAX\000"
 7464      706E616D 
 7464      2046494C 
 7464      454E414D 
 7464      455F4D41 
 7465              	.LASF199:
 7466 0e32 5F5F5343 		.ascii	"__SCHAR_MAX__ 127\000"
 7466      4841525F 
 7466      4D41585F 
 7466      5F203132 
 7466      3700
 7467              	.LASF300:
 7468 0e44 5F5F4445 		.ascii	"__DEC32_EPSILON__ 1E-6DF\000"
 7468      4333325F 
 7468      45505349 
 7468      4C4F4E5F 
 7468      5F203145 
 7469              	.LASF1007:
 7470 0e5d 55305242 		.ascii	"U0RBR MMIO(0x40008000)\000"
 7470      52204D4D 
 7470      494F2830 
 7470      78343030 
 7470      30383030 
 7471              	.LASF900:
 7472 0e74 4E554C4C 		.ascii	"NULL\000"
 7472      00
 7473              	.LASF589:
 7474 0e79 5F524545 		.ascii	"_REENT_CHECK_MP(ptr) \000"
 7474      4E545F43 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 152


 7474      4845434B 
 7474      5F4D5028 
 7474      70747229 
 7475              	.LASF377:
 7476 0e8f 5F5F4C41 		.ascii	"__LACCUM_IBIT__ 32\000"
 7476      4343554D 
 7476      5F494249 
 7476      545F5F20 
 7476      333200
 7477              	.LASF555:
 7478 0ea2 5F5F4558 		.ascii	"__EXP\000"
 7478      5000
 7479              	.LASF809:
 7480 0ea8 50524964 		.ascii	"PRIdFAST32 __PRI32(d)\000"
 7480      46415354 
 7480      3332205F 
 7480      5F505249 
 7480      33322864 
 7481              	.LASF467:
 7482 0ebe 5F5F4E45 		.ascii	"__NEWLIB_H__ 1\000"
 7482      574C4942 
 7482      5F485F5F 
 7482      203100
 7483              	.LASF217:
 7484 0ecd 5F5F494E 		.ascii	"__INT16_MAX__ 32767\000"
 7484      5431365F 
 7484      4D41585F 
 7484      5F203332 
 7484      37363700 
 7485              	.LASF275:
 7486 0ee1 5F5F4442 		.ascii	"__DBL_MIN__ double(2.2250738585072014e-308L)\000"
 7486      4C5F4D49 
 7486      4E5F5F20 
 7486      646F7562 
 7486      6C652832 
 7487              	.LASF776:
 7488 0f0e 5052496F 		.ascii	"PRIoFAST16 __PRI16(o)\000"
 7488      46415354 
 7488      3136205F 
 7488      5F505249 
 7488      3136286F 
 7489              	.LASF1006:
 7490 0f24 4D4D494F 		.ascii	"MMIO(addr) (*(volatile uint32_t*)addr)\000"
 7490      28616464 
 7490      72292028 
 7490      2A28766F 
 7490      6C617469 
 7491              	.LASF459:
 7492 0f4b 5F5F5646 		.ascii	"__VFP_FP__ 1\000"
 7492      505F4650 
 7492      5F5F2031 
 7492      00
 7493              	.LASF348:
 7494 0f58 5F5F4C4C 		.ascii	"__LLFRACT_MIN__ (-0.5LLR-0.5LLR)\000"
 7494      46524143 
 7494      545F4D49 
 7494      4E5F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 153


 7494      282D302E 
 7495              	.LASF804:
 7496 0f79 53434E64 		.ascii	"SCNdLEAST32 __SCN32(d)\000"
 7496      4C454153 
 7496      54333220 
 7496      5F5F5343 
 7496      4E333228 
 7497              	.LASF210:
 7498 0f90 5F5F494E 		.ascii	"__INTMAX_MAX__ 9223372036854775807LL\000"
 7498      544D4158 
 7498      5F4D4158 
 7498      5F5F2039 
 7498      32323333 
 7499              	.LASF479:
 7500 0fb5 5F5F5241 		.ascii	"__RAND_MAX\000"
 7500      4E445F4D 
 7500      415800
 7501              	.LASF96:
 7502 0fc0 49324353 		.ascii	"I2CSLAVE 0x02\000"
 7502      4C415645 
 7502      20307830 
 7502      3200
 7503              	.LASF194:
 7504 0fce 5F5F494E 		.ascii	"__INTPTR_TYPE__ int\000"
 7504      54505452 
 7504      5F545950 
 7504      455F5F20 
 7504      696E7400 
 7505              	.LASF671:
 7506 0fe2 494E545F 		.ascii	"INT_LEAST32_MIN (-2147483647L-1)\000"
 7506      4C454153 
 7506      5433325F 
 7506      4D494E20 
 7506      282D3231 
 7507              	.LASF848:
 7508 1003 50524978 		.ascii	"PRIxFAST64 __PRI64(x)\000"
 7508      46415354 
 7508      3634205F 
 7508      5F505249 
 7508      36342878 
 7509              	.LASF1087:
 7510 1019 44495350 		.ascii	"DISPLAY 0x1\000"
 7510      4C415920 
 7510      30783100 
 7511              	.LASF1054:
 7512 1025 49324330 		.ascii	"I2C0STAT MMIO(0x40000004)\000"
 7512      53544154 
 7512      204D4D49 
 7512      4F283078 
 7512      34303030 
 7513              	.LASF1132:
 7514 103f 504B2031 		.ascii	"PK 11\000"
 7514      3100
 7515              	.LASF477:
 7516 1045 5F5F474E 		.ascii	"__GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_M"
 7516      55435F50 
 7516      52455245 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 154


 7516      51286D61 
 7516      6A2C6D69 
 7517 1078 494E4F52 		.ascii	"INOR__ >= ((maj) << 16) + (min))\000"
 7517      5F5F203E 
 7517      3D202828 
 7517      6D616A29 
 7517      203C3C20 
 7518              	.LASF83:
 7519 1099 53747265 		.ascii	"Stream_h \000"
 7519      616D5F68 
 7519      2000
 7520              	.LASF736:
 7521 10a3 53434E6F 		.ascii	"SCNoLEAST8 __SCN8(o)\000"
 7521      4C454153 
 7521      5438205F 
 7521      5F53434E 
 7521      38286F29 
 7522              	.LASF294:
 7523 10b8 5F5F4C44 		.ascii	"__LDBL_HAS_QUIET_NAN__ 1\000"
 7523      424C5F48 
 7523      41535F51 
 7523      55494554 
 7523      5F4E414E 
 7524              	.LASF1055:
 7525 10d1 49324330 		.ascii	"I2C0DAT MMIO(0x40000008)\000"
 7525      44415420 
 7525      4D4D494F 
 7525      28307834 
 7525      30303030 
 7526              	.LASF700:
 7527 10ea 57434841 		.ascii	"WCHAR_MAX __WCHAR_MAX__\000"
 7527      525F4D41 
 7527      58205F5F 
 7527      57434841 
 7527      525F4D41 
 7528              	.LASF722:
 7529 1102 50524958 		.ascii	"PRIX8 __PRI8(X)\000"
 7529      38205F5F 
 7529      50524938 
 7529      28582900 
 7530              	.LASF514:
 7531 1112 5F535953 		.ascii	"_SYS_SIZE_T_H \000"
 7531      5F53495A 
 7531      455F545F 
 7531      482000
 7532              	.LASF818:
 7533 1121 53434E75 		.ascii	"SCNuFAST32 __SCN32(u)\000"
 7533      46415354 
 7533      3332205F 
 7533      5F53434E 
 7533      33322875 
 7534              	.LASF41:
 7535 1137 4932634D 		.ascii	"I2cMode\000"
 7535      6F646500 
 7536              	.LASF436:
 7537 113f 5F5F5743 		.ascii	"__WCHAR_UNSIGNED__ 1\000"
 7537      4841525F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 155


 7537      554E5349 
 7537      474E4544 
 7537      5F5F2031 
 7538              	.LASF182:
 7539 1154 5F5F5549 		.ascii	"__UINT_LEAST8_TYPE__ unsigned char\000"
 7539      4E545F4C 
 7539      45415354 
 7539      385F5459 
 7539      50455F5F 
 7540              	.LASF101:
 7541 1177 4932435F 		.ascii	"I2C_STARTED 1\000"
 7541      53544152 
 7541      54454420 
 7541      3100
 7542              	.LASF366:
 7543 1185 5F5F4143 		.ascii	"__ACCUM_FBIT__ 15\000"
 7543      43554D5F 
 7543      46424954 
 7543      5F5F2031 
 7543      3500
 7544              	.LASF822:
 7545 1197 50524964 		.ascii	"PRId64 __PRI64(d)\000"
 7545      3634205F 
 7545      5F505249 
 7545      36342864 
 7545      2900
 7546              	.LASF986:
 7547 11a9 70757463 		.ascii	"putchar(x) putc(x, stdout)\000"
 7547      68617228 
 7547      78292070 
 7547      75746328 
 7547      782C2073 
 7548              	.LASF686:
 7549 11c4 494E545F 		.ascii	"INT_FAST32_MIN (-__STDINT_EXP(INT_MAX)-1)\000"
 7549      46415354 
 7549      33325F4D 
 7549      494E2028 
 7549      2D5F5F53 
 7550              	.LASF276:
 7551 11ee 5F5F4442 		.ascii	"__DBL_EPSILON__ double(2.2204460492503131e-16L)\000"
 7551      4C5F4550 
 7551      53494C4F 
 7551      4E5F5F20 
 7551      646F7562 
 7552              	.LASF247:
 7553 121e 5F5F5549 		.ascii	"__UINT_FAST64_MAX__ 18446744073709551615ULL\000"
 7553      4E545F46 
 7553      41535436 
 7553      345F4D41 
 7553      585F5F20 
 7554              	.LASF695:
 7555 124a 53495A45 		.ascii	"SIZE_MAX __SIZE_MAX__\000"
 7555      5F4D4158 
 7555      205F5F53 
 7555      495A455F 
 7555      4D41585F 
 7556              	.LASF128:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 156


 7557 1260 5F5F5354 		.ascii	"__STDC__ 1\000"
 7557      44435F5F 
 7557      203100
 7558              	.LASF118:
 7559 126b 4932434F 		.ascii	"I2CONCLR_AAC (0x1<<2)\000"
 7559      4E434C52 
 7559      5F414143 
 7559      20283078 
 7559      313C3C32 
 7560              	.LASF758:
 7561 1281 53434E64 		.ascii	"SCNd16 __SCN16(d)\000"
 7561      3136205F 
 7561      5F53434E 
 7561      31362864 
 7561      2900
 7562              	.LASF113:
 7563 1293 4932434F 		.ascii	"I2CONSET_I2EN (0x1<<6)\000"
 7563      4E534554 
 7563      5F493245 
 7563      4E202830 
 7563      78313C3C 
 7564              	.LASF551:
 7565 12aa 5F5F5F69 		.ascii	"___int_least16_t_defined 1\000"
 7565      6E745F6C 
 7565      65617374 
 7565      31365F74 
 7565      5F646566 
 7566              	.LASF204:
 7567 12c5 5F5F5743 		.ascii	"__WCHAR_MAX__ 4294967295U\000"
 7567      4841525F 
 7567      4D41585F 
 7567      5F203432 
 7567      39343936 
 7568              	.LASF310:
 7569 12df 5F5F4445 		.ascii	"__DEC128_MIN_EXP__ (-6142)\000"
 7569      43313238 
 7569      5F4D494E 
 7569      5F455850 
 7569      5F5F2028 
 7570              	.LASF186:
 7571 12fa 5F5F494E 		.ascii	"__INT_FAST8_TYPE__ int\000"
 7571      545F4641 
 7571      5354385F 
 7571      54595045 
 7571      5F5F2069 
 7572              	.LASF508:
 7573 1311 5F4E4F49 		.ascii	"_NOINLINE __attribute__ ((__noinline__))\000"
 7573      4E4C494E 
 7573      45205F5F 
 7573      61747472 
 7573      69627574 
 7574              	.LASF428:
 7575 133a 5F5F5544 		.ascii	"__UDA_FBIT__ 32\000"
 7575      415F4642 
 7575      49545F5F 
 7575      20333200 
 7576              	.LASF585:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 157


 7577 134a 5F4E5F4C 		.ascii	"_N_LISTS 30\000"
 7577      49535453 
 7577      20333000 
 7578              	.LASF365:
 7579 1356 5F5F5553 		.ascii	"__USACCUM_EPSILON__ 0x1P-8UHK\000"
 7579      41434355 
 7579      4D5F4550 
 7579      53494C4F 
 7579      4E5F5F20 
 7580              	.LASF213:
 7581 1374 5F5F5549 		.ascii	"__UINTMAX_C(c) c ## ULL\000"
 7581      4E544D41 
 7581      585F4328 
 7581      63292063 
 7581      20232320 
 7582              	.LASF64:
 7583 138c 4932435F 		.ascii	"I2C_IRQHandler\000"
 7583      49525148 
 7583      616E646C 
 7583      657200
 7584              	.LASF159:
 7585 139b 5F5F5349 		.ascii	"__SIZEOF_POINTER__ 4\000"
 7585      5A454F46 
 7585      5F504F49 
 7585      4E544552 
 7585      5F5F2034 
 7586              	.LASF178:
 7587 13b0 5F5F494E 		.ascii	"__INT_LEAST8_TYPE__ signed char\000"
 7587      545F4C45 
 7587      41535438 
 7587      5F545950 
 7587      455F5F20 
 7588              	.LASF716:
 7589 13d0 5F5F5343 		.ascii	"__SCN8(x) __STRINGIFY(hh ##x)\000"
 7589      4E382878 
 7589      29205F5F 
 7589      53545249 
 7589      4E474946 
 7590              	.LASF437:
 7591 13ee 5F5F4743 		.ascii	"__GCC_ATOMIC_BOOL_LOCK_FREE 1\000"
 7591      435F4154 
 7591      4F4D4943 
 7591      5F424F4F 
 7591      4C5F4C4F 
 7592              	.LASF507:
 7593 140c 5F454C49 		.ascii	"_ELIDABLE_INLINE extern __inline__ _ATTRIBUTE ((__a"
 7593      4441424C 
 7593      455F494E 
 7593      4C494E45 
 7593      20657874 
 7594 143f 6C776179 		.ascii	"lways_inline__))\000"
 7594      735F696E 
 7594      6C696E65 
 7594      5F5F2929 
 7594      00
 7595              	.LASF1053:
 7596 1450 49324330 		.ascii	"I2C0CONSET MMIO(0x40000000)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 158


 7596      434F4E53 
 7596      4554204D 
 7596      4D494F28 
 7596      30783430 
 7597              	.LASF834:
 7598 146c 50524969 		.ascii	"PRIiLEAST64 __PRI64(i)\000"
 7598      4C454153 
 7598      54363420 
 7598      5F5F5052 
 7598      49363428 
 7599              	.LASF1086:
 7600 1483 53455249 		.ascii	"SERIAL 0x0\000"
 7600      414C2030 
 7600      783000
 7601              	.LASF885:
 7602 148e 5F5F494E 		.ascii	"__INTTYPES_DEFINED__ \000"
 7602      54545950 
 7602      45535F44 
 7602      4546494E 
 7602      45445F5F 
 7603              	.LASF241:
 7604 14a4 5F5F494E 		.ascii	"__INT_FAST16_MAX__ 2147483647\000"
 7604      545F4641 
 7604      53543136 
 7604      5F4D4158 
 7604      5F5F2032 
 7605              	.LASF1049:
 7606 14c2 49534552 		.ascii	"ISER MMIO(0xE000E100)\000"
 7606      204D4D49 
 7606      4F283078 
 7606      45303030 
 7606      45313030 
 7607              	.LASF422:
 7608 14d8 5F5F5441 		.ascii	"__TA_FBIT__ 63\000"
 7608      5F464249 
 7608      545F5F20 
 7608      363300
 7609              	.LASF460:
 7610 14e7 5F5F5448 		.ascii	"__THUMB_INTERWORK__ 1\000"
 7610      554D425F 
 7610      494E5445 
 7610      52574F52 
 7610      4B5F5F20 
 7611              	.LASF354:
 7612 14fd 5F5F554C 		.ascii	"__ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR\000"
 7612      4C465241 
 7612      43545F4D 
 7612      41585F5F 
 7612      20305846 
 7613              	.LASF767:
 7614 1529 50524978 		.ascii	"PRIxLEAST16 __PRI16(x)\000"
 7614      4C454153 
 7614      54313620 
 7614      5F5F5052 
 7614      49313628 
 7615              	.LASF216:
 7616 1540 5F5F494E 		.ascii	"__INT8_MAX__ 127\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 159


 7616      54385F4D 
 7616      41585F5F 
 7616      20313237 
 7616      00
 7617              	.LASF751:
 7618 1551 5F5F5343 		.ascii	"__SCN16(x) __STRINGIFY(h ##x)\000"
 7618      4E313628 
 7618      7829205F 
 7618      5F535452 
 7618      494E4749 
 7619              	.LASF691:
 7620 156f 55494E54 		.ascii	"UINT_FAST64_MAX UINT_LEAST64_MAX\000"
 7620      5F464153 
 7620      5436345F 
 7620      4D415820 
 7620      55494E54 
 7621              	.LASF523:
 7622 1590 5F53495A 		.ascii	"_SIZE_T_DECLARED \000"
 7622      455F545F 
 7622      4445434C 
 7622      41524544 
 7622      2000
 7623              	.LASF168:
 7624 15a2 5F5F4348 		.ascii	"__CHAR32_TYPE__ long unsigned int\000"
 7624      41523332 
 7624      5F545950 
 7624      455F5F20 
 7624      6C6F6E67 
 7625              	.LASF295:
 7626 15c4 5F5F4445 		.ascii	"__DEC32_MANT_DIG__ 7\000"
 7626      4333325F 
 7626      4D414E54 
 7626      5F444947 
 7626      5F5F2037 
 7627              	.LASF676:
 7628 15d9 55494E54 		.ascii	"UINT64_MAX 18446744073709551615ULL\000"
 7628      36345F4D 
 7628      41582031 
 7628      38343436 
 7628      37343430 
 7629              	.LASF98:
 7630 15fc 52454144 		.ascii	"READ_WRITE 0x01\000"
 7630      5F575249 
 7630      54452030 
 7630      78303100 
 7631              	.LASF257:
 7632 160c 5F5F464C 		.ascii	"__FLT_MAX_EXP__ 128\000"
 7632      545F4D41 
 7632      585F4558 
 7632      505F5F20 
 7632      31323800 
 7633              	.LASF145:
 7634 1620 5F5F5349 		.ascii	"__SIZEOF_LONG__ 4\000"
 7634      5A454F46 
 7634      5F4C4F4E 
 7634      475F5F20 
 7634      3400
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 160


 7635              	.LASF788:
 7636 1632 50524969 		.ascii	"PRIi32 __PRI32(i)\000"
 7636      3332205F 
 7636      5F505249 
 7636      33322869 
 7636      2900
 7637              	.LASF505:
 7638 1644 5F504152 		.ascii	"_PARAMS(paramlist) paramlist\000"
 7638      414D5328 
 7638      70617261 
 7638      6D6C6973 
 7638      74292070 
 7639              	.LASF958:
 7640 1661 5345454B 		.ascii	"SEEK_CUR 1\000"
 7640      5F435552 
 7640      203100
 7641              	.LASF819:
 7642 166c 53434E78 		.ascii	"SCNxFAST32 __SCN32(x)\000"
 7642      46415354 
 7642      3332205F 
 7642      5F53434E 
 7642      33322878 
 7643              	.LASF663:
 7644 1682 494E5431 		.ascii	"INT16_MAX 32767\000"
 7644      365F4D41 
 7644      58203332 
 7644      37363700 
 7645              	.LASF732:
 7646 1692 50524978 		.ascii	"PRIxLEAST8 __PRI8(x)\000"
 7646      4C454153 
 7646      5438205F 
 7646      5F505249 
 7646      38287829 
 7647              	.LASF859:
 7648 16a7 5052496F 		.ascii	"PRIoMAX __PRIMAX(o)\000"
 7648      4D415820 
 7648      5F5F5052 
 7648      494D4158 
 7648      286F2900 
 7649              	.LASF904:
 7650 16bb 5F434C4F 		.ascii	"_CLOCK_T_ unsigned long\000"
 7650      434B5F54 
 7650      5F20756E 
 7650      7369676E 
 7650      6564206C 
 7651              	.LASF61:
 7652 16d3 57697265 		.ascii	"Wire.cpp\000"
 7652      2E637070 
 7652      00
 7653              	.LASF306:
 7654 16dc 5F5F4445 		.ascii	"__DEC64_MAX__ 9.999999999999999E384DD\000"
 7654      4336345F 
 7654      4D41585F 
 7654      5F20392E 
 7654      39393939 
 7655              	.LASF67:
 7656 1702 5F5A3749 		.ascii	"_Z7I2CInitm\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 161


 7656      3243496E 
 7656      69746D00 
 7657              	.LASF628:
 7658 170e 45584954 		.ascii	"EXIT_SUCCESS 0\000"
 7658      5F535543 
 7658      43455353 
 7658      203000
 7659              	.LASF430:
 7660 171d 5F5F5554 		.ascii	"__UTA_FBIT__ 64\000"
 7660      415F4642 
 7660      49545F5F 
 7660      20363400 
 7661              	.LASF953:
 7662 172d 464F5045 		.ascii	"FOPEN_MAX 20\000"
 7662      4E5F4D41 
 7662      58203230 
 7662      00
 7663              	.LASF42:
 7664 173a 7175616E 		.ascii	"quantity\000"
 7664      74697479 
 7664      00
 7665              	.LASF259:
 7666 1743 5F5F464C 		.ascii	"__FLT_DECIMAL_DIG__ 9\000"
 7666      545F4445 
 7666      43494D41 
 7666      4C5F4449 
 7666      475F5F20 
 7667              	.LASF99:
 7668 1759 52445F42 		.ascii	"RD_BIT 0x01\000"
 7668      49542030 
 7668      78303100 
 7669              	.LASF177:
 7670 1765 5F5F5549 		.ascii	"__UINT64_TYPE__ long long unsigned int\000"
 7670      4E543634 
 7670      5F545950 
 7670      455F5F20 
 7670      6C6F6E67 
 7671              	.LASF12:
 7672 178c 75696E74 		.ascii	"uint8_t\000"
 7672      385F7400 
 7673              	.LASF693:
 7674 1794 494E544D 		.ascii	"INTMAX_MIN (-INTMAX_MAX - 1)\000"
 7674      41585F4D 
 7674      494E2028 
 7674      2D494E54 
 7674      4D41585F 
 7675              	.LASF1091:
 7676 17b1 46414C4C 		.ascii	"FALLING 2\000"
 7676      494E4720 
 7676      3200
 7677              	.LASF612:
 7678 17bb 5F524545 		.ascii	"_REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrt"
 7678      4E545F4D 
 7678      4252544F 
 7678      57435F53 
 7678      54415445 
 7679 17ee 6F77635F 		.ascii	"owc_state)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 162


 7679      73746174 
 7679      652900
 7680              	.LASF599:
 7681 17f9 5F524545 		.ascii	"_REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._ad"
 7681      4E545F52 
 7681      414E4434 
 7681      385F4144 
 7681      44287074 
 7682 182c 642900   		.ascii	"d)\000"
 7683              	.LASF326:
 7684 182f 5F5F4652 		.ascii	"__FRACT_FBIT__ 15\000"
 7684      4143545F 
 7684      46424954 
 7684      5F5F2031 
 7684      3500
 7685              	.LASF390:
 7686 1841 5F5F4C4C 		.ascii	"__LLACCUM_EPSILON__ 0x1P-31LLK\000"
 7686      41434355 
 7686      4D5F4550 
 7686      53494C4F 
 7686      4E5F5F20 
 7687              	.LASF440:
 7688 1860 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR32_T_LOCK_FREE 1\000"
 7688      435F4154 
 7688      4F4D4943 
 7688      5F434841 
 7688      5233325F 
 7689              	.LASF504:
 7690 1882 5F4C4F4E 		.ascii	"_LONG_LONG_TYPE long long\000"
 7690      475F4C4F 
 7690      4E475F54 
 7690      59504520 
 7690      6C6F6E67 
 7691              	.LASF133:
 7692 189c 5F5F474E 		.ascii	"__GNUC_PATCHLEVEL__ 4\000"
 7692      55435F50 
 7692      41544348 
 7692      4C455645 
 7692      4C5F5F20 
 7693              	.LASF985:
 7694 18b2 67657463 		.ascii	"getchar() getc(stdin)\000"
 7694      68617228 
 7694      29206765 
 7694      74632873 
 7694      7464696E 
 7695              	.LASF577:
 7696 18c8 5F52414E 		.ascii	"_RAND48_SEED_2 (0x1234)\000"
 7696      4434385F 
 7696      53454544 
 7696      5F322028 
 7696      30783132 
 7697              	.LASF1045:
 7698 18e0 544D5231 		.ascii	"TMR16B0MR0 MMIO(0x4000C018)\000"
 7698      3642304D 
 7698      5230204D 
 7698      4D494F28 
 7698      30783430 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 163


 7699              	.LASF28:
 7700 18fc 5F5A4E37 		.ascii	"_ZN7TwoWire11requestFromEhh\000"
 7700      54776F57 
 7700      69726531 
 7700      31726571 
 7700      75657374 
 7701              	.LASF655:
 7702 1918 55494E54 		.ascii	"UINTPTR_MAX __UINTPTR_MAX__\000"
 7702      5054525F 
 7702      4D415820 
 7702      5F5F5549 
 7702      4E545054 
 7703              	.LASF601:
 7704 1934 5F524545 		.ascii	"_REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)\000"
 7704      4E545F4D 
 7704      505F5245 
 7704      53554C54 
 7704      5F4B2870 
 7705              	.LASF798:
 7706 195f 50524964 		.ascii	"PRIdLEAST32 __PRI32(d)\000"
 7706      4C454153 
 7706      54333220 
 7706      5F5F5052 
 7706      49333228 
 7707              	.LASF646:
 7708 1976 5F5F696E 		.ascii	"__int_least32_t_defined 1\000"
 7708      745F6C65 
 7708      61737433 
 7708      325F745F 
 7708      64656669 
 7709              	.LASF1015:
 7710 1990 55304C53 		.ascii	"U0LSR MMIO(0x40008014)\000"
 7710      52204D4D 
 7710      494F2830 
 7710      78343030 
 7710      30383031 
 7711              	.LASF704:
 7712 19a7 494E5438 		.ascii	"INT8_C(x) x\000"
 7712      5F432878 
 7712      29207800 
 7713              	.LASF615:
 7714 19b3 5F524545 		.ascii	"_REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wc"
 7714      4E545F57 
 7714      43535254 
 7714      4F4D4253 
 7714      5F535441 
 7715 19e6 7372746F 		.ascii	"srtombs_state)\000"
 7715      6D62735F 
 7715      73746174 
 7715      652900
 7716              	.LASF591:
 7717 19f5 5F524545 		.ascii	"_REENT_CHECK_ASCTIME_BUF(ptr) \000"
 7717      4E545F43 
 7717      4845434B 
 7717      5F415343 
 7717      54494D45 
 7718              	.LASF815:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 164


 7719 1a14 53434E64 		.ascii	"SCNdFAST32 __SCN32(d)\000"
 7719      46415354 
 7719      3332205F 
 7719      5F53434E 
 7719      33322864 
 7720              	.LASF522:
 7721 1a2a 5F425344 		.ascii	"_BSD_SIZE_T_DEFINED_ \000"
 7721      5F53495A 
 7721      455F545F 
 7721      44454649 
 7721      4E45445F 
 7722              	.LASF682:
 7723 1a40 55494E54 		.ascii	"UINT_FAST8_MAX (__STDINT_EXP(INT_MAX)*2U+1U)\000"
 7723      5F464153 
 7723      54385F4D 
 7723      41582028 
 7723      5F5F5354 
 7724              	.LASF192:
 7725 1a6d 5F5F5549 		.ascii	"__UINT_FAST32_TYPE__ unsigned int\000"
 7725      4E545F46 
 7725      41535433 
 7725      325F5459 
 7725      50455F5F 
 7726              	.LASF524:
 7727 1a8f 5F5F5F69 		.ascii	"___int_size_t_h \000"
 7727      6E745F73 
 7727      697A655F 
 7727      745F6820 
 7727      00
 7728              	.LASF148:
 7729 1aa0 5F5F5349 		.ascii	"__SIZEOF_FLOAT__ 4\000"
 7729      5A454F46 
 7729      5F464C4F 
 7729      41545F5F 
 7729      203400
 7730              	.LASF357:
 7731 1ab3 5F5F5341 		.ascii	"__SACCUM_IBIT__ 8\000"
 7731      4343554D 
 7731      5F494249 
 7731      545F5F20 
 7731      3800
 7732              	.LASF1079:
 7733 1ac5 74727565 		.ascii	"true 0x1\000"
 7733      20307831 
 7733      00
 7734              	.LASF258:
 7735 1ace 5F5F464C 		.ascii	"__FLT_MAX_10_EXP__ 38\000"
 7735      545F4D41 
 7735      585F3130 
 7735      5F455850 
 7735      5F5F2033 
 7736              	.LASF779:
 7737 1ae4 50524958 		.ascii	"PRIXFAST16 __PRI16(X)\000"
 7737      46415354 
 7737      3136205F 
 7737      5F505249 
 7737      31362858 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 165


 7738              	.LASF329:
 7739 1afa 5F5F4652 		.ascii	"__FRACT_MAX__ 0X7FFFP-15R\000"
 7739      4143545F 
 7739      4D41585F 
 7739      5F203058 
 7739      37464646 
 7740              	.LASF35:
 7741 1b14 626F6F6C 		.ascii	"bool\000"
 7741      00
 7742              	.LASF270:
 7743 1b19 5F5F4442 		.ascii	"__DBL_MIN_10_EXP__ (-307)\000"
 7743      4C5F4D49 
 7743      4E5F3130 
 7743      5F455850 
 7743      5F5F2028 
 7744              	.LASF82:
 7745 1b33 54776F57 		.ascii	"TwoWire_h \000"
 7745      6972655F 
 7745      682000
 7746              	.LASF219:
 7747 1b3e 5F5F494E 		.ascii	"__INT64_MAX__ 9223372036854775807LL\000"
 7747      5436345F 
 7747      4D41585F 
 7747      5F203932 
 7747      32333337 
 7748              	.LASF136:
 7749 1b62 5F5F4154 		.ascii	"__ATOMIC_SEQ_CST 5\000"
 7749      4F4D4943 
 7749      5F534551 
 7749      5F435354 
 7749      203500
 7750              	.LASF483:
 7751 1b75 5F524541 		.ascii	"_READ_WRITE_RETURN_TYPE int\000"
 7751      445F5752 
 7751      4954455F 
 7751      52455455 
 7751      524E5F54 
 7752              	.LASF970:
 7753 1b91 5F5F7367 		.ascii	"__sgetc_raw_r(__ptr,__f) (--(__f)->_r < 0 ? __srget"
 7753      6574635F 
 7753      7261775F 
 7753      72285F5F 
 7753      7074722C 
 7754 1bc4 5F72285F 		.ascii	"_r(__ptr, __f) : (int)(*(__f)->_p++))\000"
 7754      5F707472 
 7754      2C205F5F 
 7754      6629203A 
 7754      2028696E 
 7755              	.LASF875:
 7756 1bea 50524958 		.ascii	"PRIXPTR __PRIPTR(X)\000"
 7756      50545220 
 7756      5F5F5052 
 7756      49505452 
 7756      28582900 
 7757              	.LASF1057:
 7758 1bfe 49324330 		.ascii	"I2C0SCLH MMIO(0x40000010)\000"
 7758      53434C48 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 166


 7758      204D4D49 
 7758      4F283078 
 7758      34303030 
 7759              	.LASF88:
 7760 1c18 4E45575F 		.ascii	"NEW_H \000"
 7760      482000
 7761              	.LASF570:
 7762 1c1f 5F5F6E65 		.ascii	"__need_wint_t\000"
 7762      65645F77 
 7762      696E745F 
 7762      7400
 7763              	.LASF1010:
 7764 1c2d 5530444C 		.ascii	"U0DLM MMIO(0x40008004)\000"
 7764      4D204D4D 
 7764      494F2830 
 7764      78343030 
 7764      30383030 
 7765              	.LASF828:
 7766 1c44 53434E64 		.ascii	"SCNd64 __SCN64(d)\000"
 7766      3634205F 
 7766      5F53434E 
 7766      36342864 
 7766      2900
 7767              	.LASF858:
 7768 1c56 50524969 		.ascii	"PRIiMAX __PRIMAX(i)\000"
 7768      4D415820 
 7768      5F5F5052 
 7768      494D4158 
 7768      28692900 
 7769              	.LASF938:
 7770 1c6a 5F5F5345 		.ascii	"__SERR 0x0040\000"
 7770      52522030 
 7770      78303034 
 7770      3000
 7771              	.LASF27:
 7772 1c78 5F5A4E37 		.ascii	"_ZN7TwoWire11requestFromEiii\000"
 7772      54776F57 
 7772      69726531 
 7772      31726571 
 7772      75657374 
 7773              	.LASF244:
 7774 1c95 5F5F5549 		.ascii	"__UINT_FAST8_MAX__ 4294967295U\000"
 7774      4E545F46 
 7774      41535438 
 7774      5F4D4158 
 7774      5F5F2034 
 7775              	.LASF1033:
 7776 1cb4 55415254 		.ascii	"UARTCLKDIV MMIO(0x40048098)\000"
 7776      434C4B44 
 7776      4956204D 
 7776      4D494F28 
 7776      30783430 
 7777              	.LASF404:
 7778 1cd0 5F5F5451 		.ascii	"__TQ_FBIT__ 127\000"
 7778      5F464249 
 7778      545F5F20 
 7778      31323700 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 167


 7779              	.LASF684:
 7780 1ce0 494E545F 		.ascii	"INT_FAST16_MAX __STDINT_EXP(INT_MAX)\000"
 7780      46415354 
 7780      31365F4D 
 7780      4158205F 
 7780      5F535444 
 7781              	.LASF982:
 7782 1d05 70757463 		.ascii	"putc(x,fp) __sputc_r(_REENT, x, fp)\000"
 7782      28782C66 
 7782      7029205F 
 7782      5F737075 
 7782      74635F72 
 7783              	.LASF1031:
 7784 1d29 4D41494E 		.ascii	"MAINCLKUEN MMIO(0x40048074)\000"
 7784      434C4B55 
 7784      454E204D 
 7784      4D494F28 
 7784      30783430 
 7785              	.LASF974:
 7786 1d45 5F5F7366 		.ascii	"__sfeof(p) (((p)->_flags & __SEOF) != 0)\000"
 7786      656F6628 
 7786      70292028 
 7786      28287029 
 7786      2D3E5F66 
 7787              	.LASF474:
 7788 1d6e 5F484156 		.ascii	"_HAVE_LONG_DOUBLE 1\000"
 7788      455F4C4F 
 7788      4E475F44 
 7788      4F55424C 
 7788      45203100 
 7789              	.LASF654:
 7790 1d82 494E5450 		.ascii	"INTPTR_MIN PTRDIFF_MIN\000"
 7790      54525F4D 
 7790      494E2050 
 7790      54524449 
 7790      46465F4D 
 7791              	.LASF854:
 7792 1d99 53434E78 		.ascii	"SCNxFAST64 __SCN64(x)\000"
 7792      46415354 
 7792      3634205F 
 7792      5F53434E 
 7792      36342878 
 7793              	.LASF910:
 7794 1daf 71756164 		.ascii	"quad quad_t\000"
 7794      20717561 
 7794      645F7400 
 7795              	.LASF731:
 7796 1dbb 50524975 		.ascii	"PRIuLEAST8 __PRI8(u)\000"
 7796      4C454153 
 7796      5438205F 
 7796      5F505249 
 7796      38287529 
 7797              	.LASF147:
 7798 1dd0 5F5F5349 		.ascii	"__SIZEOF_SHORT__ 2\000"
 7798      5A454F46 
 7798      5F53484F 
 7798      52545F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 168


 7798      203200
 7799              	.LASF391:
 7800 1de3 5F5F554C 		.ascii	"__ULLACCUM_FBIT__ 32\000"
 7800      4C414343 
 7800      554D5F46 
 7800      4249545F 
 7800      5F203332 
 7801              	.LASF1136:
 7802 1df8 54494D45 		.ascii	"TIMER0B 2\000"
 7802      52304220 
 7802      3200
 7803              	.LASF710:
 7804 1e02 494E5436 		.ascii	"INT64_C(x) x ##LL\000"
 7804      345F4328 
 7804      78292078 
 7804      2023234C 
 7804      4C00
 7805              	.LASF1008:
 7806 1e14 55305448 		.ascii	"U0THR MMIO(0x40008000)\000"
 7806      52204D4D 
 7806      494F2830 
 7806      78343030 
 7806      30383030 
 7807              	.LASF806:
 7808 1e2b 53434E6F 		.ascii	"SCNoLEAST32 __SCN32(o)\000"
 7808      4C454153 
 7808      54333220 
 7808      5F5F5343 
 7808      4E333228 
 7809              	.LASF23:
 7810 1e42 5F5A4E37 		.ascii	"_ZN7TwoWire15endTransmissionEh\000"
 7810      54776F57 
 7810      69726531 
 7810      35656E64 
 7810      5472616E 
 7811              	.LASF1013:
 7812 1e61 55304949 		.ascii	"U0IIR MMIO(0x40008008)\000"
 7812      52204D4D 
 7812      494F2830 
 7812      78343030 
 7812      30383030 
 7813              	.LASF476:
 7814 1e78 5F535953 		.ascii	"_SYS_FEATURES_H \000"
 7814      5F464541 
 7814      54555245 
 7814      535F4820 
 7814      00
 7815              	.LASF881:
 7816 1e89 5F535444 		.ascii	"_STDIO_H_ \000"
 7816      494F5F48 
 7816      5F2000
 7817              	.LASF745:
 7818 1e94 53434E64 		.ascii	"SCNdFAST8 __SCN8(d)\000"
 7818      46415354 
 7818      38205F5F 
 7818      53434E38 
 7818      28642900 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 169


 7819              	.LASF633:
 7820 1ea8 73747263 		.ascii	"strcmpi strcasecmp\000"
 7820      6D706920 
 7820      73747263 
 7820      61736563 
 7820      6D7000
 7821              	.LASF150:
 7822 1ebb 5F5F5349 		.ascii	"__SIZEOF_LONG_DOUBLE__ 8\000"
 7822      5A454F46 
 7822      5F4C4F4E 
 7822      475F444F 
 7822      55424C45 
 7823              	.LASF754:
 7824 1ed4 5052496F 		.ascii	"PRIo16 __PRI16(o)\000"
 7824      3136205F 
 7824      5F505249 
 7824      3136286F 
 7824      2900
 7825              	.LASF749:
 7826 1ee6 53434E78 		.ascii	"SCNxFAST8 __SCN8(x)\000"
 7826      46415354 
 7826      38205F5F 
 7826      53434E38 
 7826      28782900 
 7827              	.LASF449:
 7828 1efa 5F5F5052 		.ascii	"__PRAGMA_REDEFINE_EXTNAME 1\000"
 7828      41474D41 
 7828      5F524544 
 7828      4546494E 
 7828      455F4558 
 7829              	.LASF163:
 7830 1f16 5F5F5743 		.ascii	"__WCHAR_TYPE__ unsigned int\000"
 7830      4841525F 
 7830      54595045 
 7830      5F5F2075 
 7830      6E736967 
 7831              	.LASF702:
 7832 1f32 57494E54 		.ascii	"WINT_MAX __WINT_MAX__\000"
 7832      5F4D4158 
 7832      205F5F57 
 7832      494E545F 
 7832      4D41585F 
 7833              	.LASF1141:
 7834 1f48 54494D45 		.ascii	"TIMER2B 7\000"
 7834      52324220 
 7834      3700
 7835              	.LASF10:
 7836 1f52 63686172 		.ascii	"char\000"
 7836      00
 7837              	.LASF427:
 7838 1f57 5F5F5553 		.ascii	"__USA_IBIT__ 16\000"
 7838      415F4942 
 7838      49545F5F 
 7838      20313600 
 7839              	.LASF1111:
 7840 1f67 62697443 		.ascii	"bitClear(value,bit) ((value) &= ~(1UL << (bit)))\000"
 7840      6C656172 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 170


 7840      2876616C 
 7840      75652C62 
 7840      69742920 
 7841              	.LASF1100:
 7842 1f98 64656772 		.ascii	"degrees(rad) ((rad)*RAD_TO_DEG)\000"
 7842      65657328 
 7842      72616429 
 7842      20282872 
 7842      6164292A 
 7843              	.LASF81:
 7844 1fb8 5F5F6E65 		.ascii	"__need_wchar_t \000"
 7844      65645F77 
 7844      63686172 
 7844      5F742000 
 7845              	.LASF1062:
 7846 1fc8 76615F73 		.ascii	"va_start(v,l) __builtin_va_start(v,l)\000"
 7846      74617274 
 7846      28762C6C 
 7846      29205F5F 
 7846      6275696C 
 7847              	.LASF24:
 7848 1fee 5F5A4E37 		.ascii	"_ZN7TwoWire15endTransmissionEv\000"
 7848      54776F57 
 7848      69726531 
 7848      35656E64 
 7848      5472616E 
 7849              	.LASF944:
 7850 200d 5F5F534F 		.ascii	"__SOFF 0x1000\000"
 7850      46462030 
 7850      78313030 
 7850      3000
 7851              	.LASF193:
 7852 201b 5F5F5549 		.ascii	"__UINT_FAST64_TYPE__ long long unsigned int\000"
 7852      4E545F46 
 7852      41535436 
 7852      345F5459 
 7852      50455F5F 
 7853              	.LASF1113:
 7854 2047 62697428 		.ascii	"bit(b) (1UL << (b))\000"
 7854      62292028 
 7854      31554C20 
 7854      3C3C2028 
 7854      62292900 
 7855              	.LASF569:
 7856 205b 5F57494E 		.ascii	"_WINT_T \000"
 7856      545F5420 
 7856      00
 7857              	.LASF952:
 7858 2064 42554653 		.ascii	"BUFSIZ 1024\000"
 7858      495A2031 
 7858      30323400 
 7859              	.LASF103:
 7860 2070 4932435F 		.ascii	"I2C_REPEATED_START 3\000"
 7860      52455045 
 7860      41544544 
 7860      5F535441 
 7860      52542033 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 171


 7861              	.LASF845:
 7862 2085 50524969 		.ascii	"PRIiFAST64 __PRI64(i)\000"
 7862      46415354 
 7862      3634205F 
 7862      5F505249 
 7862      36342869 
 7863              	.LASF261:
 7864 209b 5F5F464C 		.ascii	"__FLT_MIN__ 1.1754943508222875e-38F\000"
 7864      545F4D49 
 7864      4E5F5F20 
 7864      312E3137 
 7864      35343934 
 7865              	.LASF712:
 7866 20bf 494E544D 		.ascii	"INTMAX_C(x) x ##LL\000"
 7866      41585F43 
 7866      28782920 
 7866      78202323 
 7866      4C4C00
 7867              	.LASF416:
 7868 20d2 5F5F4841 		.ascii	"__HA_FBIT__ 7\000"
 7868      5F464249 
 7868      545F5F20 
 7868      3700
 7869              	.LASF769:
 7870 20e0 53434E64 		.ascii	"SCNdLEAST16 __SCN16(d)\000"
 7870      4C454153 
 7870      54313620 
 7870      5F5F5343 
 7870      4E313628 
 7871              	.LASF333:
 7872 20f7 5F5F5546 		.ascii	"__UFRACT_MIN__ 0.0UR\000"
 7872      52414354 
 7872      5F4D494E 
 7872      5F5F2030 
 7872      2E305552 
 7873              	.LASF867:
 7874 210c 53434E78 		.ascii	"SCNxMAX __SCNMAX(x)\000"
 7874      4D415820 
 7874      5F5F5343 
 7874      4E4D4158 
 7874      28782900 
 7875              	.LASF445:
 7876 2120 5F5F4743 		.ascii	"__GCC_ATOMIC_LLONG_LOCK_FREE 1\000"
 7876      435F4154 
 7876      4F4D4943 
 7876      5F4C4C4F 
 7876      4E475F4C 
 7877              	.LASF766:
 7878 213f 50524975 		.ascii	"PRIuLEAST16 __PRI16(u)\000"
 7878      4C454153 
 7878      54313620 
 7878      5F5F5052 
 7878      49313628 
 7879              	.LASF791:
 7880 2156 50524978 		.ascii	"PRIx32 __PRI32(x)\000"
 7880      3332205F 
 7880      5F505249 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 172


 7880      33322878 
 7880      2900
 7881              	.LASF565:
 7882 2168 5F5F6C6F 		.ascii	"__lock_try_acquire(lock) (_CAST_VOID 0)\000"
 7882      636B5F74 
 7882      72795F61 
 7882      63717569 
 7882      7265286C 
 7883              	.LASF80:
 7884 2190 5F474343 		.ascii	"_GCC_WRAP_STDINT_H \000"
 7884      5F575241 
 7884      505F5354 
 7884      44494E54 
 7884      5F482000 
 7885              	.LASF68:
 7886 21a4 49324345 		.ascii	"I2CEngine\000"
 7886      6E67696E 
 7886      6500
 7887              	.LASF1085:
 7888 21ae 5241445F 		.ascii	"RAD_TO_DEG 57.295779513082320876798154814105\000"
 7888      544F5F44 
 7888      45472035 
 7888      372E3239 
 7888      35373739 
 7889              	.LASF323:
 7890 21db 5F5F5553 		.ascii	"__USFRACT_MIN__ 0.0UHR\000"
 7890      46524143 
 7890      545F4D49 
 7890      4E5F5F20 
 7890      302E3055 
 7891              	.LASF810:
 7892 21f2 50524969 		.ascii	"PRIiFAST32 __PRI32(i)\000"
 7892      46415354 
 7892      3332205F 
 7892      5F505249 
 7892      33322869 
 7893              	.LASF606:
 7894 2208 5F524545 		.ascii	"_REENT_EMERGENCY(ptr) ((ptr)->_emergency)\000"
 7894      4E545F45 
 7894      4D455247 
 7894      454E4359 
 7894      28707472 
 7895              	.LASF625:
 7896 2232 616C6C6F 		.ascii	"alloca(size) __builtin_alloca(size)\000"
 7896      63612873 
 7896      697A6529 
 7896      205F5F62 
 7896      75696C74 
 7897              	.LASF500:
 7898 2256 5F444546 		.ascii	"_DEFUN(name,arglist,args) name(args)\000"
 7898      554E286E 
 7898      616D652C 
 7898      6172676C 
 7898      6973742C 
 7899              	.LASF550:
 7900 227b 5F5F5F69 		.ascii	"___int16_t_defined 1\000"
 7900      6E743136 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 173


 7900      5F745F64 
 7900      6566696E 
 7900      65642031 
 7901              	.LASF621:
 7902 2290 5F524545 		.ascii	"_REENT _impure_ptr\000"
 7902      4E54205F 
 7902      696D7075 
 7902      72655F70 
 7902      747200
 7903              	.LASF285:
 7904 22a3 5F5F4C44 		.ascii	"__LDBL_MAX_EXP__ 1024\000"
 7904      424C5F4D 
 7904      41585F45 
 7904      58505F5F 
 7904      20313032 
 7905              	.LASF992:
 7906 22b9 5F4E2030 		.ascii	"_N 04\000"
 7906      3400
 7907              	.LASF1117:
 7908 22bf 616E616C 		.ascii	"analogInPinToBit(P) (P)\000"
 7908      6F67496E 
 7908      50696E54 
 7908      6F426974 
 7908      28502920 
 7909              	.LASF1005:
 7910 22d7 5F425628 		.ascii	"_BV(bit) (1 << (bit))\000"
 7910      62697429 
 7910      20283120 
 7910      3C3C2028 
 7910      62697429 
 7911              	.LASF1023:
 7912 22ed 494F434F 		.ascii	"IOCON_PIO1_7 MMIO(0x400440A8)\000"
 7912      4E5F5049 
 7912      4F315F37 
 7912      204D4D49 
 7912      4F283078 
 7913              	.LASF641:
 7914 230b 5F5F696E 		.ascii	"__int8_t_defined 1\000"
 7914      74385F74 
 7914      5F646566 
 7914      696E6564 
 7914      203100
 7915              	.LASF1020:
 7916 231e 494F434F 		.ascii	"IOCON_PIO0_8 MMIO(0x40044060)\000"
 7916      4E5F5049 
 7916      4F305F38 
 7916      204D4D49 
 7916      4F283078 
 7917              	.LASF665:
 7918 233c 494E545F 		.ascii	"INT_LEAST16_MIN -32768\000"
 7918      4C454153 
 7918      5431365F 
 7918      4D494E20 
 7918      2D333237 
 7919              	.LASF511:
 7920 2353 5F5F7369 		.ascii	"__size_t__ \000"
 7920      7A655F74 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 174


 7920      5F5F2000 
 7921              	.LASF997:
 7922 235f 5F422030 		.ascii	"_B 0200\000"
 7922      32303000 
 7923              	.LASF471:
 7924 2367 5F4D425F 		.ascii	"_MB_LEN_MAX 1\000"
 7924      4C454E5F 
 7924      4D415820 
 7924      3100
 7925              	.LASF90:
 7926 2375 48617264 		.ascii	"HardwareSerial_h \000"
 7926      77617265 
 7926      53657269 
 7926      616C5F68 
 7926      2000
 7927              	.LASF996:
 7928 2387 5F582030 		.ascii	"_X 0100\000"
 7928      31303000 
 7929              	.LASF420:
 7930 238f 5F5F4441 		.ascii	"__DA_FBIT__ 31\000"
 7930      5F464249 
 7930      545F5F20 
 7930      333100
 7931              	.LASF1016:
 7932 239e 494F434F 		.ascii	"IOCON_PIO0_2 MMIO(0x4004401C)\000"
 7932      4E5F5049 
 7932      4F305F32 
 7932      204D4D49 
 7932      4F283078 
 7933              	.LASF946:
 7934 23bc 5F5F534C 		.ascii	"__SL64 0x8000\000"
 7934      36342030 
 7934      78383030 
 7934      3000
 7935              	.LASF493:
 7936 23ca 5F534947 		.ascii	"_SIGNED signed\000"
 7936      4E454420 
 7936      7369676E 
 7936      656400
 7937              	.LASF920:
 7938 23d9 46445F53 		.ascii	"FD_SET(n,p) ((p)->fds_bits[(n)/NFDBITS] |= (1L << ("
 7938      4554286E 
 7938      2C702920 
 7938      28287029 
 7938      2D3E6664 
 7939 240c 286E2920 		.ascii	"(n) % NFDBITS)))\000"
 7939      25204E46 
 7939      44424954 
 7939      53292929 
 7939      00
 7940              	.LASF263:
 7941 241d 5F5F464C 		.ascii	"__FLT_DENORM_MIN__ 1.4012984643248171e-45F\000"
 7941      545F4445 
 7941      4E4F524D 
 7941      5F4D494E 
 7941      5F5F2031 
 7942              	.LASF510:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 175


 7943 2448 5F5F6E65 		.ascii	"__need_size_t \000"
 7943      65645F73 
 7943      697A655F 
 7943      742000
 7944              	.LASF226:
 7945 2457 5F5F494E 		.ascii	"__INT_LEAST16_MAX__ 32767\000"
 7945      545F4C45 
 7945      41535431 
 7945      365F4D41 
 7945      585F5F20 
 7946              	.LASF783:
 7947 2471 53434E75 		.ascii	"SCNuFAST16 __SCN16(u)\000"
 7947      46415354 
 7947      3136205F 
 7947      5F53434E 
 7947      31362875 
 7948              	.LASF935:
 7949 2487 5F5F5357 		.ascii	"__SWR 0x0008\000"
 7949      52203078 
 7949      30303038 
 7949      00
 7950              	.LASF713:
 7951 2494 55494E54 		.ascii	"UINTMAX_C(x) x ##ULL\000"
 7951      4D41585F 
 7951      43287829 
 7951      20782023 
 7951      23554C4C 
 7952              	.LASF973:
 7953 24a9 5F5F7370 		.ascii	"__sputc_r(__ptr,__c,__p) __sputc_raw_r(__ptr, __c, "
 7953      7574635F 
 7953      72285F5F 
 7953      7074722C 
 7953      5F5F632C 
 7954 24dc 5F5F7029 		.ascii	"__p)\000"
 7954      00
 7955              	.LASF886:
 7956 24e1 5F535953 		.ascii	"_SYS_TYPES_H \000"
 7956      5F545950 
 7956      45535F48 
 7956      2000
 7957              	.LASF989:
 7958 24ef 5F746F75 		.ascii	"_toupper(__c) ((unsigned char)(__c) - 'a' + 'A')\000"
 7958      70706572 
 7958      285F5F63 
 7958      29202828 
 7958      756E7369 
 7959              	.LASF237:
 7960 2520 5F5F5549 		.ascii	"__UINT32_C(c) c ## UL\000"
 7960      4E543332 
 7960      5F432863 
 7960      29206320 
 7960      23232055 
 7961              	.LASF936:
 7962 2536 5F5F5352 		.ascii	"__SRW 0x0010\000"
 7962      57203078 
 7962      30303130 
 7962      00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 176


 7963              	.LASF1142:
 7964 2543 54494D45 		.ascii	"TIMER3A 8\000"
 7964      52334120 
 7964      3800
 7965              	.LASF373:
 7966 254d 5F5F5541 		.ascii	"__UACCUM_MIN__ 0.0UK\000"
 7966      4343554D 
 7966      5F4D494E 
 7966      5F5F2030 
 7966      2E30554B 
 7967              	.LASF63:
 7968 2562 5F5F7374 		.ascii	"__static_initialization_and_destruction_0\000"
 7968      61746963 
 7968      5F696E69 
 7968      7469616C 
 7968      697A6174 
 7969              	.LASF940:
 7970 258c 5F5F5341 		.ascii	"__SAPP 0x0100\000"
 7970      50502030 
 7970      78303130 
 7970      3000
 7971              	.LASF262:
 7972 259a 5F5F464C 		.ascii	"__FLT_EPSILON__ 1.1920928955078125e-7F\000"
 7972      545F4550 
 7972      53494C4F 
 7972      4E5F5F20 
 7972      312E3139 
 7973              	.LASF763:
 7974 25c1 50524964 		.ascii	"PRIdLEAST16 __PRI16(d)\000"
 7974      4C454153 
 7974      54313620 
 7974      5F5F5052 
 7974      49313628 
 7975              	.LASF1034:
 7976 25d8 50445255 		.ascii	"PDRUNCFG MMIO(0x40048238)\000"
 7976      4E434647 
 7976      204D4D49 
 7976      4F283078 
 7976      34303034 
 7977              	.LASF855:
 7978 25f2 5F5F5052 		.ascii	"__PRIMAX(x) __STRINGIFY(ll ##x)\000"
 7978      494D4158 
 7978      28782920 
 7978      5F5F5354 
 7978      52494E47 
 7979              	.LASF149:
 7980 2612 5F5F5349 		.ascii	"__SIZEOF_DOUBLE__ 8\000"
 7980      5A454F46 
 7980      5F444F55 
 7980      424C455F 
 7980      5F203800 
 7981              	.LASF805:
 7982 2626 53434E69 		.ascii	"SCNiLEAST32 __SCN32(i)\000"
 7982      4C454153 
 7982      54333220 
 7982      5F5F5343 
 7982      4E333228 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 177


 7983              	.LASF162:
 7984 263d 5F5F5054 		.ascii	"__PTRDIFF_TYPE__ int\000"
 7984      52444946 
 7984      465F5459 
 7984      50455F5F 
 7984      20696E74 
 7985              	.LASF20:
 7986 2652 5F5A4E37 		.ascii	"_ZN7TwoWire17beginTransmissionEh\000"
 7986      54776F57 
 7986      69726531 
 7986      37626567 
 7986      696E5472 
 7987              	.LASF21:
 7988 2673 5F5A4E37 		.ascii	"_ZN7TwoWire17beginTransmissionEi\000"
 7988      54776F57 
 7988      69726531 
 7988      37626567 
 7988      696E5472 
 7989              	.LASF943:
 7990 2694 5F5F534E 		.ascii	"__SNPT 0x0800\000"
 7990      50542030 
 7990      78303830 
 7990      3000
 7991              	.LASF644:
 7992 26a2 5F5F696E 		.ascii	"__int_least16_t_defined 1\000"
 7992      745F6C65 
 7992      61737431 
 7992      365F745F 
 7992      64656669 
 7993              	.LASF595:
 7994 26bc 5F524545 		.ascii	"_REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_sign"
 7994      4E545F53 
 7994      49474E47 
 7994      414D2870 
 7994      74722920 
 7995 26ef 67616D29 		.ascii	"gam)\000"
 7995      00
 7996              	.LASF442:
 7997 26f4 5F5F4743 		.ascii	"__GCC_ATOMIC_SHORT_LOCK_FREE 1\000"
 7997      435F4154 
 7997      4F4D4943 
 7997      5F53484F 
 7997      52545F4C 
 7998              	.LASF1139:
 7999 2713 54494D45 		.ascii	"TIMER2 5\000"
 7999      52322035 
 7999      00
 8000              	.LASF350:
 8001 271c 5F5F4C4C 		.ascii	"__LLFRACT_EPSILON__ 0x1P-63LLR\000"
 8001      46524143 
 8001      545F4550 
 8001      53494C4F 
 8001      4E5F5F20 
 8002              	.LASF361:
 8003 273b 5F5F5553 		.ascii	"__USACCUM_FBIT__ 8\000"
 8003      41434355 
 8003      4D5F4642 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 178


 8003      49545F5F 
 8003      203800
 8004              	.LASF446:
 8005 274e 5F5F4743 		.ascii	"__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\000"
 8005      435F4154 
 8005      4F4D4943 
 8005      5F544553 
 8005      545F414E 
 8006              	.LASF850:
 8007 2772 53434E64 		.ascii	"SCNdFAST64 __SCN64(d)\000"
 8007      46415354 
 8007      3634205F 
 8007      5F53434E 
 8007      36342864 
 8008              	.LASF837:
 8009 2788 50524978 		.ascii	"PRIxLEAST64 __PRI64(x)\000"
 8009      4C454153 
 8009      54363420 
 8009      5F5F5052 
 8009      49363428 
 8010              	.LASF75:
 8011 279f 5F535953 		.ascii	"_SYS__TYPES_H \000"
 8011      5F5F5459 
 8011      5045535F 
 8011      482000
 8012              	.LASF1069:
 8013 27ae 5F56415F 		.ascii	"_VA_LIST_DEFINED \000"
 8013      4C495354 
 8013      5F444546 
 8013      494E4544 
 8013      2000
 8014              	.LASF674:
 8015 27c0 494E5436 		.ascii	"INT64_MIN (-9223372036854775807LL-1LL)\000"
 8015      345F4D49 
 8015      4E20282D 
 8015      39323233 
 8015      33373230 
 8016              	.LASF623:
 8017 27e7 5F4E4557 		.ascii	"_NEWLIB_ALLOCA_H \000"
 8017      4C49425F 
 8017      414C4C4F 
 8017      43415F48 
 8017      2000
 8018              	.LASF293:
 8019 27f9 5F5F4C44 		.ascii	"__LDBL_HAS_INFINITY__ 1\000"
 8019      424C5F48 
 8019      41535F49 
 8019      4E46494E 
 8019      4954595F 
 8020              	.LASF999:
 8021 2811 746F6173 		.ascii	"toascii(__c) ((__c)&0177)\000"
 8021      63696928 
 8021      5F5F6329 
 8021      2028285F 
 8021      5F632926 
 8022              	.LASF299:
 8023 282b 5F5F4445 		.ascii	"__DEC32_MAX__ 9.999999E96DF\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 179


 8023      4333325F 
 8023      4D41585F 
 8023      5F20392E 
 8023      39393939 
 8024              	.LASF903:
 8025 2847 5F4D4143 		.ascii	"_MACHTYPES_H_ \000"
 8025      48545950 
 8025      45535F48 
 8025      5F2000
 8026              	.LASF1038:
 8027 2856 4750494F 		.ascii	"GPIO1DATA MMIO(0x50013FFC)\000"
 8027      31444154 
 8027      41204D4D 
 8027      494F2830 
 8027      78353030 
 8028              	.LASF884:
 8029 2871 5F5F474E 		.ascii	"__GNUC_VA_LIST \000"
 8029      55435F56 
 8029      415F4C49 
 8029      53542000 
 8030              	.LASF93:
 8031 2881 4932435F 		.ascii	"I2C_BUFSIZE 128\000"
 8031      42554653 
 8031      495A4520 
 8031      31323800 
 8032              	.LASF462:
 8033 2891 5F5F4152 		.ascii	"__ARM_PCS 1\000"
 8033      4D5F5043 
 8033      53203100 
 8034              	.LASF824:
 8035 289d 5052496F 		.ascii	"PRIo64 __PRI64(o)\000"
 8035      3634205F 
 8035      5F505249 
 8035      3634286F 
 8035      2900
 8036              	.LASF800:
 8037 28af 5052496F 		.ascii	"PRIoLEAST32 __PRI32(o)\000"
 8037      4C454153 
 8037      54333220 
 8037      5F5F5052 
 8037      49333228 
 8038              	.LASF694:
 8039 28c6 55494E54 		.ascii	"UINTMAX_MAX __UINTMAX_MAX__\000"
 8039      4D41585F 
 8039      4D415820 
 8039      5F5F5549 
 8039      4E544D41 
 8040              	.LASF215:
 8041 28e2 5F5F5349 		.ascii	"__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\000"
 8041      475F4154 
 8041      4F4D4943 
 8041      5F4D494E 
 8041      5F5F2028 
 8042              	.LASF1125:
 8043 290f 50432033 		.ascii	"PC 3\000"
 8043      00
 8044              	.LASF34:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 180


 8045 2914 5F5A4E37 		.ascii	"_ZN7TwoWire4readEv\000"
 8045      54776F57 
 8045      69726534 
 8045      72656164 
 8045      457600
 8046              	.LASF760:
 8047 2927 53434E6F 		.ascii	"SCNo16 __SCN16(o)\000"
 8047      3136205F 
 8047      5F53434E 
 8047      3136286F 
 8047      2900
 8048              	.LASF536:
 8049 2939 5F425344 		.ascii	"_BSD_WCHAR_T_ \000"
 8049      5F574348 
 8049      41525F54 
 8049      5F2000
 8050              	.LASF53:
 8051 2948 49324353 		.ascii	"I2CSlaveBuffer\000"
 8051      6C617665 
 8051      42756666 
 8051      657200
 8052              	.LASF1019:
 8053 2957 494F434F 		.ascii	"IOCON_PIO0_5 MMIO(0x40044034)\000"
 8053      4E5F5049 
 8053      4F305F35 
 8053      204D4D49 
 8053      4F283078 
 8054              	.LASF696:
 8055 2975 5349475F 		.ascii	"SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)\000"
 8055      41544F4D 
 8055      49435F4D 
 8055      494E2028 
 8055      2D5F5F53 
 8056              	.LASF564:
 8057 29a1 5F5F6C6F 		.ascii	"__lock_acquire_recursive(lock) (_CAST_VOID 0)\000"
 8057      636B5F61 
 8057      63717569 
 8057      72655F72 
 8057      65637572 
 8058              	.LASF865:
 8059 29cf 53434E6F 		.ascii	"SCNoMAX __SCNMAX(o)\000"
 8059      4D415820 
 8059      5F5F5343 
 8059      4E4D4158 
 8059      286F2900 
 8060              	.LASF711:
 8061 29e3 55494E54 		.ascii	"UINT64_C(x) x ##ULL\000"
 8061      36345F43 
 8061      28782920 
 8061      78202323 
 8061      554C4C00 
 8062              	.LASF839:
 8063 29f7 53434E64 		.ascii	"SCNdLEAST64 __SCN64(d)\000"
 8063      4C454153 
 8063      54363420 
 8063      5F5F5343 
 8063      4E363428 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 181


 8064              	.LASF278:
 8065 2a0e 5F5F4442 		.ascii	"__DBL_HAS_DENORM__ 1\000"
 8065      4C5F4841 
 8065      535F4445 
 8065      4E4F524D 
 8065      5F5F2031 
 8066              	.LASF833:
 8067 2a23 50524964 		.ascii	"PRIdLEAST64 __PRI64(d)\000"
 8067      4C454153 
 8067      54363420 
 8067      5F5F5052 
 8067      49363428 
 8068              	.LASF592:
 8069 2a3a 5F524545 		.ascii	"_REENT_CHECK_EMERGENCY(ptr) \000"
 8069      4E545F43 
 8069      4845434B 
 8069      5F454D45 
 8069      5247454E 
 8070              	.LASF785:
 8071 2a57 5F5F5052 		.ascii	"__PRI32(x) __STRINGIFY(l ##x)\000"
 8071      49333228 
 8071      7829205F 
 8071      5F535452 
 8071      494E4749 
 8072              	.LASF757:
 8073 2a75 50524958 		.ascii	"PRIX16 __PRI16(X)\000"
 8073      3136205F 
 8073      5F505249 
 8073      31362858 
 8073      2900
 8074              	.LASF836:
 8075 2a87 50524975 		.ascii	"PRIuLEAST64 __PRI64(u)\000"
 8075      4C454153 
 8075      54363420 
 8075      5F5F5052 
 8075      49363428 
 8076              	.LASF648:
 8077 2a9e 5F5F696E 		.ascii	"__int_least64_t_defined 1\000"
 8077      745F6C65 
 8077      61737436 
 8077      345F745F 
 8077      64656669 
 8078              	.LASF1131:
 8079 2ab8 504A2031 		.ascii	"PJ 10\000"
 8079      3000
 8080              	.LASF129:
 8081 2abe 5F5F6370 		.ascii	"__cplusplus 199711L\000"
 8081      6C757370 
 8081      6C757320 
 8081      31393937 
 8081      31314C00 
 8082              	.LASF308:
 8083 2ad2 5F5F4445 		.ascii	"__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\000"
 8083      4336345F 
 8083      5355424E 
 8083      4F524D41 
 8083      4C5F4D49 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 182


 8084              	.LASF325:
 8085 2b03 5F5F5553 		.ascii	"__USFRACT_EPSILON__ 0x1P-8UHR\000"
 8085      46524143 
 8085      545F4550 
 8085      53494C4F 
 8085      4E5F5F20 
 8086              	.LASF629:
 8087 2b21 52414E44 		.ascii	"RAND_MAX __RAND_MAX\000"
 8087      5F4D4158 
 8087      205F5F52 
 8087      414E445F 
 8087      4D415800 
 8088              	.LASF797:
 8089 2b35 53434E78 		.ascii	"SCNx32 __SCN32(x)\000"
 8089      3332205F 
 8089      5F53434E 
 8089      33322878 
 8089      2900
 8090              	.LASF243:
 8091 2b47 5F5F494E 		.ascii	"__INT_FAST64_MAX__ 9223372036854775807LL\000"
 8091      545F4641 
 8091      53543634 
 8091      5F4D4158 
 8091      5F5F2039 
 8092              	.LASF799:
 8093 2b70 50524969 		.ascii	"PRIiLEAST32 __PRI32(i)\000"
 8093      4C454153 
 8093      54333220 
 8093      5F5F5052 
 8093      49333228 
 8094              	.LASF141:
 8095 2b87 5F5F4F50 		.ascii	"__OPTIMIZE_SIZE__ 1\000"
 8095      54494D49 
 8095      5A455F53 
 8095      495A455F 
 8095      5F203100 
 8096              	.LASF553:
 8097 2b9b 5F5F5F69 		.ascii	"___int_least32_t_defined 1\000"
 8097      6E745F6C 
 8097      65617374 
 8097      33325F74 
 8097      5F646566 
 8098              	.LASF389:
 8099 2bb6 5F5F4C4C 		.ascii	"__LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK\000"
 8099      41434355 
 8099      4D5F4D41 
 8099      585F5F20 
 8099      30583746 
 8100              	.LASF1088:
 8101 2be0 4C534246 		.ascii	"LSBFIRST 0\000"
 8101      49525354 
 8101      203000
 8102              	.LASF86:
 8103 2beb 53747269 		.ascii	"String_class_h \000"
 8103      6E675F63 
 8103      6C617373 
 8103      5F682000 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 183


 8104              	.LASF120:
 8105 2bfb 4932434F 		.ascii	"I2CONCLR_STAC (0x1<<5)\000"
 8105      4E434C52 
 8105      5F535441 
 8105      43202830 
 8105      78313C3C 
 8106              	.LASF801:
 8107 2c12 50524975 		.ascii	"PRIuLEAST32 __PRI32(u)\000"
 8107      4C454153 
 8107      54333220 
 8107      5F5F5052 
 8107      49333228 
 8108              	.LASF433:
 8109 2c29 5F5F5553 		.ascii	"__USER_LABEL_PREFIX__ \000"
 8109      45525F4C 
 8109      4142454C 
 8109      5F505245 
 8109      4649585F 
 8110              	.LASF838:
 8111 2c40 50524958 		.ascii	"PRIXLEAST64 __PRI64(X)\000"
 8111      4C454153 
 8111      54363420 
 8111      5F5F5052 
 8111      49363428 
 8112              	.LASF744:
 8113 2c57 50524958 		.ascii	"PRIXFAST8 __PRI8(X)\000"
 8113      46415354 
 8113      38205F5F 
 8113      50524938 
 8113      28582900 
 8114              	.LASF816:
 8115 2c6b 53434E69 		.ascii	"SCNiFAST32 __SCN32(i)\000"
 8115      46415354 
 8115      3332205F 
 8115      5F53434E 
 8115      33322869 
 8116              	.LASF609:
 8117 2c81 5F524545 		.ascii	"_REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtow"
 8117      4E545F4D 
 8117      42544F57 
 8117      435F5354 
 8117      41544528 
 8118 2cb4 635F7374 		.ascii	"c_state)\000"
 8118      61746529 
 8118      00
 8119              	.LASF969:
 8120 2cbd 66776F70 		.ascii	"fwopen(__cookie,__fn) funopen(__cookie, (int (*)())"
 8120      656E285F 
 8120      5F636F6F 
 8120      6B69652C 
 8120      5F5F666E 
 8121 2cf0 302C205F 		.ascii	"0, __fn, (fpos_t (*)())0, (int (*)())0)\000"
 8121      5F666E2C 
 8121      20286670 
 8121      6F735F74 
 8121      20282A29 
 8122              	.LASF608:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 184


 8123 2d18 5F524545 		.ascii	"_REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_"
 8123      4E545F4D 
 8123      424C454E 
 8123      5F535441 
 8123      54452870 
 8124 2d4b 73746174 		.ascii	"state)\000"
 8124      652900
 8125              	.LASF677:
 8126 2d52 494E545F 		.ascii	"INT_LEAST64_MIN (-9223372036854775807LL-1LL)\000"
 8126      4C454153 
 8126      5436345F 
 8126      4D494E20 
 8126      282D3932 
 8127              	.LASF597:
 8128 2d7f 5F524545 		.ascii	"_REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._s"
 8128      4E545F52 
 8128      414E4434 
 8128      385F5345 
 8128      45442870 
 8129 2db2 65656429 		.ascii	"eed)\000"
 8129      00
 8130              	.LASF137:
 8131 2db7 5F5F4154 		.ascii	"__ATOMIC_ACQUIRE 2\000"
 8131      4F4D4943 
 8131      5F414351 
 8131      55495245 
 8131      203200
 8132              	.LASF1089:
 8133 2dca 4D534246 		.ascii	"MSBFIRST 1\000"
 8133      49525354 
 8133      203100
 8134              	.LASF978:
 8135 2dd5 66656F66 		.ascii	"feof(p) __sfeof(p)\000"
 8135      28702920 
 8135      5F5F7366 
 8135      656F6628 
 8135      702900
 8136              	.LASF862:
 8137 2de8 50524958 		.ascii	"PRIXMAX __PRIMAX(X)\000"
 8137      4D415820 
 8137      5F5F5052 
 8137      494D4158 
 8137      28582900 
 8138              	.LASF983:
 8139 2dfc 66617374 		.ascii	"fast_putc(x,p) (--(p)->_w < 0 ? __swbuf_r(_REENT, ("
 8139      5F707574 
 8139      6328782C 
 8139      70292028 
 8139      2D2D2870 
 8140 2e2f 696E7429 		.ascii	"int)(x), p) == EOF : (*(p)->_p = (x), (p)->_p++, 0)"
 8140      2878292C 
 8140      20702920 
 8140      3D3D2045 
 8140      4F46203A 
 8141 2e62 2900     		.ascii	")\000"
 8142              	.LASF1137:
 8143 2e64 54494D45 		.ascii	"TIMER1A 3\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 185


 8143      52314120 
 8143      3300
 8144              	.LASF889:
 8145 2e6e 5F414E53 		.ascii	"_ANSI_STDDEF_H \000"
 8145      495F5354 
 8145      44444546 
 8145      5F482000 
 8146              	.LASF741:
 8147 2e7e 5052496F 		.ascii	"PRIoFAST8 __PRI8(o)\000"
 8147      46415354 
 8147      38205F5F 
 8147      50524938 
 8147      286F2900 
 8148              	.LASF987:
 8149 2e92 5F435459 		.ascii	"_CTYPE_H_ \000"
 8149      50455F48 
 8149      5F2000
 8150              	.LASF979:
 8151 2e9d 66657272 		.ascii	"ferror(p) __sferror(p)\000"
 8151      6F722870 
 8151      29205F5F 
 8151      73666572 
 8151      726F7228 
 8152              	.LASF274:
 8153 2eb4 5F5F4442 		.ascii	"__DBL_MAX__ double(1.7976931348623157e+308L)\000"
 8153      4C5F4D41 
 8153      585F5F20 
 8153      646F7562 
 8153      6C652831 
 8154              	.LASF596:
 8155 2ee1 5F524545 		.ascii	"_REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_nex"
 8155      4E545F52 
 8155      414E445F 
 8155      4E455854 
 8155      28707472 
 8156 2f14 742900   		.ascii	"t)\000"
 8157              	.LASF627:
 8158 2f17 45584954 		.ascii	"EXIT_FAILURE 1\000"
 8158      5F464149 
 8158      4C555245 
 8158      203100
 8159              	.LASF369:
 8160 2f26 5F5F4143 		.ascii	"__ACCUM_MAX__ 0X7FFFFFFFP-15K\000"
 8160      43554D5F 
 8160      4D41585F 
 8160      5F203058 
 8160      37464646 
 8161              	.LASF284:
 8162 2f44 5F5F4C44 		.ascii	"__LDBL_MIN_10_EXP__ (-307)\000"
 8162      424C5F4D 
 8162      494E5F31 
 8162      305F4558 
 8162      505F5F20 
 8163              	.LASF773:
 8164 2f5f 53434E78 		.ascii	"SCNxLEAST16 __SCN16(x)\000"
 8164      4C454153 
 8164      54313620 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 186


 8164      5F5F5343 
 8164      4E313628 
 8165              	.LASF37:
 8166 2f76 5F5F7072 		.ascii	"__priority\000"
 8166      696F7269 
 8166      747900
 8167              	.LASF873:
 8168 2f81 50524975 		.ascii	"PRIuPTR __PRIPTR(u)\000"
 8168      50545220 
 8168      5F5F5052 
 8168      49505452 
 8168      28752900 
 8169              	.LASF448:
 8170 2f95 5F5F4743 		.ascii	"__GCC_HAVE_DWARF2_CFI_ASM 1\000"
 8170      435F4841 
 8170      56455F44 
 8170      57415246 
 8170      325F4346 
 8171              	.LASF549:
 8172 2fb1 5F5F5F69 		.ascii	"___int8_t_defined 1\000"
 8172      6E74385F 
 8172      745F6465 
 8172      66696E65 
 8172      64203100 
 8173              	.LASF318:
 8174 2fc5 5F5F5346 		.ascii	"__SFRACT_MIN__ (-0.5HR-0.5HR)\000"
 8174      52414354 
 8174      5F4D494E 
 8174      5F5F2028 
 8174      2D302E35 
 8175              	.LASF9:
 8176 2fe3 6C6F6E67 		.ascii	"long unsigned int\000"
 8176      20756E73 
 8176      69676E65 
 8176      6420696E 
 8176      7400
 8177              	.LASF419:
 8178 2ff5 5F5F5341 		.ascii	"__SA_IBIT__ 16\000"
 8178      5F494249 
 8178      545F5F20 
 8178      313600
 8179              	.LASF750:
 8180 3004 5F5F5052 		.ascii	"__PRI16(x) __STRINGIFY(x)\000"
 8180      49313628 
 8180      7829205F 
 8180      5F535452 
 8180      494E4749 
 8181              	.LASF131:
 8182 301e 5F5F474E 		.ascii	"__GNUC__ 4\000"
 8182      55435F5F 
 8182      203400
 8183              	.LASF1018:
 8184 3029 494F434F 		.ascii	"IOCON_PIO0_4 MMIO(0x40044030)\000"
 8184      4E5F5049 
 8184      4F305F34 
 8184      204D4D49 
 8184      4F283078 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 187


 8185              	.LASF175:
 8186 3047 5F5F5549 		.ascii	"__UINT16_TYPE__ short unsigned int\000"
 8186      4E543136 
 8186      5F545950 
 8186      455F5F20 
 8186      73686F72 
 8187              	.LASF84:
 8188 306a 5072696E 		.ascii	"Print_h \000"
 8188      745F6820 
 8188      00
 8189              	.LASF784:
 8190 3073 53434E78 		.ascii	"SCNxFAST16 __SCN16(x)\000"
 8190      46415354 
 8190      3136205F 
 8190      5F53434E 
 8190      31362878 
 8191              	.LASF670:
 8192 3089 55494E54 		.ascii	"UINT32_MAX 4294967295UL\000"
 8192      33325F4D 
 8192      41582034 
 8192      32393439 
 8192      36373239 
 8193              	.LASF1044:
 8194 30a1 544D5231 		.ascii	"TMR16B0MCR MMIO(0x4000C014)\000"
 8194      3642304D 
 8194      4352204D 
 8194      4D494F28 
 8194      30783430 
 8195              	.LASF458:
 8196 30bd 5F5F534F 		.ascii	"__SOFTFP__ 1\000"
 8196      46544650 
 8196      5F5F2031 
 8196      00
 8197              	.LASF645:
 8198 30ca 5F5F696E 		.ascii	"__int32_t_defined 1\000"
 8198      7433325F 
 8198      745F6465 
 8198      66696E65 
 8198      64203100 
 8199              	.LASF297:
 8200 30de 5F5F4445 		.ascii	"__DEC32_MAX_EXP__ 97\000"
 8200      4333325F 
 8200      4D41585F 
 8200      4558505F 
 8200      5F203937 
 8201              	.LASF515:
 8202 30f3 5F545F53 		.ascii	"_T_SIZE_ \000"
 8202      495A455F 
 8202      2000
 8203              	.LASF39:
 8204 30fd 61646472 		.ascii	"address\000"
 8204      65737300 
 8205              	.LASF908:
 8206 3105 5F53545F 		.ascii	"_ST_INT32 __attribute__ ((__mode__ (__SI__)))\000"
 8206      494E5433 
 8206      32205F5F 
 8206      61747472 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 188


 8206      69627574 
 8207              	.LASF32:
 8208 3133 5F5A4E37 		.ascii	"_ZN7TwoWire5writeEPhj\000"
 8208      54776F57 
 8208      69726535 
 8208      77726974 
 8208      65455068 
 8209              	.LASF387:
 8210 3149 5F5F4C4C 		.ascii	"__LLACCUM_IBIT__ 32\000"
 8210      41434355 
 8210      4D5F4942 
 8210      49545F5F 
 8210      20333200 
 8211              	.LASF998:
 8212 315d 69736173 		.ascii	"isascii(__c) ((unsigned)(__c)<=0177)\000"
 8212      63696928 
 8212      5F5F6329 
 8212      20282875 
 8212      6E736967 
 8213              	.LASF330:
 8214 3182 5F5F4652 		.ascii	"__FRACT_EPSILON__ 0x1P-15R\000"
 8214      4143545F 
 8214      45505349 
 8214      4C4F4E5F 
 8214      5F203078 
 8215              	.LASF1072:
 8216 319d 7072696E 		.ascii	"printf tfp_printf\000"
 8216      74662074 
 8216      66705F70 
 8216      72696E74 
 8216      6600
 8217              	.LASF907:
 8218 31af 5F54494D 		.ascii	"_TIMER_T_ unsigned long\000"
 8218      45525F54 
 8218      5F20756E 
 8218      7369676E 
 8218      6564206C 
 8219              	.LASF795:
 8220 31c7 53434E6F 		.ascii	"SCNo32 __SCN32(o)\000"
 8220      3332205F 
 8220      5F53434E 
 8220      3332286F 
 8220      2900
 8221              	.LASF1083:
 8222 31d9 54574F5F 		.ascii	"TWO_PI 6.283185307179586476925286766559\000"
 8222      50492036 
 8222      2E323833 
 8222      31383533 
 8222      30373137 
 8223              	.LASF485:
 8224 3201 5F424547 		.ascii	"_BEGIN_STD_C extern \"C\" {\000"
 8224      494E5F53 
 8224      54445F43 
 8224      20657874 
 8224      65726E20 
 8225              	.LASF169:
 8226 321b 5F5F5349 		.ascii	"__SIG_ATOMIC_TYPE__ int\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 189


 8226      475F4154 
 8226      4F4D4943 
 8226      5F545950 
 8226      455F5F20 
 8227              	.LASF835:
 8228 3233 5052496F 		.ascii	"PRIoLEAST64 __PRI64(o)\000"
 8228      4C454153 
 8228      54363420 
 8228      5F5F5052 
 8228      49363428 
 8229              	.LASF38:
 8230 324a 74686973 		.ascii	"this\000"
 8230      00
 8231              	.LASF1004:
 8232 324f 465F4350 		.ascii	"F_CPU 48000000\000"
 8232      55203438 
 8232      30303030 
 8232      303000
 8233              	.LASF59:
 8234 325e 5772496E 		.ascii	"WrIndex\000"
 8234      64657800 
 8235              	.LASF201:
 8236 3266 5F5F494E 		.ascii	"__INT_MAX__ 2147483647\000"
 8236      545F4D41 
 8236      585F5F20 
 8236      32313437 
 8236      34383336 
 8237              	.LASF902:
 8238 327d 6F666673 		.ascii	"offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEM"
 8238      65746F66 
 8238      28545950 
 8238      452C4D45 
 8238      4D424552 
 8239 32b0 42455229 		.ascii	"BER)\000"
 8239      00
 8240              	.LASF239:
 8241 32b5 5F5F5549 		.ascii	"__UINT64_C(c) c ## ULL\000"
 8241      4E543634 
 8241      5F432863 
 8241      29206320 
 8241      23232055 
 8242              	.LASF185:
 8243 32cc 5F5F5549 		.ascii	"__UINT_LEAST64_TYPE__ long long unsigned int\000"
 8243      4E545F4C 
 8243      45415354 
 8243      36345F54 
 8243      5950455F 
 8244              	.LASF314:
 8245 32f9 5F5F4445 		.ascii	"__DEC128_EPSILON__ 1E-33DL\000"
 8245      43313238 
 8245      5F455053 
 8245      494C4F4E 
 8245      5F5F2031 
 8246              	.LASF321:
 8247 3314 5F5F5553 		.ascii	"__USFRACT_FBIT__ 8\000"
 8247      46524143 
 8247      545F4642 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 190


 8247      49545F5F 
 8247      203800
 8248              	.LASF290:
 8249 3327 5F5F4C44 		.ascii	"__LDBL_EPSILON__ 2.2204460492503131e-16L\000"
 8249      424C5F45 
 8249      5053494C 
 8249      4F4E5F5F 
 8249      20322E32 
 8250              	.LASF1127:
 8251 3350 50452035 		.ascii	"PE 5\000"
 8251      00
 8252              	.LASF439:
 8253 3355 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR16_T_LOCK_FREE 1\000"
 8253      435F4154 
 8253      4F4D4943 
 8253      5F434841 
 8253      5231365F 
 8254              	.LASF1047:
 8255 3377 53595354 		.ascii	"SYST_RVR MMIO(0xE000E014)\000"
 8255      5F525652 
 8255      204D4D49 
 8255      4F283078 
 8255      45303030 
 8256              	.LASF271:
 8257 3391 5F5F4442 		.ascii	"__DBL_MAX_EXP__ 1024\000"
 8257      4C5F4D41 
 8257      585F4558 
 8257      505F5F20 
 8257      31303234 
 8258              	.LASF138:
 8259 33a6 5F5F4154 		.ascii	"__ATOMIC_RELEASE 3\000"
 8259      4F4D4943 
 8259      5F52454C 
 8259      45415345 
 8259      203300
 8260              	.LASF1120:
 8261 33b9 706F7274 		.ascii	"portModeRegister(P) *(port_to_mode_PGM + (P))\000"
 8261      4D6F6465 
 8261      52656769 
 8261      73746572 
 8261      28502920 
 8262              	.LASF253:
 8263 33e7 5F5F464C 		.ascii	"__FLT_MANT_DIG__ 24\000"
 8263      545F4D41 
 8263      4E545F44 
 8263      49475F5F 
 8263      20323400 
 8264              	.LASF65:
 8265 33fb 5F5A3134 		.ascii	"_Z14I2C_IRQHandlerv\000"
 8265      4932435F 
 8265      49525148 
 8265      616E646C 
 8265      65727600 
 8266              	.LASF576:
 8267 340f 5F52414E 		.ascii	"_RAND48_SEED_1 (0xabcd)\000"
 8267      4434385F 
 8267      53454544 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 191


 8267      5F312028 
 8267      30786162 
 8268              	.LASF413:
 8269 3427 5F5F5544 		.ascii	"__UDQ_IBIT__ 0\000"
 8269      515F4942 
 8269      49545F5F 
 8269      203000
 8270              	.LASF1060:
 8271 3436 5F535444 		.ascii	"_STDARG_H \000"
 8271      4152475F 
 8271      482000
 8272              	.LASF827:
 8273 3441 50524958 		.ascii	"PRIX64 __PRI64(X)\000"
 8273      3634205F 
 8273      5F505249 
 8273      36342858 
 8273      2900
 8274              	.LASF794:
 8275 3453 53434E69 		.ascii	"SCNi32 __SCN32(i)\000"
 8275      3332205F 
 8275      5F53434E 
 8275      33322869 
 8275      2900
 8276              	.LASF558:
 8277 3465 5F5F4C4F 		.ascii	"__LOCK_INIT_RECURSIVE(class,lock) static int lock ="
 8277      434B5F49 
 8277      4E49545F 
 8277      52454355 
 8277      52534956 
 8278 3498 20303B00 		.ascii	" 0;\000"
 8279              	.LASF142:
 8280 349c 5F5F4F50 		.ascii	"__OPTIMIZE__ 1\000"
 8280      54494D49 
 8280      5A455F5F 
 8280      203100
 8281              	.LASF1017:
 8282 34ab 494F434F 		.ascii	"IOCON_PIO0_3 MMIO(0x4004402C)\000"
 8282      4E5F5049 
 8282      4F305F33 
 8282      204D4D49 
 8282      4F283078 
 8283              	.LASF1115:
 8284 34c9 64696769 		.ascii	"digitalPinToBitMask(P) *(digital_pin_to_bit_mask_PG"
 8284      74616C50 
 8284      696E546F 
 8284      4269744D 
 8284      61736B28 
 8285 34fc 4D202B20 		.ascii	"M + (P))\000"
 8285      28502929 
 8285      00
 8286              	.LASF586:
 8287 3505 5F524545 		.ascii	"_REENT_INIT(var) { 0, &(var).__sf[0], &(var).__sf[1"
 8287      4E545F49 
 8287      4E495428 
 8287      76617229 
 8287      207B2030 
 8288 3538 5D2C2026 		.ascii	"], &(var).__sf[2], 0, \"\", 0, \"C\", 0, _NULL, _NU"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 192


 8288      28766172 
 8288      292E5F5F 
 8288      73665B32 
 8288      5D2C2030 
 8289 3567 4C4C2C20 		.ascii	"LL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, \"\", "
 8289      302C205F 
 8289      4E554C4C 
 8289      2C205F4E 
 8289      554C4C2C 
 8290 3598 7B302C20 		.ascii	"{0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_"
 8290      302C2030 
 8290      2C20302C 
 8290      20302C20 
 8290      302C2030 
 8291 35cb 302C205F 		.ascii	"0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0"
 8291      52414E44 
 8291      34385F53 
 8291      4545445F 
 8291      312C205F 
 8292 35fe 2C205F52 		.ascii	", _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {"
 8292      414E4434 
 8292      385F4D55 
 8292      4C545F31 
 8292      2C205F52 
 8293 3631 302C207B 		.ascii	"0, {0}}, {0, {0}}, {0, {0}}, \"\", \"\", 0, {0, {0}"
 8293      307D7D2C 
 8293      207B302C 
 8293      207B307D 
 8293      7D2C207B 
 8294 3660 7D2C207B 		.ascii	"}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _NUL"
 8294      302C207B 
 8294      307D7D2C 
 8294      207B302C 
 8294      207B307D 
 8295 3693 4C2C207B 		.ascii	"L, {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}, _"
 8295      5F4E554C 
 8295      4C2C2030 
 8295      2C207B5F 
 8295      4E554C4C 
 8296 36c6 4E554C4C 		.ascii	"NULL, {_NULL, 0, _NULL} }\000"
 8296      2C207B5F 
 8296      4E554C4C 
 8296      2C20302C 
 8296      205F4E55 
 8297              	.LASF616:
 8298 36e0 5F524545 		.ascii	"_REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)"
 8298      4E545F4C 
 8298      3634415F 
 8298      42554628 
 8298      70747229 
 8299 3713 00       		.ascii	"\000"
 8300              	.LASF892:
 8301 3714 5F545F50 		.ascii	"_T_PTRDIFF_ \000"
 8301      54524449 
 8301      46465F20 
 8301      00
 8302              	.LASF813:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 193


 8303 3721 50524978 		.ascii	"PRIxFAST32 __PRI32(x)\000"
 8303      46415354 
 8303      3332205F 
 8303      5F505249 
 8303      33322878 
 8304              	.LASF291:
 8305 3737 5F5F4C44 		.ascii	"__LDBL_DENORM_MIN__ 4.9406564584124654e-324L\000"
 8305      424C5F44 
 8305      454E4F52 
 8305      4D5F4D49 
 8305      4E5F5F20 
 8306              	.LASF481:
 8307 3764 5F5F4558 		.ascii	"__EXPORT \000"
 8307      504F5254 
 8307      2000
 8308              	.LASF840:
 8309 376e 53434E69 		.ascii	"SCNiLEAST64 __SCN64(i)\000"
 8309      4C454153 
 8309      54363420 
 8309      5F5F5343 
 8309      4E363428 
 8310              	.LASF643:
 8311 3785 5F5F696E 		.ascii	"__int16_t_defined 1\000"
 8311      7431365F 
 8311      745F6465 
 8311      66696E65 
 8311      64203100 
 8312              	.LASF352:
 8313 3799 5F5F554C 		.ascii	"__ULLFRACT_IBIT__ 0\000"
 8313      4C465241 
 8313      43545F49 
 8313      4249545F 
 8313      5F203000 
 8314              	.LASF792:
 8315 37ad 50524958 		.ascii	"PRIX32 __PRI32(X)\000"
 8315      3332205F 
 8315      5F505249 
 8315      33322858 
 8315      2900
 8316              	.LASF594:
 8317 37bf 5F524545 		.ascii	"_REENT_CHECK_SIGNAL_BUF(ptr) \000"
 8317      4E545F43 
 8317      4845434B 
 8317      5F534947 
 8317      4E414C5F 
 8318              	.LASF887:
 8319 37dd 5F535444 		.ascii	"_STDDEF_H \000"
 8319      4445465F 
 8319      482000
 8320              	.LASF119:
 8321 37e8 4932434F 		.ascii	"I2CONCLR_SIC (0x1<<3)\000"
 8321      4E434C52 
 8321      5F534943 
 8321      20283078 
 8321      313C3C33 
 8322              	.LASF802:
 8323 37fe 50524978 		.ascii	"PRIxLEAST32 __PRI32(x)\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 194


 8323      4C454153 
 8323      54333220 
 8323      5F5F5052 
 8323      49333228 
 8324              	.LASF1082:
 8325 3815 48414C46 		.ascii	"HALF_PI 1.5707963267948966192313216916398\000"
 8325      5F504920 
 8325      312E3537 
 8325      30373936 
 8325      33323637 
 8326              	.LASF574:
 8327 383f 5F524545 		.ascii	"_REENT_SMALL_CHECK_INIT(ptr) \000"
 8327      4E545F53 
 8327      4D414C4C 
 8327      5F434845 
 8327      434B5F49 
 8328              	.LASF563:
 8329 385d 5F5F6C6F 		.ascii	"__lock_acquire(lock) (_CAST_VOID 0)\000"
 8329      636B5F61 
 8329      63717569 
 8329      7265286C 
 8329      6F636B29 
 8330              	.LASF689:
 8331 3881 494E545F 		.ascii	"INT_FAST64_MIN INT_LEAST64_MIN\000"
 8331      46415354 
 8331      36345F4D 
 8331      494E2049 
 8331      4E545F4C 
 8332              	.LASF789:
 8333 38a0 5052496F 		.ascii	"PRIo32 __PRI32(o)\000"
 8333      3332205F 
 8333      5F505249 
 8333      3332286F 
 8333      2900
 8334              	.LASF652:
 8335 38b2 5F5F696E 		.ascii	"__int_fast64_t_defined 1\000"
 8335      745F6661 
 8335      73743634 
 8335      5F745F64 
 8335      6566696E 
 8336              	.LASF787:
 8337 38cb 50524964 		.ascii	"PRId32 __PRI32(d)\000"
 8337      3332205F 
 8337      5F505249 
 8337      33322864 
 8337      2900
 8338              	.LASF36:
 8339 38dd 5F5F696E 		.ascii	"__initialize_p\000"
 8339      69746961 
 8339      6C697A65 
 8339      5F7000
 8340              	.LASF260:
 8341 38ec 5F5F464C 		.ascii	"__FLT_MAX__ 3.4028234663852886e+38F\000"
 8341      545F4D41 
 8341      585F5F20 
 8341      332E3430 
 8341      32383233 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 195


 8342              	.LASF371:
 8343 3910 5F5F5541 		.ascii	"__UACCUM_FBIT__ 16\000"
 8343      4343554D 
 8343      5F464249 
 8343      545F5F20 
 8343      313600
 8344              	.LASF1056:
 8345 3923 49324330 		.ascii	"I2C0ADR0 MMIO(0x4000000C)\000"
 8345      41445230 
 8345      204D4D49 
 8345      4F283078 
 8345      34303030 
 8346              	.LASF883:
 8347 393d 5F5F6E65 		.ascii	"__need___va_list\000"
 8347      65645F5F 
 8347      5F76615F 
 8347      6C697374 
 8347      00
 8348              	.LASF335:
 8349 394e 5F5F5546 		.ascii	"__UFRACT_EPSILON__ 0x1P-16UR\000"
 8349      52414354 
 8349      5F455053 
 8349      494C4F4E 
 8349      5F5F2030 
 8350              	.LASF205:
 8351 396b 5F5F5743 		.ascii	"__WCHAR_MIN__ 0U\000"
 8351      4841525F 
 8351      4D494E5F 
 8351      5F203055 
 8351      00
 8352              	.LASF222:
 8353 397c 5F5F5549 		.ascii	"__UINT32_MAX__ 4294967295UL\000"
 8353      4E543332 
 8353      5F4D4158 
 8353      5F5F2034 
 8353      32393439 
 8354              	.LASF407:
 8355 3998 5F5F5551 		.ascii	"__UQQ_IBIT__ 0\000"
 8355      515F4942 
 8355      49545F5F 
 8355      203000
 8356              	.LASF1094:
 8357 39a7 45585445 		.ascii	"EXTERNAL 0\000"
 8357      524E414C 
 8357      203000
 8358              	.LASF1042:
 8359 39b2 544D5231 		.ascii	"TMR16B0TC MMIO(0x4000C008)\000"
 8359      36423054 
 8359      43204D4D 
 8359      494F2830 
 8359      78343030 
 8360              	.LASF444:
 8361 39cd 5F5F4743 		.ascii	"__GCC_ATOMIC_LONG_LOCK_FREE 1\000"
 8361      435F4154 
 8361      4F4D4943 
 8361      5F4C4F4E 
 8361      475F4C4F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 196


 8362              	.LASF383:
 8363 39eb 5F5F554C 		.ascii	"__ULACCUM_MIN__ 0.0ULK\000"
 8363      41434355 
 8363      4D5F4D49 
 8363      4E5F5F20 
 8363      302E3055 
 8364              	.LASF473:
 8365 3a02 5F415445 		.ascii	"_ATEXIT_DYNAMIC_ALLOC 1\000"
 8365      5849545F 
 8365      44594E41 
 8365      4D49435F 
 8365      414C4C4F 
 8366              	.LASF528:
 8367 3a1a 5F5F6E65 		.ascii	"__need_size_t\000"
 8367      65645F73 
 8367      697A655F 
 8367      7400
 8368              	.LASF288:
 8369 3a28 5F5F4C44 		.ascii	"__LDBL_MAX__ 1.7976931348623157e+308L\000"
 8369      424C5F4D 
 8369      41585F5F 
 8369      20312E37 
 8369      39373639 
 8370              	.LASF1143:
 8371 3a4e 54494D45 		.ascii	"TIMER3B 9\000"
 8371      52334220 
 8371      3900
 8372              	.LASF1027:
 8373 3a58 5359534F 		.ascii	"SYSOSCCTRL MMIO(0x40048020)\000"
 8373      53434354 
 8373      524C204D 
 8373      4D494F28 
 8373      30783430 
 8374              	.LASF518:
 8375 3a74 5F53495A 		.ascii	"_SIZE_T_ \000"
 8375      455F545F 
 8375      2000
 8376              	.LASF494:
 8377 3a7e 5F444F54 		.ascii	"_DOTS , ...\000"
 8377      53202C20 
 8377      2E2E2E00 
 8378              	.LASF252:
 8379 3a8a 5F5F464C 		.ascii	"__FLT_RADIX__ 2\000"
 8379      545F5241 
 8379      4449585F 
 8379      5F203200 
 8380              	.LASF79:
 8381 3a9a 5F494E54 		.ascii	"_INTTYPES_H \000"
 8381      54595045 
 8381      535F4820 
 8381      00
 8382              	.LASF5:
 8383 3aa7 6C6F6E67 		.ascii	"long long int\000"
 8383      206C6F6E 
 8383      6720696E 
 8383      7400
 8384              	.LASF598:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 197


 8385 3ab5 5F524545 		.ascii	"_REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._m"
 8385      4E545F52 
 8385      414E4434 
 8385      385F4D55 
 8385      4C542870 
 8386 3ae8 756C7429 		.ascii	"ult)\000"
 8386      00
 8387              	.LASF634:
 8388 3aed 73747269 		.ascii	"stricmp strcasecmp\000"
 8388      636D7020 
 8388      73747263 
 8388      61736563 
 8388      6D7000
 8389              	.LASF678:
 8390 3b00 494E545F 		.ascii	"INT_LEAST64_MAX 9223372036854775807LL\000"
 8390      4C454153 
 8390      5436345F 
 8390      4D415820 
 8390      39323233 
 8391              	.LASF708:
 8392 3b26 494E5433 		.ascii	"INT32_C(x) x ##L\000"
 8392      325F4328 
 8392      78292078 
 8392      2023234C 
 8392      00
 8393              	.LASF26:
 8394 3b37 5F5A4E37 		.ascii	"_ZN7TwoWire11requestFromEhhh\000"
 8394      54776F57 
 8394      69726531 
 8394      31726571 
 8394      75657374 
 8395              	.LASF236:
 8396 3b54 5F5F5549 		.ascii	"__UINT_LEAST32_MAX__ 4294967295UL\000"
 8396      4E545F4C 
 8396      45415354 
 8396      33325F4D 
 8396      41585F5F 
 8397              	.LASF546:
 8398 3b76 5F5F6E65 		.ascii	"__need_NULL\000"
 8398      65645F4E 
 8398      554C4C00 
 8399              	.LASF967:
 8400 3b82 5F5F5641 		.ascii	"__VALIST __gnuc_va_list\000"
 8400      4C495354 
 8400      205F5F67 
 8400      6E75635F 
 8400      76615F6C 
 8401              	.LASF956:
 8402 3b9a 505F746D 		.ascii	"P_tmpdir \"/tmp\"\000"
 8402      70646972 
 8402      20222F74 
 8402      6D702200 
 8403              	.LASF91:
 8404 3baa 5F5F5446 		.ascii	"__TFP_PRINTF__ \000"
 8404      505F5052 
 8404      494E5446 
 8404      5F5F2000 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 198


 8405              	.LASF1071:
 8406 3bba 5F5F7661 		.ascii	"__va_list__ \000"
 8406      5F6C6973 
 8406      745F5F20 
 8406      00
 8407              	.LASF891:
 8408 3bc7 5F505452 		.ascii	"_PTRDIFF_T \000"
 8408      44494646 
 8408      5F542000 
 8409              	.LASF104:
 8410 3bd3 44415441 		.ascii	"DATA_ACK 4\000"
 8410      5F41434B 
 8410      203400
 8411              	.LASF188:
 8412 3bde 5F5F494E 		.ascii	"__INT_FAST32_TYPE__ int\000"
 8412      545F4641 
 8412      53543332 
 8412      5F545950 
 8412      455F5F20 
 8413              	.LASF54:
 8414 3bf6 49324343 		.ascii	"I2CCount\000"
 8414      6F756E74 
 8414      00
 8415              	.LASF1121:
 8416 3bff 4E4F545F 		.ascii	"NOT_A_PIN 0\000"
 8416      415F5049 
 8416      4E203000 
 8417              	.LASF417:
 8418 3c0b 5F5F4841 		.ascii	"__HA_IBIT__ 8\000"
 8418      5F494249 
 8418      545F5F20 
 8418      3800
 8419              	.LASF95:
 8420 3c19 4932434D 		.ascii	"I2CMASTER 0x01\000"
 8420      41535445 
 8420      52203078 
 8420      303100
 8421              	.LASF814:
 8422 3c28 50524958 		.ascii	"PRIXFAST32 __PRI32(X)\000"
 8422      46415354 
 8422      3332205F 
 8422      5F505249 
 8422      33322858 
 8423              	.LASF567:
 8424 3c3e 5F5F6C6F 		.ascii	"__lock_release(lock) (_CAST_VOID 0)\000"
 8424      636B5F72 
 8424      656C6561 
 8424      7365286C 
 8424      6F636B29 
 8425              	.LASF692:
 8426 3c62 494E544D 		.ascii	"INTMAX_MAX __INTMAX_MAX__\000"
 8426      41585F4D 
 8426      4158205F 
 8426      5F494E54 
 8426      4D41585F 
 8427              	.LASF534:
 8428 3c7c 5F5F5743 		.ascii	"__WCHAR_T \000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 199


 8428      4841525F 
 8428      542000
 8429              	.LASF73:
 8430 3c87 5F5F5359 		.ascii	"__SYS_CONFIG_H__ \000"
 8430      535F434F 
 8430      4E464947 
 8430      5F485F5F 
 8430      2000
 8431              	.LASF630:
 8432 3c99 4D425F43 		.ascii	"MB_CUR_MAX __locale_mb_cur_max()\000"
 8432      55525F4D 
 8432      4158205F 
 8432      5F6C6F63 
 8432      616C655F 
 8433              	.LASF959:
 8434 3cba 5345454B 		.ascii	"SEEK_END 2\000"
 8434      5F454E44 
 8434      203200
 8435              	.LASF552:
 8436 3cc5 5F5F5F69 		.ascii	"___int32_t_defined 1\000"
 8436      6E743332 
 8436      5F745F64 
 8436      6566696E 
 8436      65642031 
 8437              	.LASF829:
 8438 3cda 53434E69 		.ascii	"SCNi64 __SCN64(i)\000"
 8438      3634205F 
 8438      5F53434E 
 8438      36342869 
 8438      2900
 8439              	.LASF740:
 8440 3cec 50524969 		.ascii	"PRIiFAST8 __PRI8(i)\000"
 8440      46415354 
 8440      38205F5F 
 8440      50524938 
 8440      28692900 
 8441              	.LASF173:
 8442 3d00 5F5F494E 		.ascii	"__INT64_TYPE__ long long int\000"
 8442      5436345F 
 8442      54595045 
 8442      5F5F206C 
 8442      6F6E6720 
 8443              	.LASF336:
 8444 3d1d 5F5F4C46 		.ascii	"__LFRACT_FBIT__ 31\000"
 8444      52414354 
 8444      5F464249 
 8444      545F5F20 
 8444      333100
 8445              	.LASF22:
 8446 3d30 656E6454 		.ascii	"endTransmission\000"
 8446      72616E73 
 8446      6D697373 
 8446      696F6E00 
 8447              	.LASF950:
 8448 3d40 5F494F4E 		.ascii	"_IONBF 2\000"
 8448      42462032 
 8448      00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 200


 8449              	.LASF450:
 8450 3d49 5F5F5349 		.ascii	"__SIZEOF_WCHAR_T__ 4\000"
 8450      5A454F46 
 8450      5F574348 
 8450      41525F54 
 8450      5F5F2034 
 8451              	.LASF659:
 8452 3d5e 494E545F 		.ascii	"INT_LEAST8_MIN -128\000"
 8452      4C454153 
 8452      54385F4D 
 8452      494E202D 
 8452      31323800 
 8453              	.LASF685:
 8454 3d72 55494E54 		.ascii	"UINT_FAST16_MAX (__STDINT_EXP(INT_MAX)*2U+1U)\000"
 8454      5F464153 
 8454      5431365F 
 8454      4D415820 
 8454      285F5F53 
 8455              	.LASF876:
 8456 3da0 53434E64 		.ascii	"SCNdPTR __SCNPTR(d)\000"
 8456      50545220 
 8456      5F5F5343 
 8456      4E505452 
 8456      28642900 
 8457              	.LASF877:
 8458 3db4 53434E69 		.ascii	"SCNiPTR __SCNPTR(i)\000"
 8458      50545220 
 8458      5F5F5343 
 8458      4E505452 
 8458      28692900 
 8459              	.LASF334:
 8460 3dc8 5F5F5546 		.ascii	"__UFRACT_MAX__ 0XFFFFP-16UR\000"
 8460      52414354 
 8460      5F4D4158 
 8460      5F5F2030 
 8460      58464646 
 8461              	.LASF719:
 8462 3de4 5052496F 		.ascii	"PRIo8 __PRI8(o)\000"
 8462      38205F5F 
 8462      50524938 
 8462      286F2900 
 8463              	.LASF638:
 8464 3df4 5F5F5354 		.ascii	"__STDINT_EXP(x) __ ##x ##__\000"
 8464      44494E54 
 8464      5F455850 
 8464      28782920 
 8464      5F5F2023 
 8465              	.LASF548:
 8466 3e10 5F5F4558 		.ascii	"__EXP(x) __ ##x ##__\000"
 8466      50287829 
 8466      205F5F20 
 8466      23237820 
 8466      23235F5F 
 8467              	.LASF995:
 8468 3e25 5F432030 		.ascii	"_C 040\000"
 8468      343000
 8469              	.LASF157:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 201


 8470 3e2c 5F5F4259 		.ascii	"__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 8470      54455F4F 
 8470      52444552 
 8470      5F5F205F 
 8470      5F4F5244 
 8471              	.LASF1074:
 8472 3e53 48494748 		.ascii	"HIGH 0x1\000"
 8472      20307831 
 8472      00
 8473              	.LASF50:
 8474 3e5c 74696D65 		.ascii	"timeout\000"
 8474      6F757400 
 8475              	.LASF14:
 8476 3e64 666C6F61 		.ascii	"float\000"
 8476      7400
 8477              	.LASF980:
 8478 3e6a 636C6561 		.ascii	"clearerr(p) __sclearerr(p)\000"
 8478      72657272 
 8478      28702920 
 8478      5F5F7363 
 8478      6C656172 
 8479              	.LASF349:
 8480 3e85 5F5F4C4C 		.ascii	"__LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR\000"
 8480      46524143 
 8480      545F4D41 
 8480      585F5F20 
 8480      30583746 
 8481              	.LASF72:
 8482 3eaf 5F414E53 		.ascii	"_ANSIDECL_H_ \000"
 8482      49444543 
 8482      4C5F485F 
 8482      2000
 8483              	.LASF726:
 8484 3ebd 53434E75 		.ascii	"SCNu8 __SCN8(u)\000"
 8484      38205F5F 
 8484      53434E38 
 8484      28752900 
 8485              	.LASF951:
 8486 3ecd 454F4620 		.ascii	"EOF (-1)\000"
 8486      282D3129 
 8486      00
 8487              	.LASF1022:
 8488 3ed6 494F434F 		.ascii	"IOCON_PIO1_6 MMIO(0x400440A4)\000"
 8488      4E5F5049 
 8488      4F315F36 
 8488      204D4D49 
 8488      4F283078 
 8489              	.LASF331:
 8490 3ef4 5F5F5546 		.ascii	"__UFRACT_FBIT__ 16\000"
 8490      52414354 
 8490      5F464249 
 8490      545F5F20 
 8490      313600
 8491              	.LASF412:
 8492 3f07 5F5F5544 		.ascii	"__UDQ_FBIT__ 64\000"
 8492      515F4642 
 8492      49545F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 202


 8492      20363400 
 8493              	.LASF650:
 8494 3f17 5F5F696E 		.ascii	"__int_fast16_t_defined 1\000"
 8494      745F6661 
 8494      73743136 
 8494      5F745F64 
 8494      6566696E 
 8495              	.LASF286:
 8496 3f30 5F5F4C44 		.ascii	"__LDBL_MAX_10_EXP__ 308\000"
 8496      424C5F4D 
 8496      41585F31 
 8496      305F4558 
 8496      505F5F20 
 8497              	.LASF937:
 8498 3f48 5F5F5345 		.ascii	"__SEOF 0x0020\000"
 8498      4F462030 
 8498      78303032 
 8498      3000
 8499              	.LASF33:
 8500 3f56 72656164 		.ascii	"read\000"
 8500      00
 8501              	.LASF1041:
 8502 3f5b 544D5231 		.ascii	"TMR16B0TCR MMIO(0x4000C004)\000"
 8502      36423054 
 8502      4352204D 
 8502      4D494F28 
 8502      30783430 
 8503              	.LASF121:
 8504 3f77 4932434F 		.ascii	"I2CONCLR_I2ENC (0x1<<6)\000"
 8504      4E434C52 
 8504      5F493245 
 8504      4E432028 
 8504      3078313C 
 8505              	.LASF668:
 8506 3f8f 494E5433 		.ascii	"INT32_MIN (-2147483647L-1)\000"
 8506      325F4D49 
 8506      4E20282D 
 8506      32313437 
 8506      34383336 
 8507              	.LASF1035:
 8508 3faa 4750494F 		.ascii	"GPIO0DIR MMIO(0x50008000)\000"
 8508      30444952 
 8508      204D4D49 
 8508      4F283078 
 8508      35303030 
 8509              	.LASF1012:
 8510 3fc4 55304643 		.ascii	"U0FCR MMIO(0x40008008)\000"
 8510      52204D4D 
 8510      494F2830 
 8510      78343030 
 8510      30383030 
 8511              	.LASF0:
 8512 3fdb 756E7369 		.ascii	"unsigned int\000"
 8512      676E6564 
 8512      20696E74 
 8512      00
 8513              	.LASF520:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 203


 8514 3fe8 5F53495A 		.ascii	"_SIZE_T_DEFINED_ \000"
 8514      455F545F 
 8514      44454649 
 8514      4E45445F 
 8514      2000
 8515              	.LASF1000:
 8516 3ffa 44454320 		.ascii	"DEC 10\000"
 8516      313000
 8517              	.LASF1067:
 8518 4001 5F56415F 		.ascii	"_VA_LIST_ \000"
 8518      4C495354 
 8518      5F2000
 8519              	.LASF255:
 8520 400c 5F5F464C 		.ascii	"__FLT_MIN_EXP__ (-125)\000"
 8520      545F4D49 
 8520      4E5F4558 
 8520      505F5F20 
 8520      282D3132 
 8521              	.LASF251:
 8522 4023 5F5F4445 		.ascii	"__DEC_EVAL_METHOD__ 2\000"
 8522      435F4556 
 8522      414C5F4D 
 8522      4554484F 
 8522      445F5F20 
 8523              	.LASF709:
 8524 4039 55494E54 		.ascii	"UINT32_C(x) x ##UL\000"
 8524      33325F43 
 8524      28782920 
 8524      78202323 
 8524      554C00
 8525              	.LASF362:
 8526 404c 5F5F5553 		.ascii	"__USACCUM_IBIT__ 8\000"
 8526      41434355 
 8526      4D5F4942 
 8526      49545F5F 
 8526      203800
 8527              	.LASF1144:
 8528 405f 54494D45 		.ascii	"TIMER3C 10\000"
 8528      52334320 
 8528      313000
 8529              	.LASF249:
 8530 406a 5F5F5549 		.ascii	"__UINTPTR_MAX__ 4294967295U\000"
 8530      4E545054 
 8530      525F4D41 
 8530      585F5F20 
 8530      34323934 
 8531              	.LASF909:
 8532 4086 70687973 		.ascii	"physadr physadr_t\000"
 8532      61647220 
 8532      70687973 
 8532      6164725F 
 8532      7400
 8533              	.LASF254:
 8534 4098 5F5F464C 		.ascii	"__FLT_DIG__ 6\000"
 8534      545F4449 
 8534      475F5F20 
 8534      3600
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 204


 8535              	.LASF375:
 8536 40a6 5F5F5541 		.ascii	"__UACCUM_EPSILON__ 0x1P-16UK\000"
 8536      4343554D 
 8536      5F455053 
 8536      494C4F4E 
 8536      5F5F2030 
 8537              	.LASF543:
 8538 40c3 5F574348 		.ascii	"_WCHAR_T_DECLARED \000"
 8538      41525F54 
 8538      5F444543 
 8538      4C415245 
 8538      442000
 8539              	.LASF431:
 8540 40d6 5F5F5554 		.ascii	"__UTA_IBIT__ 64\000"
 8540      415F4942 
 8540      49545F5F 
 8540      20363400 
 8541              	.LASF152:
 8542 40e6 5F5F4348 		.ascii	"__CHAR_BIT__ 8\000"
 8542      41525F42 
 8542      49545F5F 
 8542      203800
 8543              	.LASF74:
 8544 40f5 5F535953 		.ascii	"_SYS_REENT_H_ \000"
 8544      5F524545 
 8544      4E545F48 
 8544      5F2000
 8545              	.LASF250:
 8546 4104 5F5F464C 		.ascii	"__FLT_EVAL_METHOD__ 0\000"
 8546      545F4556 
 8546      414C5F4D 
 8546      4554484F 
 8546      445F5F20 
 8547              	.LASF1051:
 8548 411a 49535052 		.ascii	"ISPR MMIO(0xE000E200)\000"
 8548      204D4D49 
 8548      4F283078 
 8548      45303030 
 8548      45323030 
 8549              	.LASF748:
 8550 4130 53434E75 		.ascii	"SCNuFAST8 __SCN8(u)\000"
 8550      46415354 
 8550      38205F5F 
 8550      53434E38 
 8550      28752900 
 8551              	.LASF793:
 8552 4144 53434E64 		.ascii	"SCNd32 __SCN32(d)\000"
 8552      3332205F 
 8552      5F53434E 
 8552      33322864 
 8552      2900
 8553              	.LASF790:
 8554 4156 50524975 		.ascii	"PRIu32 __PRI32(u)\000"
 8554      3332205F 
 8554      5F505249 
 8554      33322875 
 8554      2900
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 205


 8555              	.LASF134:
 8556 4168 5F5F5645 		.ascii	"__VERSION__ \"4.7.4 20130613 (release) [ARM/embedde"
 8556      5253494F 
 8556      4E5F5F20 
 8556      22342E37 
 8556      2E342032 
 8557 419a 642D345F 		.ascii	"d-4_7-branch revision 200083]\"\000"
 8557      372D6272 
 8557      616E6368 
 8557      20726576 
 8557      6973696F 
 8558              	.LASF580:
 8559 41b9 5F52414E 		.ascii	"_RAND48_MULT_2 (0x0005)\000"
 8559      4434385F 
 8559      4D554C54 
 8559      5F322028 
 8559      30783030 
 8560              	.LASF496:
 8561 41d1 5F455846 		.ascii	"_EXFUN_NOTHROW(name,proto) name proto _NOTHROW\000"
 8561      554E5F4E 
 8561      4F544852 
 8561      4F57286E 
 8561      616D652C 
 8562              	.LASF40:
 8563 4200 73656E64 		.ascii	"sendStop\000"
 8563      53746F70 
 8563      00
 8564              	.LASF893:
 8565 4209 5F545F50 		.ascii	"_T_PTRDIFF \000"
 8565      54524449 
 8565      46462000 
 8566              	.LASF406:
 8567 4215 5F5F5551 		.ascii	"__UQQ_FBIT__ 8\000"
 8567      515F4642 
 8567      49545F5F 
 8567      203800
 8568              	.LASF915:
 8569 4224 4E424259 		.ascii	"NBBY 8\000"
 8569      203800
 8570              	.LASF303:
 8571 422b 5F5F4445 		.ascii	"__DEC64_MIN_EXP__ (-382)\000"
 8571      4336345F 
 8571      4D494E5F 
 8571      4558505F 
 8571      5F20282D 
 8572              	.LASF374:
 8573 4244 5F5F5541 		.ascii	"__UACCUM_MAX__ 0XFFFFFFFFP-16UK\000"
 8573      4343554D 
 8573      5F4D4158 
 8573      5F5F2030 
 8573      58464646 
 8574              	.LASF905:
 8575 4264 5F54494D 		.ascii	"_TIME_T_ long\000"
 8575      455F545F 
 8575      206C6F6E 
 8575      6700
 8576              	.LASF111:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 206


 8577 4272 4932435F 		.ascii	"I2C_TIME_OUT 11\000"
 8577      54494D45 
 8577      5F4F5554 
 8577      20313100 
 8578              	.LASF624:
 8579 4282 616C6C6F 		.ascii	"alloca\000"
 8579      636100
 8580              	.LASF339:
 8581 4289 5F5F4C46 		.ascii	"__LFRACT_MAX__ 0X7FFFFFFFP-31LR\000"
 8581      52414354 
 8581      5F4D4158 
 8581      5F5F2030 
 8581      58374646 
 8582              	.LASF452:
 8583 42a9 5F5F5349 		.ascii	"__SIZEOF_PTRDIFF_T__ 4\000"
 8583      5A454F46 
 8583      5F505452 
 8583      44494646 
 8583      5F545F5F 
 8584              	.LASF530:
 8585 42c0 5F5F5743 		.ascii	"__WCHAR_T__ \000"
 8585      4841525F 
 8585      545F5F20 
 8585      00
 8586              	.LASF1146:
 8587 42cd 54494D45 		.ascii	"TIMER4B 12\000"
 8587      52344220 
 8587      313200
 8588              	.LASF782:
 8589 42d8 53434E6F 		.ascii	"SCNoFAST16 __SCN16(o)\000"
 8589      46415354 
 8589      3136205F 
 8589      5F53434E 
 8589      3136286F 
 8590              	.LASF1101:
 8591 42ee 73712878 		.ascii	"sq(x) ((x)*(x))\000"
 8591      29202828 
 8591      78292A28 
 8591      78292900 
 8592              	.LASF158:
 8593 42fe 5F5F464C 		.ascii	"__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 8593      4F41545F 
 8593      574F5244 
 8593      5F4F5244 
 8593      45525F5F 
 8594              	.LASF174:
 8595 432b 5F5F5549 		.ascii	"__UINT8_TYPE__ unsigned char\000"
 8595      4E54385F 
 8595      54595045 
 8595      5F5F2075 
 8595      6E736967 
 8596              	.LASF25:
 8597 4348 72657175 		.ascii	"requestFrom\000"
 8597      65737446 
 8597      726F6D00 
 8598              	.LASF649:
 8599 4354 5F5F696E 		.ascii	"__int_fast8_t_defined 1\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 207


 8599      745F6661 
 8599      7374385F 
 8599      745F6465 
 8599      66696E65 
 8600              	.LASF1046:
 8601 436c 53595354 		.ascii	"SYST_CSR MMIO(0xE000E010)\000"
 8601      5F435352 
 8601      204D4D49 
 8601      4F283078 
 8601      45303030 
 8602              	.LASF954:
 8603 4386 46494C45 		.ascii	"FILENAME_MAX 1024\000"
 8603      4E414D45 
 8603      5F4D4158 
 8603      20313032 
 8603      3400
 8604              	.LASF725:
 8605 4398 53434E6F 		.ascii	"SCNo8 __SCN8(o)\000"
 8605      38205F5F 
 8605      53434E38 
 8605      286F2900 
 8606              	.LASF1104:
 8607 43a8 636C6F63 		.ascii	"clockCyclesPerMicrosecond() ( F_CPU / 1000000L )\000"
 8607      6B437963 
 8607      6C657350 
 8607      65724D69 
 8607      63726F73 
 8608              	.LASF1148:
 8609 43d9 54494D45 		.ascii	"TIMER4D 14\000"
 8609      52344420 
 8609      313400
 8610              	.LASF309:
 8611 43e4 5F5F4445 		.ascii	"__DEC128_MANT_DIG__ 34\000"
 8611      43313238 
 8611      5F4D414E 
 8611      545F4449 
 8611      475F5F20 
 8612              	.LASF214:
 8613 43fb 5F5F5349 		.ascii	"__SIG_ATOMIC_MAX__ 2147483647\000"
 8613      475F4154 
 8613      4F4D4943 
 8613      5F4D4158 
 8613      5F5F2032 
 8614              	.LASF714:
 8615 4419 5F5F5354 		.ascii	"__STRINGIFY(a) #a\000"
 8615      52494E47 
 8615      49465928 
 8615      61292023 
 8615      6100
 8616              	.LASF912:
 8617 442b 5F5F636C 		.ascii	"__clock_t_defined \000"
 8617      6F636B5F 
 8617      745F6465 
 8617      66696E65 
 8617      642000
 8618              	.LASF573:
 8619 443e 5F415445 		.ascii	"_ATEXIT_SIZE 32\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 208


 8619      5849545F 
 8619      53495A45 
 8619      20333200 
 8620              	.LASF426:
 8621 444e 5F5F5553 		.ascii	"__USA_FBIT__ 16\000"
 8621      415F4642 
 8621      49545F5F 
 8621      20313600 
 8622              	.LASF76:
 8623 445e 5F4D4143 		.ascii	"_MACHINE__TYPES_H \000"
 8623      48494E45 
 8623      5F5F5459 
 8623      5045535F 
 8623      482000
 8624              	.LASF559:
 8625 4471 5F5F6C6F 		.ascii	"__lock_init(lock) (_CAST_VOID 0)\000"
 8625      636B5F69 
 8625      6E697428 
 8625      6C6F636B 
 8625      2920285F 
 8626              	.LASF71:
 8627 4492 5F5F4945 		.ascii	"__IEEE_LITTLE_ENDIAN \000"
 8627      45455F4C 
 8627      4954544C 
 8627      455F454E 
 8627      4449414E 
 8628              	.LASF7:
 8629 44a8 6C6F6E67 		.ascii	"long int\000"
 8629      20696E74 
 8629      00
 8630              	.LASF108:
 8631 44b1 4932435F 		.ascii	"I2C_NACK_ON_ADDRESS 8\000"
 8631      4E41434B 
 8631      5F4F4E5F 
 8631      41444452 
 8631      45535320 
 8632              	.LASF266:
 8633 44c7 5F5F464C 		.ascii	"__FLT_HAS_QUIET_NAN__ 1\000"
 8633      545F4841 
 8633      535F5155 
 8633      4945545F 
 8633      4E414E5F 
 8634              	.LASF438:
 8635 44df 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR_LOCK_FREE 1\000"
 8635      435F4154 
 8635      4F4D4943 
 8635      5F434841 
 8635      525F4C4F 
 8636              	.LASF498:
 8637 44fd 5F455850 		.ascii	"_EXPARM(name,proto) (* name) proto\000"
 8637      41524D28 
 8637      6E616D65 
 8637      2C70726F 
 8637      746F2920 
 8638              	.LASF337:
 8639 4520 5F5F4C46 		.ascii	"__LFRACT_IBIT__ 0\000"
 8639      52414354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 209


 8639      5F494249 
 8639      545F5F20 
 8639      3000
 8640              	.LASF715:
 8641 4532 5F5F5052 		.ascii	"__PRI8(x) __STRINGIFY(x)\000"
 8641      49382878 
 8641      29205F5F 
 8641      53545249 
 8641      4E474946 
 8642              	.LASF340:
 8643 454b 5F5F4C46 		.ascii	"__LFRACT_EPSILON__ 0x1P-31LR\000"
 8643      52414354 
 8643      5F455053 
 8643      494C4F4E 
 8643      5F5F2030 
 8644              	.LASF723:
 8645 4568 53434E64 		.ascii	"SCNd8 __SCN8(d)\000"
 8645      38205F5F 
 8645      53434E38 
 8645      28642900 
 8646              	.LASF724:
 8647 4578 53434E69 		.ascii	"SCNi8 __SCN8(i)\000"
 8647      38205F5F 
 8647      53434E38 
 8647      28692900 
 8648              	.LASF697:
 8649 4588 5349475F 		.ascii	"SIG_ATOMIC_MAX __STDINT_EXP(INT_MAX)\000"
 8649      41544F4D 
 8649      49435F4D 
 8649      4158205F 
 8649      5F535444 
 8650              	.LASF1110:
 8651 45ad 62697453 		.ascii	"bitSet(value,bit) ((value) |= (1UL << (bit)))\000"
 8651      65742876 
 8651      616C7565 
 8651      2C626974 
 8651      29202828 
 8652              	.LASF224:
 8653 45db 5F5F494E 		.ascii	"__INT_LEAST8_MAX__ 127\000"
 8653      545F4C45 
 8653      41535438 
 8653      5F4D4158 
 8653      5F5F2031 
 8654              	.LASF727:
 8655 45f2 53434E78 		.ascii	"SCNx8 __SCN8(x)\000"
 8655      38205F5F 
 8655      53434E38 
 8655      28782900 
 8656              	.LASF688:
 8657 4602 55494E54 		.ascii	"UINT_FAST32_MAX (__STDINT_EXP(INT_MAX)*2U+1U)\000"
 8657      5F464153 
 8657      5433325F 
 8657      4D415820 
 8657      285F5F53 
 8658              	.LASF453:
 8659 4630 5F5F6172 		.ascii	"__arm__ 1\000"
 8659      6D5F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 210


 8659      3100
 8660              	.LASF1095:
 8661 463a 6D696E28 		.ascii	"min(a,b) ((a)<(b)?(a):(b))\000"
 8661      612C6229 
 8661      20282861 
 8661      293C2862 
 8661      293F2861 
 8662              	.LASF690:
 8663 4655 494E545F 		.ascii	"INT_FAST64_MAX INT_LEAST64_MAX\000"
 8663      46415354 
 8663      36345F4D 
 8663      41582049 
 8663      4E545F4C 
 8664              	.LASF965:
 8665 4674 5F737464 		.ascii	"_stdout_r(x) ((x)->_stdout)\000"
 8665      6F75745F 
 8665      72287829 
 8665      20282878 
 8665      292D3E5F 
 8666              	.LASF927:
 8667 4690 5F5F7469 		.ascii	"__timer_t_defined \000"
 8667      6D65725F 
 8667      745F6465 
 8667      66696E65 
 8667      642000
 8668              	.LASF786:
 8669 46a3 5F5F5343 		.ascii	"__SCN32(x) __STRINGIFY(l ##x)\000"
 8669      4E333228 
 8669      7829205F 
 8669      5F535452 
 8669      494E4749 
 8670              	.LASF480:
 8671 46c1 5F5F5241 		.ascii	"__RAND_MAX 0x7fffffff\000"
 8671      4E445F4D 
 8671      41582030 
 8671      78376666 
 8671      66666666 
 8672              	.LASF531:
 8673 46d7 5F574348 		.ascii	"_WCHAR_T \000"
 8673      41525F54 
 8673      2000
 8674              	.LASF733:
 8675 46e1 50524958 		.ascii	"PRIXLEAST8 __PRI8(X)\000"
 8675      4C454153 
 8675      5438205F 
 8675      5F505249 
 8675      38285829 
 8676              	.LASF126:
 8677 46f6 49325343 		.ascii	"I2SCLH_HS_SCLH 0x0000003C\000"
 8677      4C485F48 
 8677      535F5343 
 8677      4C482030 
 8677      78303030 
 8678              	.LASF669:
 8679 4710 494E5433 		.ascii	"INT32_MAX 2147483647L\000"
 8679      325F4D41 
 8679      58203231 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 211


 8679      34373438 
 8679      33363437 
 8680              	.LASF994:
 8681 4726 5F502030 		.ascii	"_P 020\000"
 8681      323000
 8682              	.LASF97:
 8683 472d 50434638 		.ascii	"PCF8594_ADDR 0xA0\000"
 8683      3539345F 
 8683      41444452 
 8683      20307841 
 8683      3000
 8684              	.LASF547:
 8685 473f 5F4D4143 		.ascii	"_MACHINE__DEFAULT_TYPES_H \000"
 8685      48494E45 
 8685      5F5F4445 
 8685      4641554C 
 8685      545F5459 
 8686              	.LASF124:
 8687 475a 49325343 		.ascii	"I2SCLH_SCLH 0x000000F0\000"
 8687      4C485F53 
 8687      434C4820 
 8687      30783030 
 8687      30303030 
 8688              	.LASF898:
 8689 4771 5F474343 		.ascii	"_GCC_PTRDIFF_T \000"
 8689      5F505452 
 8689      44494646 
 8689      5F542000 
 8690              	.LASF423:
 8691 4781 5F5F5441 		.ascii	"__TA_IBIT__ 64\000"
 8691      5F494249 
 8691      545F5F20 
 8691      363400
 8692              	.LASF870:
 8693 4790 50524964 		.ascii	"PRIdPTR __PRIPTR(d)\000"
 8693      50545220 
 8693      5F5F5052 
 8693      49505452 
 8693      28642900 
 8694              	.LASF245:
 8695 47a4 5F5F5549 		.ascii	"__UINT_FAST16_MAX__ 4294967295U\000"
 8695      4E545F46 
 8695      41535431 
 8695      365F4D41 
 8695      585F5F20 
 8696              	.LASF1026:
 8697 47c4 53595350 		.ascii	"SYSPLLSTAT MMIO(0x4004800C)\000"
 8697      4C4C5354 
 8697      4154204D 
 8697      4D494F28 
 8697      30783430 
 8698              	.LASF993:
 8699 47e0 5F532030 		.ascii	"_S 010\000"
 8699      313000
 8700              	.LASF513:
 8701 47e7 5F53495A 		.ascii	"_SIZE_T \000"
 8701      455F5420 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 212


 8701      00
 8702              	.LASF539:
 8703 47f0 5F574348 		.ascii	"_WCHAR_T_H \000"
 8703      41525F54 
 8703      5F482000 
 8704              	.LASF949:
 8705 47fc 5F494F4C 		.ascii	"_IOLBF 1\000"
 8705      42462031 
 8705      00
 8706              	.LASF1123:
 8707 4805 50412031 		.ascii	"PA 1\000"
 8707      00
 8708              	.LASF913:
 8709 480a 5F5F7469 		.ascii	"__time_t_defined \000"
 8709      6D655F74 
 8709      5F646566 
 8709      696E6564 
 8709      2000
 8710              	.LASF1133:
 8711 481c 504C2031 		.ascii	"PL 12\000"
 8711      3200
 8712              	.LASF1058:
 8713 4822 49324330 		.ascii	"I2C0SCLL MMIO(0x40000014)\000"
 8713      53434C4C 
 8713      204D4D49 
 8713      4F283078 
 8713      34303030 
 8714              	.LASF238:
 8715 483c 5F5F5549 		.ascii	"__UINT_LEAST64_MAX__ 18446744073709551615ULL\000"
 8715      4E545F4C 
 8715      45415354 
 8715      36345F4D 
 8715      41585F5F 
 8716              	.LASF701:
 8717 4869 57434841 		.ascii	"WCHAR_MIN __WCHAR_MIN__\000"
 8717      525F4D49 
 8717      4E205F5F 
 8717      57434841 
 8717      525F4D49 
 8718              	.LASF240:
 8719 4881 5F5F494E 		.ascii	"__INT_FAST8_MAX__ 2147483647\000"
 8719      545F4641 
 8719      5354385F 
 8719      4D41585F 
 8719      5F203231 
 8720              	.LASF1149:
 8721 489e 54494D45 		.ascii	"TIMER5A 15\000"
 8721      52354120 
 8721      313500
 8722              	.LASF1011:
 8723 48a9 55304945 		.ascii	"U0IER MMIO(0x40008004)\000"
 8723      52204D4D 
 8723      494F2830 
 8723      78343030 
 8723      30383030 
 8724              	.LASF931:
 8725 48c0 5F66756E 		.ascii	"_funlockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __l"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 213


 8725      6C6F636B 
 8725      66696C65 
 8725      28667029 
 8725      20282828 
 8726 48f3 6F636B5F 		.ascii	"ock_release_recursive((fp)->_lock))\000"
 8726      72656C65 
 8726      6173655F 
 8726      72656375 
 8726      72736976 
 8727              	.LASF332:
 8728 4917 5F5F5546 		.ascii	"__UFRACT_IBIT__ 0\000"
 8728      52414354 
 8728      5F494249 
 8728      545F5F20 
 8728      3000
 8729              	.LASF1128:
 8730 4929 50462036 		.ascii	"PF 6\000"
 8730      00
 8731              	.LASF225:
 8732 492e 5F5F494E 		.ascii	"__INT8_C(c) c\000"
 8732      54385F43 
 8732      28632920 
 8732      6300
 8733              	.LASF706:
 8734 493c 494E5431 		.ascii	"INT16_C(x) x\000"
 8734      365F4328 
 8734      78292078 
 8734      00
 8735              	.LASF972:
 8736 4949 5F5F7370 		.ascii	"__sputc_raw_r(__ptr,__c,__p) (--(__p)->_w < 0 ? (__"
 8736      7574635F 
 8736      7261775F 
 8736      72285F5F 
 8736      7074722C 
 8737 497c 70292D3E 		.ascii	"p)->_w >= (__p)->_lbfsize ? (*(__p)->_p = (__c)), *"
 8737      5F77203E 
 8737      3D20285F 
 8737      5F70292D 
 8737      3E5F6C62 
 8738 49af 285F5F70 		.ascii	"(__p)->_p != '\\n' ? (int)*(__p)->_p++ : __swbuf_r("
 8738      292D3E5F 
 8738      7020213D 
 8738      20275C6E 
 8738      27203F20 
 8739 49e1 5F5F7074 		.ascii	"__ptr, '\\n', __p) : __swbuf_r(__ptr, (int)(__c), _"
 8739      722C2027 
 8739      5C6E272C 
 8739      205F5F70 
 8739      29203A20 
 8740 4a13 5F702920 		.ascii	"_p) : (*(__p)->_p = (__c), (int)*(__p)->_p++))\000"
 8740      3A20282A 
 8740      285F5F70 
 8740      292D3E5F 
 8740      70203D20 
 8741              	.LASF4:
 8742 4a42 73686F72 		.ascii	"short unsigned int\000"
 8742      7420756E 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 214


 8742      7369676E 
 8742      65642069 
 8742      6E7400
 8743              	.LASF770:
 8744 4a55 53434E69 		.ascii	"SCNiLEAST16 __SCN16(i)\000"
 8744      4C454153 
 8744      54313620 
 8744      5F5F5343 
 8744      4E313628 
 8745              	.LASF447:
 8746 4a6c 5F5F4743 		.ascii	"__GCC_ATOMIC_POINTER_LOCK_FREE 1\000"
 8746      435F4154 
 8746      4F4D4943 
 8746      5F504F49 
 8746      4E544552 
 8747              	.LASF269:
 8748 4a8d 5F5F4442 		.ascii	"__DBL_MIN_EXP__ (-1021)\000"
 8748      4C5F4D49 
 8748      4E5F4558 
 8748      505F5F20 
 8748      282D3130 
 8749              	.LASF517:
 8750 4aa5 5F5F5349 		.ascii	"__SIZE_T \000"
 8750      5A455F54 
 8750      2000
 8751              	.LASF1150:
 8752 4aaf 54494D45 		.ascii	"TIMER5B 16\000"
 8752      52354220 
 8752      313600
 8753              	.LASF218:
 8754 4aba 5F5F494E 		.ascii	"__INT32_MAX__ 2147483647L\000"
 8754      5433325F 
 8754      4D41585F 
 8754      5F203231 
 8754      34373438 
 8755              	.LASF17:
 8756 4ad4 62656769 		.ascii	"begin\000"
 8756      6E00
 8757              	.LASF566:
 8758 4ada 5F5F6C6F 		.ascii	"__lock_try_acquire_recursive(lock) (_CAST_VOID 0)\000"
 8758      636B5F74 
 8758      72795F61 
 8758      63717569 
 8758      72655F72 
 8759              	.LASF305:
 8760 4b0c 5F5F4445 		.ascii	"__DEC64_MIN__ 1E-383DD\000"
 8760      4336345F 
 8760      4D494E5F 
 8760      5F203145 
 8760      2D333833 
 8761              	.LASF853:
 8762 4b23 53434E75 		.ascii	"SCNuFAST64 __SCN64(u)\000"
 8762      46415354 
 8762      3634205F 
 8762      5F53434E 
 8762      36342875 
 8763              	.LASF933:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 215


 8764 4b39 5F5F534E 		.ascii	"__SNBF 0x0002\000"
 8764      42462030 
 8764      78303030 
 8764      3200
 8765              	.LASF102:
 8766 4b47 4932435F 		.ascii	"I2C_RESTARTED 2\000"
 8766      52455354 
 8766      41525445 
 8766      44203200 
 8767              	.LASF554:
 8768 4b57 5F5F5F69 		.ascii	"___int64_t_defined 1\000"
 8768      6E743634 
 8768      5F745F64 
 8768      6566696E 
 8768      65642031 
 8769              	.LASF292:
 8770 4b6c 5F5F4C44 		.ascii	"__LDBL_HAS_DENORM__ 1\000"
 8770      424C5F48 
 8770      41535F44 
 8770      454E4F52 
 8770      4D5F5F20 
 8771              	.LASF664:
 8772 4b82 55494E54 		.ascii	"UINT16_MAX 65535\000"
 8772      31365F4D 
 8772      41582036 
 8772      35353335 
 8772      00
 8773              	.LASF1108:
 8774 4b93 68696768 		.ascii	"highByte(w) ((uint8_t) ((w) >> 8))\000"
 8774      42797465 
 8774      28772920 
 8774      28287569 
 8774      6E74385F 
 8775              	.LASF830:
 8776 4bb6 53434E6F 		.ascii	"SCNo64 __SCN64(o)\000"
 8776      3634205F 
 8776      5F53434E 
 8776      3634286F 
 8776      2900
 8777              	.LASF368:
 8778 4bc8 5F5F4143 		.ascii	"__ACCUM_MIN__ (-0X1P15K-0X1P15K)\000"
 8778      43554D5F 
 8778      4D494E5F 
 8778      5F20282D 
 8778      30583150 
 8779              	.LASF542:
 8780 4be9 5F474343 		.ascii	"_GCC_WCHAR_T \000"
 8780      5F574348 
 8780      41525F54 
 8780      2000
 8781              	.LASF180:
 8782 4bf7 5F5F494E 		.ascii	"__INT_LEAST32_TYPE__ long int\000"
 8782      545F4C45 
 8782      41535433 
 8782      325F5459 
 8782      50455F5F 
 8783              	.LASF106:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 216


 8784 4c15 4932435F 		.ascii	"I2C_BUSY 6\000"
 8784      42555359 
 8784      203600
 8785              	.LASF1036:
 8786 4c20 4750494F 		.ascii	"GPIO0DATA MMIO(0x50003FFC)\000"
 8786      30444154 
 8786      41204D4D 
 8786      494F2830 
 8786      78353030 
 8787              	.LASF720:
 8788 4c3b 50524975 		.ascii	"PRIu8 __PRI8(u)\000"
 8788      38205F5F 
 8788      50524938 
 8788      28752900 
 8789              	.LASF55:
 8790 4c4b 49324352 		.ascii	"I2CReadLength\000"
 8790      6561644C 
 8790      656E6774 
 8790      6800
 8791              	.LASF327:
 8792 4c59 5F5F4652 		.ascii	"__FRACT_IBIT__ 0\000"
 8792      4143545F 
 8792      49424954 
 8792      5F5F2030 
 8792      00
 8793              	.LASF29:
 8794 4c6a 5F5A4E37 		.ascii	"_ZN7TwoWire11requestFromEii\000"
 8794      54776F57 
 8794      69726531 
 8794      31726571 
 8794      75657374 
 8795              	.LASF154:
 8796 4c86 5F5F4F52 		.ascii	"__ORDER_LITTLE_ENDIAN__ 1234\000"
 8796      4445525F 
 8796      4C495454 
 8796      4C455F45 
 8796      4E444941 
 8797              	.LASF302:
 8798 4ca3 5F5F4445 		.ascii	"__DEC64_MANT_DIG__ 16\000"
 8798      4336345F 
 8798      4D414E54 
 8798      5F444947 
 8798      5F5F2031 
 8799              	.LASF6:
 8800 4cb9 6C6F6E67 		.ascii	"long long unsigned int\000"
 8800      206C6F6E 
 8800      6720756E 
 8800      7369676E 
 8800      65642069 
 8801              	.LASF256:
 8802 4cd0 5F5F464C 		.ascii	"__FLT_MIN_10_EXP__ (-37)\000"
 8802      545F4D49 
 8802      4E5F3130 
 8802      5F455850 
 8802      5F5F2028 
 8803              	.LASF382:
 8804 4ce9 5F5F554C 		.ascii	"__ULACCUM_IBIT__ 32\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 217


 8804      41434355 
 8804      4D5F4942 
 8804      49545F5F 
 8804      20333200 
 8805              	.LASF503:
 8806 4cfd 5F4C4F4E 		.ascii	"_LONG_DOUBLE long double\000"
 8806      475F444F 
 8806      55424C45 
 8806      206C6F6E 
 8806      6720646F 
 8807              	.LASF945:
 8808 4d16 5F5F534F 		.ascii	"__SORD 0x2000\000"
 8808      52442030 
 8808      78323030 
 8808      3000
 8809              	.LASF395:
 8810 4d24 5F5F554C 		.ascii	"__ULLACCUM_EPSILON__ 0x1P-32ULLK\000"
 8810      4C414343 
 8810      554D5F45 
 8810      5053494C 
 8810      4F4E5F5F 
 8811              	.LASF1093:
 8812 4d45 44454641 		.ascii	"DEFAULT 1\000"
 8812      554C5420 
 8812      3100
 8813              	.LASF521:
 8814 4d4f 5F53495A 		.ascii	"_SIZE_T_DEFINED \000"
 8814      455F545F 
 8814      44454649 
 8814      4E454420 
 8814      00
 8815              	.LASF402:
 8816 4d60 5F5F4451 		.ascii	"__DQ_FBIT__ 63\000"
 8816      5F464249 
 8816      545F5F20 
 8816      363300
 8817              	.LASF894:
 8818 4d6f 5F5F5054 		.ascii	"__PTRDIFF_T \000"
 8818      52444946 
 8818      465F5420 
 8818      00
 8819              	.LASF409:
 8820 4d7c 5F5F5548 		.ascii	"__UHQ_IBIT__ 0\000"
 8820      515F4942 
 8820      49545F5F 
 8820      203000
 8821              	.LASF1107:
 8822 4d8b 6C6F7742 		.ascii	"lowByte(w) ((uint8_t) ((w) & 0xff))\000"
 8822      79746528 
 8822      77292028 
 8822      2875696E 
 8822      74385F74 
 8823              	.LASF610:
 8824 4daf 5F524545 		.ascii	"_REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctom"
 8824      4E545F57 
 8824      43544F4D 
 8824      425F5354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 218


 8824      41544528 
 8825 4de2 625F7374 		.ascii	"b_state)\000"
 8825      61746529 
 8825      00
 8826              	.LASF187:
 8827 4deb 5F5F494E 		.ascii	"__INT_FAST16_TYPE__ int\000"
 8827      545F4641 
 8827      53543136 
 8827      5F545950 
 8827      455F5F20 
 8828              	.LASF557:
 8829 4e03 5F5F4C4F 		.ascii	"__LOCK_INIT(class,lock) static int lock = 0;\000"
 8829      434B5F49 
 8829      4E495428 
 8829      636C6173 
 8829      732C6C6F 
 8830              	.LASF358:
 8831 4e30 5F5F5341 		.ascii	"__SACCUM_MIN__ (-0X1P7HK-0X1P7HK)\000"
 8831      4343554D 
 8831      5F4D494E 
 8831      5F5F2028 
 8831      2D305831 
 8832              	.LASF344:
 8833 4e52 5F5F554C 		.ascii	"__ULFRACT_MAX__ 0XFFFFFFFFP-32ULR\000"
 8833      46524143 
 8833      545F4D41 
 8833      585F5F20 
 8833      30584646 
 8834              	.LASF1030:
 8835 4e74 4D41494E 		.ascii	"MAINCLKSEL MMIO(0x40048070)\000"
 8835      434C4B53 
 8835      454C204D 
 8835      4D494F28 
 8835      30783430 
 8836              	.LASF183:
 8837 4e90 5F5F5549 		.ascii	"__UINT_LEAST16_TYPE__ short unsigned int\000"
 8837      4E545F4C 
 8837      45415354 
 8837      31365F54 
 8837      5950455F 
 8838              	.LASF116:
 8839 4eb9 4932434F 		.ascii	"I2CONSET_STO (0x1<<4)\000"
 8839      4E534554 
 8839      5F53544F 
 8839      20283078 
 8839      313C3C34 
 8840              	.LASF379:
 8841 4ecf 5F5F4C41 		.ascii	"__LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK\000"
 8841      4343554D 
 8841      5F4D4158 
 8841      5F5F2030 
 8841      58374646 
 8842              	.LASF167:
 8843 4ef7 5F5F4348 		.ascii	"__CHAR16_TYPE__ short unsigned int\000"
 8843      41523136 
 8843      5F545950 
 8843      455F5F20 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 219


 8843      73686F72 
 8844              	.LASF46:
 8845 4f1a 76616C75 		.ascii	"value\000"
 8845      6500
 8846              	.LASF611:
 8847 4f20 5F524545 		.ascii	"_REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrle"
 8847      4E545F4D 
 8847      42524C45 
 8847      4E5F5354 
 8847      41544528 
 8848 4f53 6E5F7374 		.ascii	"n_state)\000"
 8848      61746529 
 8848      00
 8849              	.LASF667:
 8850 4f5c 55494E54 		.ascii	"UINT_LEAST16_MAX 65535\000"
 8850      5F4C4541 
 8850      53543136 
 8850      5F4D4158 
 8850      20363535 
 8851              	.LASF864:
 8852 4f73 53434E69 		.ascii	"SCNiMAX __SCNMAX(i)\000"
 8852      4D415820 
 8852      5F5F5343 
 8852      4E4D4158 
 8852      28692900 
 8853              	.LASF234:
 8854 4f87 5F5F5549 		.ascii	"__UINT_LEAST16_MAX__ 65535\000"
 8854      4E545F4C 
 8854      45415354 
 8854      31365F4D 
 8854      41585F5F 
 8855              	.LASF660:
 8856 4fa2 494E545F 		.ascii	"INT_LEAST8_MAX 127\000"
 8856      4C454153 
 8856      54385F4D 
 8856      41582031 
 8856      323700
 8857              	.LASF414:
 8858 4fb5 5F5F5554 		.ascii	"__UTQ_FBIT__ 128\000"
 8858      515F4642 
 8858      49545F5F 
 8858      20313238 
 8858      00
 8859              	.LASF878:
 8860 4fc6 53434E6F 		.ascii	"SCNoPTR __SCNPTR(o)\000"
 8860      50545220 
 8860      5F5F5343 
 8860      4E505452 
 8860      286F2900 
 8861              	.LASF604:
 8862 4fda 5F524545 		.ascii	"_REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctim"
 8862      4E545F41 
 8862      53435449 
 8862      4D455F42 
 8862      55462870 
 8863 500d 655F6275 		.ascii	"e_buf)\000"
 8863      662900
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 220


 8864              	.LASF872:
 8865 5014 5052496F 		.ascii	"PRIoPTR __PRIPTR(o)\000"
 8865      50545220 
 8865      5F5F5052 
 8865      49505452 
 8865      286F2900 
 8866              	.LASF143:
 8867 5028 5F5F4649 		.ascii	"__FINITE_MATH_ONLY__ 0\000"
 8867      4E495445 
 8867      5F4D4154 
 8867      485F4F4E 
 8867      4C595F5F 
 8868              	.LASF639:
 8869 503f 5F5F6861 		.ascii	"__have_longlong64 1\000"
 8869      76655F6C 
 8869      6F6E676C 
 8869      6F6E6736 
 8869      34203100 
 8870              	.LASF1065:
 8871 5053 76615F63 		.ascii	"va_copy(d,s) __builtin_va_copy(d,s)\000"
 8871      6F707928 
 8871      642C7329 
 8871      205F5F62 
 8871      75696C74 
 8872              	.LASF698:
 8873 5077 50545244 		.ascii	"PTRDIFF_MAX __PTRDIFF_MAX__\000"
 8873      4946465F 
 8873      4D415820 
 8873      5F5F5054 
 8873      52444946 
 8874              	.LASF1028:
 8875 5093 53595350 		.ascii	"SYSPLLCLKSEL MMIO(0x40048040)\000"
 8875      4C4C434C 
 8875      4B53454C 
 8875      204D4D49 
 8875      4F283078 
 8876              	.LASF602:
 8877 50b1 5F524545 		.ascii	"_REENT_MP_P5S(ptr) ((ptr)->_p5s)\000"
 8877      4E545F4D 
 8877      505F5035 
 8877      53287074 
 8877      72292028 
 8878              	.LASF197:
 8879 50d2 5F5F4445 		.ascii	"__DEPRECATED 1\000"
 8879      50524543 
 8879      41544544 
 8879      203100
 8880              	.LASF538:
 8881 50e1 5F574348 		.ascii	"_WCHAR_T_DEFINED \000"
 8881      41525F54 
 8881      5F444546 
 8881      494E4544 
 8881      2000
 8882              	.LASF1061:
 8883 50f3 5F414E53 		.ascii	"_ANSI_STDARG_H_ \000"
 8883      495F5354 
 8883      44415247 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 221


 8883      5F485F20 
 8883      00
 8884              	.LASF384:
 8885 5104 5F5F554C 		.ascii	"__ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK\000"
 8885      41434355 
 8885      4D5F4D41 
 8885      585F5F20 
 8885      30584646 
 8886              	.LASF1134:
 8887 512e 4E4F545F 		.ascii	"NOT_ON_TIMER 0\000"
 8887      4F4E5F54 
 8887      494D4552 
 8887      203000
 8888              	.LASF343:
 8889 513d 5F5F554C 		.ascii	"__ULFRACT_MIN__ 0.0ULR\000"
 8889      46524143 
 8889      545F4D49 
 8889      4E5F5F20 
 8889      302E3055 
 8890              	.LASF1078:
 8891 5154 494E5055 		.ascii	"INPUT_PULLUP 0x2\000"
 8891      545F5055 
 8891      4C4C5550 
 8891      20307832 
 8891      00
 8892              	.LASF403:
 8893 5165 5F5F4451 		.ascii	"__DQ_IBIT__ 0\000"
 8893      5F494249 
 8893      545F5F20 
 8893      3000
 8894              	.LASF657:
 8895 5173 494E5438 		.ascii	"INT8_MAX 127\000"
 8895      5F4D4158 
 8895      20313237 
 8895      00
 8896              	.LASF928:
 8897 5180 5F5F6E65 		.ascii	"__need_inttypes\000"
 8897      65645F69 
 8897      6E747479 
 8897      70657300 
 8898              	.LASF172:
 8899 5190 5F5F494E 		.ascii	"__INT32_TYPE__ long int\000"
 8899      5433325F 
 8899      54595045 
 8899      5F5F206C 
 8899      6F6E6720 
 8900              	.LASF918:
 8901 51a8 686F776D 		.ascii	"howmany(x,y) (((x)+((y)-1))/(y))\000"
 8901      616E7928 
 8901      782C7929 
 8901      20282828 
 8901      78292B28 
 8902              	.LASF960:
 8903 51c9 544D505F 		.ascii	"TMP_MAX 26\000"
 8903      4D415820 
 8903      323600
 8904              	.LASF519:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 222


 8905 51d4 5F425344 		.ascii	"_BSD_SIZE_T_ \000"
 8905      5F53495A 
 8905      455F545F 
 8905      2000
 8906              	.LASF206:
 8907 51e2 5F5F5749 		.ascii	"__WINT_MAX__ 4294967295U\000"
 8907      4E545F4D 
 8907      41585F5F 
 8907      20343239 
 8907      34393637 
 8908              	.LASF1048:
 8909 51fb 53595354 		.ascii	"SYST_CVR MMIO(0xE000E018)\000"
 8909      5F435652 
 8909      204D4D49 
 8909      4F283078 
 8909      45303030 
 8910              	.LASF764:
 8911 5215 50524969 		.ascii	"PRIiLEAST16 __PRI16(i)\000"
 8911      4C454153 
 8911      54313620 
 8911      5F5F5052 
 8911      49313628 
 8912              	.LASF277:
 8913 522c 5F5F4442 		.ascii	"__DBL_DENORM_MIN__ double(4.9406564584124654e-324L)"
 8913      4C5F4445 
 8913      4E4F524D 
 8913      5F4D494E 
 8913      5F5F2064 
 8914 525f 00       		.ascii	"\000"
 8915              	.LASF535:
 8916 5260 5F574348 		.ascii	"_WCHAR_T_ \000"
 8916      41525F54 
 8916      5F2000
 8917              	.LASF230:
 8918 526b 5F5F494E 		.ascii	"__INT_LEAST64_MAX__ 9223372036854775807LL\000"
 8918      545F4C45 
 8918      41535436 
 8918      345F4D41 
 8918      585F5F20 
 8919              	.LASF1147:
 8920 5295 54494D45 		.ascii	"TIMER4C 13\000"
 8920      52344320 
 8920      313300
 8921              	.LASF533:
 8922 52a0 5F545F57 		.ascii	"_T_WCHAR \000"
 8922      43484152 
 8922      2000
 8923              	.LASF981:
 8924 52aa 67657463 		.ascii	"getc(fp) __sgetc_r(_REENT, fp)\000"
 8924      28667029 
 8924      205F5F73 
 8924      67657463 
 8924      5F72285F 
 8925              	.LASF890:
 8926 52c9 5F5F5354 		.ascii	"__STDDEF_H__ \000"
 8926      44444546 
 8926      5F485F5F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 223


 8926      2000
 8927              	.LASF897:
 8928 52d7 5F5F5F69 		.ascii	"___int_ptrdiff_t_h \000"
 8928      6E745F70 
 8928      74726469 
 8928      66665F74 
 8928      5F682000 
 8929              	.LASF1066:
 8930 52eb 5F5F7661 		.ascii	"__va_copy(d,s) __builtin_va_copy(d,s)\000"
 8930      5F636F70 
 8930      7928642C 
 8930      7329205F 
 8930      5F627569 
 8931              	.LASF209:
 8932 5311 5F5F5349 		.ascii	"__SIZE_MAX__ 4294967295U\000"
 8932      5A455F4D 
 8932      41585F5F 
 8932      20343239 
 8932      34393637 
 8933              	.LASF906:
 8934 532a 5F434C4F 		.ascii	"_CLOCKID_T_ unsigned long\000"
 8934      434B4944 
 8934      5F545F20 
 8934      756E7369 
 8934      676E6564 
 8935              	.LASF590:
 8936 5344 5F524545 		.ascii	"_REENT_CHECK_TM(ptr) \000"
 8936      4E545F43 
 8936      4845434B 
 8936      5F544D28 
 8936      70747229 
 8937              	.LASF415:
 8938 535a 5F5F5554 		.ascii	"__UTQ_IBIT__ 0\000"
 8938      515F4942 
 8938      49545F5F 
 8938      203000
 8939              	.LASF418:
 8940 5369 5F5F5341 		.ascii	"__SA_FBIT__ 15\000"
 8940      5F464249 
 8940      545F5F20 
 8940      313500
 8941              	.LASF541:
 8942 5378 5F5F494E 		.ascii	"__INT_WCHAR_T_H \000"
 8942      545F5743 
 8942      4841525F 
 8942      545F4820 
 8942      00
 8943              	.LASF882:
 8944 5389 5F465354 		.ascii	"_FSTDIO \000"
 8944      44494F20 
 8944      00
 8945              	.LASF502:
 8946 5392 5F434153 		.ascii	"_CAST_VOID (void)\000"
 8946      545F564F 
 8946      49442028 
 8946      766F6964 
 8946      2900
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 224


 8947              	.LASF1097:
 8948 53a4 636F6E73 		.ascii	"constrain(amt,low,high) ((amt)<(low)?(low):((amt)>("
 8948      74726169 
 8948      6E28616D 
 8948      742C6C6F 
 8948      772C6869 
 8949 53d7 68696768 		.ascii	"high)?(high):(amt)))\000"
 8949      293F2868 
 8949      69676829 
 8949      3A28616D 
 8949      74292929 
 8950              	.LASF372:
 8951 53ec 5F5F5541 		.ascii	"__UACCUM_IBIT__ 16\000"
 8951      4343554D 
 8951      5F494249 
 8951      545F5F20 
 8951      313600
 8952              	.LASF491:
 8953 53ff 5F434F4E 		.ascii	"_CONST const\000"
 8953      53542063 
 8953      6F6E7374 
 8953      00
 8954              	.LASF465:
 8955 540c 5F5F454C 		.ascii	"__ELF__ 1\000"
 8955      465F5F20 
 8955      3100
 8956              	.LASF457:
 8957 5416 5F5F5448 		.ascii	"__THUMBEL__ 1\000"
 8957      554D4245 
 8957      4C5F5F20 
 8957      3100
 8958              	.LASF707:
 8959 5424 55494E54 		.ascii	"UINT16_C(x) x\000"
 8959      31365F43 
 8959      28782920 
 8959      7800
 8960              	.LASF753:
 8961 5432 50524969 		.ascii	"PRIi16 __PRI16(i)\000"
 8961      3136205F 
 8961      5F505249 
 8961      31362869 
 8961      2900
 8962              	.LASF1138:
 8963 5444 54494D45 		.ascii	"TIMER1B 4\000"
 8963      52314220 
 8963      3400
 8964              	.LASF1080:
 8965 544e 66616C73 		.ascii	"false 0x0\000"
 8965      65203078 
 8965      3000
 8966              	.LASF856:
 8967 5458 5F5F5343 		.ascii	"__SCNMAX(x) __STRINGIFY(ll ##x)\000"
 8967      4E4D4158 
 8967      28782920 
 8967      5F5F5354 
 8967      52494E47 
 8968              	.LASF397:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 225


 8969 5478 5F5F5151 		.ascii	"__QQ_IBIT__ 0\000"
 8969      5F494249 
 8969      545F5F20 
 8969      3000
 8970              	.LASF248:
 8971 5486 5F5F494E 		.ascii	"__INTPTR_MAX__ 2147483647\000"
 8971      54505452 
 8971      5F4D4158 
 8971      5F5F2032 
 8971      31343734 
 8972              	.LASF1043:
 8973 54a0 544D5231 		.ascii	"TMR16B0PR MMIO(0x4000C00C)\000"
 8973      36423050 
 8973      52204D4D 
 8973      494F2830 
 8973      78343030 
 8974              	.LASF89:
 8975 54bb 42554646 		.ascii	"BUFFER_LENGTH 32\000"
 8975      45525F4C 
 8975      454E4754 
 8975      48203332 
 8975      00
 8976              	.LASF1039:
 8977 54cc 544D5231 		.ascii	"TMR16B0IR MMIO(0x4000C000)\000"
 8977      36423049 
 8977      52204D4D 
 8977      494F2830 
 8977      78343030 
 8978              	.LASF772:
 8979 54e7 53434E75 		.ascii	"SCNuLEAST16 __SCN16(u)\000"
 8979      4C454153 
 8979      54313620 
 8979      5F5F5343 
 8979      4E313628 
 8980              	.LASF386:
 8981 54fe 5F5F4C4C 		.ascii	"__LLACCUM_FBIT__ 31\000"
 8981      41434355 
 8981      4D5F4642 
 8981      49545F5F 
 8981      20333100 
 8982              	.LASF212:
 8983 5512 5F5F5549 		.ascii	"__UINTMAX_MAX__ 18446744073709551615ULL\000"
 8983      4E544D41 
 8983      585F4D41 
 8983      585F5F20 
 8983      31383434 
 8984              	.LASF166:
 8985 553a 5F5F5549 		.ascii	"__UINTMAX_TYPE__ long long unsigned int\000"
 8985      4E544D41 
 8985      585F5459 
 8985      50455F5F 
 8985      206C6F6E 
 8986              	.LASF490:
 8987 5562 5F4E4F41 		.ascii	"_NOARGS void\000"
 8987      52475320 
 8987      766F6964 
 8987      00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 226


 8988              	.LASF1029:
 8989 556f 53595350 		.ascii	"SYSPLLCLKUEN MMIO(0x40048044)\000"
 8989      4C4C434C 
 8989      4B55454E 
 8989      204D4D49 
 8989      4F283078 
 8990              	.LASF411:
 8991 558d 5F5F5553 		.ascii	"__USQ_IBIT__ 0\000"
 8991      515F4942 
 8991      49545F5F 
 8991      203000
 8992              	.LASF184:
 8993 559c 5F5F5549 		.ascii	"__UINT_LEAST32_TYPE__ long unsigned int\000"
 8993      4E545F4C 
 8993      45415354 
 8993      33325F54 
 8993      5950455F 
 8994              	.LASF132:
 8995 55c4 5F5F474E 		.ascii	"__GNUC_MINOR__ 7\000"
 8995      55435F4D 
 8995      494E4F52 
 8995      5F5F2037 
 8995      00
 8996              	.LASF87:
 8997 55d5 5072696E 		.ascii	"Printable_h \000"
 8997      7461626C 
 8997      655F6820 
 8997      00
 8998              	.LASF579:
 8999 55e2 5F52414E 		.ascii	"_RAND48_MULT_1 (0xdeec)\000"
 8999      4434385F 
 8999      4D554C54 
 8999      5F312028 
 8999      30786465 
 9000              	.LASF165:
 9001 55fa 5F5F494E 		.ascii	"__INTMAX_TYPE__ long long int\000"
 9001      544D4158 
 9001      5F545950 
 9001      455F5F20 
 9001      6C6F6E67 
 9002              	.LASF443:
 9003 5618 5F5F4743 		.ascii	"__GCC_ATOMIC_INT_LOCK_FREE 1\000"
 9003      435F4154 
 9003      4F4D4943 
 9003      5F494E54 
 9003      5F4C4F43 
 9004              	.LASF683:
 9005 5635 494E545F 		.ascii	"INT_FAST16_MIN (-__STDINT_EXP(INT_MAX)-1)\000"
 9005      46415354 
 9005      31365F4D 
 9005      494E2028 
 9005      2D5F5F53 
 9006              	.LASF575:
 9007 565f 5F52414E 		.ascii	"_RAND48_SEED_0 (0x330e)\000"
 9007      4434385F 
 9007      53454544 
 9007      5F302028 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 227


 9007      30783333 
 9008              	.LASF127:
 9009 5677 49325343 		.ascii	"I2SCLL_HS_SCLL 0x0000003C\000"
 9009      4C4C5F48 
 9009      535F5343 
 9009      4C4C2030 
 9009      78303030 
 9010              	.LASF572:
 9011 5691 5F5F4C6F 		.ascii	"__Long long\000"
 9011      6E67206C 
 9011      6F6E6700 
 9012              	.LASF526:
 9013 569d 5F53495A 		.ascii	"_SIZET_ \000"
 9013      45545F20 
 9013      00
 9014              	.LASF338:
 9015 56a6 5F5F4C46 		.ascii	"__LFRACT_MIN__ (-0.5LR-0.5LR)\000"
 9015      52414354 
 9015      5F4D494E 
 9015      5F5F2028 
 9015      2D302E35 
 9016              	.LASF70:
 9017 56c4 5F535444 		.ascii	"_STDLIB_H_ \000"
 9017      4C49425F 
 9017      485F2000 
 9018              	.LASF739:
 9019 56d0 50524964 		.ascii	"PRIdFAST8 __PRI8(d)\000"
 9019      46415354 
 9019      38205F5F 
 9019      50524938 
 9019      28642900 
 9020              	.LASF62:
 9021 56e4 2F557365 		.ascii	"/Users/stevenparker/project/lpc1114/arduino\000"
 9021      72732F73 
 9021      74657665 
 9021      6E706172 
 9021      6B65722F 
 9022              	.LASF509:
 9023 5710 5F4E4F49 		.ascii	"_NOINLINE_STATIC _NOINLINE static\000"
 9023      4E4C494E 
 9023      455F5354 
 9023      41544943 
 9023      205F4E4F 
 9024              	.LASF52:
 9025 5732 4932434D 		.ascii	"I2CMasterBuffer\000"
 9025      61737465 
 9025      72427566 
 9025      66657200 
 9026              	.LASF743:
 9027 5742 50524978 		.ascii	"PRIxFAST8 __PRI8(x)\000"
 9027      46415354 
 9027      38205F5F 
 9027      50524938 
 9027      28782900 
 9028              	.LASF19:
 9029 5756 5F5A4E37 		.ascii	"_ZN7TwoWire5beginEv\000"
 9029      54776F57 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 228


 9029      69726535 
 9029      62656769 
 9029      6E457600 
 9030              	.LASF895:
 9031 576a 5F505452 		.ascii	"_PTRDIFF_T_ \000"
 9031      44494646 
 9031      5F545F20 
 9031      00
 9032              	.LASF208:
 9033 5777 5F5F5054 		.ascii	"__PTRDIFF_MAX__ 2147483647\000"
 9033      52444946 
 9033      465F4D41 
 9033      585F5F20 
 9033      32313437 
 9034              	.LASF962:
 9035 5792 7374646F 		.ascii	"stdout (_REENT->_stdout)\000"
 9035      75742028 
 9035      5F524545 
 9035      4E542D3E 
 9035      5F737464 
 9036              	.LASF863:
 9037 57ab 53434E64 		.ascii	"SCNdMAX __SCNMAX(d)\000"
 9037      4D415820 
 9037      5F5F5343 
 9037      4E4D4158 
 9037      28642900 
 9038              	.LASF359:
 9039 57bf 5F5F5341 		.ascii	"__SACCUM_MAX__ 0X7FFFP-7HK\000"
 9039      4343554D 
 9039      5F4D4158 
 9039      5F5F2030 
 9039      58374646 
 9040              	.LASF622:
 9041 57da 5F474C4F 		.ascii	"_GLOBAL_REENT _global_impure_ptr\000"
 9041      42414C5F 
 9041      5245454E 
 9041      54205F67 
 9041      6C6F6261 
 9042              	.LASF1126:
 9043 57fb 50442034 		.ascii	"PD 4\000"
 9043      00
 9044              	.LASF195:
 9045 5800 5F5F5549 		.ascii	"__UINTPTR_TYPE__ unsigned int\000"
 9045      4E545054 
 9045      525F5459 
 9045      50455F5F 
 9045      20756E73 
 9046              	.LASF632:
 9047 581e 5F535452 		.ascii	"_STRING_H_ \000"
 9047      494E475F 
 9047      485F2000 
 9048              	.LASF636:
 9049 582a 7374726E 		.ascii	"strnicmp strncasecmp\000"
 9049      69636D70 
 9049      20737472 
 9049      6E636173 
 9049      65636D70 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 229


 9050              	.LASF432:
 9051 583f 5F5F5245 		.ascii	"__REGISTER_PREFIX__ \000"
 9051      47495354 
 9051      45525F50 
 9051      52454649 
 9051      585F5F20 
 9052              	.LASF315:
 9053 5854 5F5F4445 		.ascii	"__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000"
 9053      43313238 
 9053      5F535542 
 9053      4E4F524D 
 9053      414C5F4D 
 9054 5887 30303030 		.ascii	"000000001E-6143DL\000"
 9054      30303030 
 9054      31452D36 
 9054      31343344 
 9054      4C00
 9055              	.LASF160:
 9056 5899 5F5F474E 		.ascii	"__GNUG__ 4\000"
 9056      55475F5F 
 9056      203400
 9057              	.LASF345:
 9058 58a4 5F5F554C 		.ascii	"__ULFRACT_EPSILON__ 0x1P-32ULR\000"
 9058      46524143 
 9058      545F4550 
 9058      53494C4F 
 9058      4E5F5F20 
 9059              	.LASF929:
 9060 58c3 5F4E4557 		.ascii	"_NEWLIB_STDIO_H \000"
 9060      4C49425F 
 9060      53544449 
 9060      4F5F4820 
 9060      00
 9061              	.LASF780:
 9062 58d4 53434E64 		.ascii	"SCNdFAST16 __SCN16(d)\000"
 9062      46415354 
 9062      3136205F 
 9062      5F53434E 
 9062      31362864 
 9063              	.LASF151:
 9064 58ea 5F5F5349 		.ascii	"__SIZEOF_SIZE_T__ 4\000"
 9064      5A454F46 
 9064      5F53495A 
 9064      455F545F 
 9064      5F203400 
 9065              	.LASF112:
 9066 58fe 4932435F 		.ascii	"I2C_OK 12\000"
 9066      4F4B2031 
 9066      3200
 9067              	.LASF312:
 9068 5908 5F5F4445 		.ascii	"__DEC128_MIN__ 1E-6143DL\000"
 9068      43313238 
 9068      5F4D494E 
 9068      5F5F2031 
 9068      452D3631 
 9069              	.LASF231:
 9070 5921 5F5F494E 		.ascii	"__INT64_C(c) c ## LL\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 230


 9070      5436345F 
 9070      43286329 
 9070      20632023 
 9070      23204C4C 
 9071              	.LASF228:
 9072 5936 5F5F494E 		.ascii	"__INT_LEAST32_MAX__ 2147483647L\000"
 9072      545F4C45 
 9072      41535433 
 9072      325F4D41 
 9072      585F5F20 
 9073              	.LASF472:
 9074 5956 48415645 		.ascii	"HAVE_INITFINI_ARRAY 1\000"
 9074      5F494E49 
 9074      5446494E 
 9074      495F4152 
 9074      52415920 
 9075              	.LASF631:
 9076 596c 73747274 		.ascii	"strtodf strtof\000"
 9076      6F646620 
 9076      73747274 
 9076      6F6600
 9077              	.LASF484:
 9078 597b 5F484156 		.ascii	"_HAVE_STDC \000"
 9078      455F5354 
 9078      44432000 
 9079              	.LASF923:
 9080 5987 46445F5A 		.ascii	"FD_ZERO(p) (__extension__ (void)({ size_t __i; char"
 9080      45524F28 
 9080      70292028 
 9080      5F5F6578 
 9080      74656E73 
 9081 59ba 202A5F5F 		.ascii	" *__tmp = (char *)p; for (__i = 0; __i < sizeof (*("
 9081      746D7020 
 9081      3D202863 
 9081      68617220 
 9081      2A29703B 
 9082 59ed 7029293B 		.ascii	"p)); ++__i) *__tmp++ = 0; }))\000"
 9082      202B2B5F 
 9082      5F692920 
 9082      2A5F5F74 
 9082      6D702B2B 
 9083              	.LASF924:
 9084 5a0b 5F5F4D53 		.ascii	"__MS_types__\000"
 9084      5F747970 
 9084      65735F5F 
 9084      00
 9085              	.LASF289:
 9086 5a18 5F5F4C44 		.ascii	"__LDBL_MIN__ 2.2250738585072014e-308L\000"
 9086      424C5F4D 
 9086      494E5F5F 
 9086      20322E32 
 9086      32353037 
 9087              	.LASF849:
 9088 5a3e 50524958 		.ascii	"PRIXFAST64 __PRI64(X)\000"
 9088      46415354 
 9088      3634205F 
 9088      5F505249 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 231


 9088      36342858 
 9089              	.LASF367:
 9090 5a54 5F5F4143 		.ascii	"__ACCUM_IBIT__ 16\000"
 9090      43554D5F 
 9090      49424954 
 9090      5F5F2031 
 9090      3600
 9091              	.LASF153:
 9092 5a66 5F5F4249 		.ascii	"__BIGGEST_ALIGNMENT__ 8\000"
 9092      47474553 
 9092      545F414C 
 9092      49474E4D 
 9092      454E545F 
 9093              	.LASF755:
 9094 5a7e 50524975 		.ascii	"PRIu16 __PRI16(u)\000"
 9094      3136205F 
 9094      5F505249 
 9094      31362875 
 9094      2900
 9095              	.LASF221:
 9096 5a90 5F5F5549 		.ascii	"__UINT16_MAX__ 65535\000"
 9096      4E543136 
 9096      5F4D4158 
 9096      5F5F2036 
 9096      35353335 
 9097              	.LASF1050:
 9098 5aa5 49434552 		.ascii	"ICER MMIO(0xE000E180)\000"
 9098      204D4D49 
 9098      4F283078 
 9098      45303030 
 9098      45313830 
 9099              	.LASF468:
 9100 5abb 5F4E4557 		.ascii	"_NEWLIB_VERSION \"1.19.0\"\000"
 9100      4C49425F 
 9100      56455253 
 9100      494F4E20 
 9100      22312E31 
 9101              	.LASF3:
 9102 5ad4 73686F72 		.ascii	"short int\000"
 9102      7420696E 
 9102      7400
 9103              	.LASF605:
 9104 5ade 5F524545 		.ascii	"_REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)"
 9104      4E545F54 
 9104      4D287074 
 9104      72292028 
 9104      26287074 
 9105 5b11 00       		.ascii	"\000"
 9106              	.LASF866:
 9107 5b12 53434E75 		.ascii	"SCNuMAX __SCNMAX(u)\000"
 9107      4D415820 
 9107      5F5F5343 
 9107      4E4D4158 
 9107      28752900 
 9108              	.LASF56:
 9109 5b26 49324352 		.ascii	"I2CReadIndex\000"
 9109      65616449 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 232


 9109      6E646578 
 9109      00
 9110              	.LASF1064:
 9111 5b33 76615F61 		.ascii	"va_arg(v,l) __builtin_va_arg(v,l)\000"
 9111      72672876 
 9111      2C6C2920 
 9111      5F5F6275 
 9111      696C7469 
 9112              	.LASF681:
 9113 5b55 494E545F 		.ascii	"INT_FAST8_MAX __STDINT_EXP(INT_MAX)\000"
 9113      46415354 
 9113      385F4D41 
 9113      58205F5F 
 9113      53544449 
 9114              	.LASF235:
 9115 5b79 5F5F5549 		.ascii	"__UINT16_C(c) c\000"
 9115      4E543136 
 9115      5F432863 
 9115      29206300 
 9116              	.LASF843:
 9117 5b89 53434E78 		.ascii	"SCNxLEAST64 __SCN64(x)\000"
 9117      4C454153 
 9117      54363420 
 9117      5F5F5343 
 9117      4E363428 
 9118              	.LASF429:
 9119 5ba0 5F5F5544 		.ascii	"__UDA_IBIT__ 32\000"
 9119      415F4942 
 9119      49545F5F 
 9119      20333200 
 9120              	.LASF921:
 9121 5bb0 46445F43 		.ascii	"FD_CLR(n,p) ((p)->fds_bits[(n)/NFDBITS] &= ~(1L << "
 9121      4C52286E 
 9121      2C702920 
 9121      28287029 
 9121      2D3E6664 
 9122 5be3 28286E29 		.ascii	"((n) % NFDBITS)))\000"
 9122      2025204E 
 9122      46444249 
 9122      54532929 
 9122      2900
 9123              	.LASF265:
 9124 5bf5 5F5F464C 		.ascii	"__FLT_HAS_INFINITY__ 1\000"
 9124      545F4841 
 9124      535F494E 
 9124      46494E49 
 9124      54595F5F 
 9125              	.LASF1103:
 9126 5c0c 6E6F496E 		.ascii	"noInterrupts() asm(\"CPSID i\")\000"
 9126      74657272 
 9126      75707473 
 9126      28292061 
 9126      736D2822 
 9127              	.LASF1105:
 9128 5c2a 636C6F63 		.ascii	"clockCyclesToMicroseconds(a) ( (a) / clockCyclesPer"
 9128      6B437963 
 9128      6C657354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 233


 9128      6F4D6963 
 9128      726F7365 
 9129 5c5d 4D696372 		.ascii	"Microsecond() )\000"
 9129      6F736563 
 9129      6F6E6428 
 9129      29202900 
 9130              	.LASF135:
 9131 5c6d 5F5F4154 		.ascii	"__ATOMIC_RELAXED 0\000"
 9131      4F4D4943 
 9131      5F52454C 
 9131      41584544 
 9131      203000
 9132              	.LASF506:
 9133 5c80 5F415454 		.ascii	"_ATTRIBUTE(attrs) __attribute__ (attrs)\000"
 9133      52494255 
 9133      54452861 
 9133      74747273 
 9133      29205F5F 
 9134              	.LASF486:
 9135 5ca8 5F454E44 		.ascii	"_END_STD_C }\000"
 9135      5F535444 
 9135      5F43207D 
 9135      00
 9136              	.LASF620:
 9137 5cb5 5F5F4154 		.ascii	"__ATTRIBUTE_IMPURE_PTR__ \000"
 9137      54524942 
 9137      5554455F 
 9137      494D5055 
 9137      52455F50 
 9138              	.LASF279:
 9139 5ccf 5F5F4442 		.ascii	"__DBL_HAS_INFINITY__ 1\000"
 9139      4C5F4841 
 9139      535F494E 
 9139      46494E49 
 9139      54595F5F 
 9140              	.LASF803:
 9141 5ce6 50524958 		.ascii	"PRIXLEAST32 __PRI32(X)\000"
 9141      4C454153 
 9141      54333220 
 9141      5F5F5052 
 9141      49333228 
 9142              	.LASF917:
 9143 5cfd 4E464442 		.ascii	"NFDBITS (sizeof (fd_mask) * NBBY)\000"
 9143      49545320 
 9143      2873697A 
 9143      656F6620 
 9143      2866645F 
 9144              	.LASF578:
 9145 5d1f 5F52414E 		.ascii	"_RAND48_MULT_0 (0xe66d)\000"
 9145      4434385F 
 9145      4D554C54 
 9145      5F302028 
 9145      30786536 
 9146              	.LASF771:
 9147 5d37 53434E6F 		.ascii	"SCNoLEAST16 __SCN16(o)\000"
 9147      4C454153 
 9147      54313620 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 234


 9147      5F5F5343 
 9147      4E313628 
 9148              	.LASF808:
 9149 5d4e 53434E78 		.ascii	"SCNxLEAST32 __SCN32(x)\000"
 9149      4C454153 
 9149      54333220 
 9149      5F5F5343 
 9149      4E333228 
 9150              	.LASF1021:
 9151 5d65 494F434F 		.ascii	"IOCON_PIO1_5 MMIO(0x400440A0)\000"
 9151      4E5F5049 
 9151      4F315F35 
 9151      204D4D49 
 9151      4F283078 
 9152              	.LASF765:
 9153 5d83 5052496F 		.ascii	"PRIoLEAST16 __PRI16(o)\000"
 9153      4C454153 
 9153      54313620 
 9153      5F5F5052 
 9153      49313628 
 9154              	.LASF466:
 9155 5d9a 5F5F5553 		.ascii	"__USES_INITFINI__ 1\000"
 9155      45535F49 
 9155      4E495446 
 9155      494E495F 
 9155      5F203100 
 9156              	.LASF16:
 9157 5dae 54776F57 		.ascii	"TwoWire\000"
 9157      69726500 
 9158              	.LASF1109:
 9159 5db6 62697452 		.ascii	"bitRead(value,bit) (((value) >> (bit)) & 0x01)\000"
 9159      65616428 
 9159      76616C75 
 9159      652C6269 
 9159      74292028 
 9160              	.LASF200:
 9161 5de5 5F5F5348 		.ascii	"__SHRT_MAX__ 32767\000"
 9161      52545F4D 
 9161      41585F5F 
 9161      20333237 
 9161      363700
 9162              	.LASF899:
 9163 5df8 5F5F6E65 		.ascii	"__need_ptrdiff_t\000"
 9163      65645F70 
 9163      74726469 
 9163      66665F74 
 9163      00
 9164              	.LASF273:
 9165 5e09 5F5F4442 		.ascii	"__DBL_DECIMAL_DIG__ 17\000"
 9165      4C5F4445 
 9165      43494D41 
 9165      4C5F4449 
 9165      475F5F20 
 9166              	.LASF640:
 9167 5e20 5F5F6861 		.ascii	"__have_long32 1\000"
 9167      76655F6C 
 9167      6F6E6733 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 235


 9167      32203100 
 9168              	.LASF571:
 9169 5e30 5F4E554C 		.ascii	"_NULL 0\000"
 9169      4C203000 
 9170              	.LASF125:
 9171 5e38 49325343 		.ascii	"I2SCLL_SCLL 0x000000F0\000"
 9171      4C4C5F53 
 9171      434C4C20 
 9171      30783030 
 9171      30303030 
 9172              	.LASF568:
 9173 5e4f 5F5F6C6F 		.ascii	"__lock_release_recursive(lock) (_CAST_VOID 0)\000"
 9173      636B5F72 
 9173      656C6561 
 9173      73655F72 
 9173      65637572 
 9174              	.LASF823:
 9175 5e7d 50524969 		.ascii	"PRIi64 __PRI64(i)\000"
 9175      3634205F 
 9175      5F505249 
 9175      36342869 
 9175      2900
 9176              	.LASF777:
 9177 5e8f 50524975 		.ascii	"PRIuFAST16 __PRI16(u)\000"
 9177      46415354 
 9177      3136205F 
 9177      5F505249 
 9177      31362875 
 9178              	.LASF647:
 9179 5ea5 5F5F696E 		.ascii	"__int64_t_defined 1\000"
 9179      7436345F 
 9179      745F6465 
 9179      66696E65 
 9179      64203100 
 9180              	.LASF1040:
 9181 5eb9 4D523049 		.ascii	"MR0INT 0\000"
 9181      4E542030 
 9181      00
 9182              	.LASF470:
 9183 5ec2 5F57414E 		.ascii	"_WANT_REGISTER_FINI 1\000"
 9183      545F5245 
 9183      47495354 
 9183      45525F46 
 9183      494E4920 
 9184              	.LASF1106:
 9185 5ed8 6D696372 		.ascii	"microsecondsToClockCycles(a) ( (a) * clockCyclesPer"
 9185      6F736563 
 9185      6F6E6473 
 9185      546F436C 
 9185      6F636B43 
 9186 5f0b 4D696372 		.ascii	"Microsecond() )\000"
 9186      6F736563 
 9186      6F6E6428 
 9186      29202900 
 9187              	.LASF817:
 9188 5f1b 53434E6F 		.ascii	"SCNoFAST32 __SCN32(o)\000"
 9188      46415354 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 236


 9188      3332205F 
 9188      5F53434E 
 9188      3332286F 
 9189              	.LASF110:
 9190 5f31 4932435F 		.ascii	"I2C_ARBITRATION_LOST 10\000"
 9190      41524249 
 9190      54524154 
 9190      494F4E5F 
 9190      4C4F5354 
 9191              	.LASF78:
 9192 5f49 5F4D4143 		.ascii	"_MACHSTDLIB_H_ \000"
 9192      48535444 
 9192      4C49425F 
 9192      485F2000 
 9193              	.LASF1129:
 9194 5f59 50472037 		.ascii	"PG 7\000"
 9194      00
 9195              	.LASF759:
 9196 5f5e 53434E69 		.ascii	"SCNi16 __SCN16(i)\000"
 9196      3136205F 
 9196      5F53434E 
 9196      31362869 
 9196      2900
 9197              	.LASF202:
 9198 5f70 5F5F4C4F 		.ascii	"__LONG_MAX__ 2147483647L\000"
 9198      4E475F4D 
 9198      41585F5F 
 9198      20323134 
 9198      37343833 
 9199              	.LASF842:
 9200 5f89 53434E75 		.ascii	"SCNuLEAST64 __SCN64(u)\000"
 9200      4C454153 
 9200      54363420 
 9200      5F5F5343 
 9200      4E363428 
 9201              	.LASF196:
 9202 5fa0 5F5F4758 		.ascii	"__GXX_WEAK__ 1\000"
 9202      585F5745 
 9202      414B5F5F 
 9202      203100
 9203              	.LASF396:
 9204 5faf 5F5F5151 		.ascii	"__QQ_FBIT__ 7\000"
 9204      5F464249 
 9204      545F5F20 
 9204      3700
 9205              	.LASF825:
 9206 5fbd 50524975 		.ascii	"PRIu64 __PRI64(u)\000"
 9206      3634205F 
 9206      5F505249 
 9206      36342875 
 9206      2900
 9207              	.LASF662:
 9208 5fcf 494E5431 		.ascii	"INT16_MIN -32768\000"
 9208      365F4D49 
 9208      4E202D33 
 9208      32373638 
 9208      00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 237


 9209              	.LASF487:
 9210 5fe0 5F4E4F54 		.ascii	"_NOTHROW __attribute__ ((nothrow))\000"
 9210      48524F57 
 9210      205F5F61 
 9210      74747269 
 9210      62757465 
 9211              	.LASF58:
 9212 6003 5264496E 		.ascii	"RdIndex\000"
 9212      64657800 
 9213              	.LASF1002:
 9214 600b 4F435420 		.ascii	"OCT 8\000"
 9214      3800
 9215              	.LASF756:
 9216 6011 50524978 		.ascii	"PRIx16 __PRI16(x)\000"
 9216      3136205F 
 9216      5F505249 
 9216      31362878 
 9216      2900
 9217              	.LASF1014:
 9218 6023 55304C43 		.ascii	"U0LCR MMIO(0x4000800C)\000"
 9218      52204D4D 
 9218      494F2830 
 9218      78343030 
 9218      30383030 
 9219              	.LASF852:
 9220 603a 53434E6F 		.ascii	"SCNoFAST64 __SCN64(o)\000"
 9220      46415354 
 9220      3634205F 
 9220      5F53434E 
 9220      3634286F 
 9221              	.LASF1076:
 9222 6050 494E5055 		.ascii	"INPUT 0x0\000"
 9222      54203078 
 9222      3000
 9223              	.LASF761:
 9224 605a 53434E75 		.ascii	"SCNu16 __SCN16(u)\000"
 9224      3136205F 
 9224      5F53434E 
 9224      31362875 
 9224      2900
 9225              	.LASF392:
 9226 606c 5F5F554C 		.ascii	"__ULLACCUM_IBIT__ 32\000"
 9226      4C414343 
 9226      554D5F49 
 9226      4249545F 
 9226      5F203332 
 9227              	.LASF49:
 9228 6081 49324353 		.ascii	"I2CSlaveState\000"
 9228      6C617665 
 9228      53746174 
 9228      6500
 9229              	.LASF1068:
 9230 608f 5F56415F 		.ascii	"_VA_LIST \000"
 9230      4C495354 
 9230      2000
 9231              	.LASF298:
 9232 6099 5F5F4445 		.ascii	"__DEC32_MIN__ 1E-95DF\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 238


 9232      4333325F 
 9232      4D494E5F 
 9232      5F203145 
 9232      2D393544 
 9233              	.LASF355:
 9234 60af 5F5F554C 		.ascii	"__ULLFRACT_EPSILON__ 0x1P-64ULLR\000"
 9234      4C465241 
 9234      43545F45 
 9234      5053494C 
 9234      4F4E5F5F 
 9235              	.LASF775:
 9236 60d0 50524969 		.ascii	"PRIiFAST16 __PRI16(i)\000"
 9236      46415354 
 9236      3136205F 
 9236      5F505249 
 9236      31362869 
 9237              	.LASF857:
 9238 60e6 50524964 		.ascii	"PRIdMAX __PRIMAX(d)\000"
 9238      4D415820 
 9238      5F5F5052 
 9238      494D4158 
 9238      28642900 
 9239              	.LASF451:
 9240 60fa 5F5F5349 		.ascii	"__SIZEOF_WINT_T__ 4\000"
 9240      5A454F46 
 9240      5F57494E 
 9240      545F545F 
 9240      5F203400 
 9241              	.LASF43:
 9242 610e 5F5A4E37 		.ascii	"_ZN7TwoWireC2Ev\000"
 9242      54776F57 
 9242      69726543 
 9242      32457600 
 9243              	.LASF464:
 9244 611e 5F5F4758 		.ascii	"__GXX_TYPEINFO_EQUALITY_INLINE 0\000"
 9244      585F5459 
 9244      5045494E 
 9244      464F5F45 
 9244      5155414C 
 9245              	.LASF495:
 9246 613f 5F564F49 		.ascii	"_VOID void\000"
 9246      4420766F 
 9246      696400
 9247              	.LASF66:
 9248 614a 49324349 		.ascii	"I2CInit\000"
 9248      6E697400 
 9249              	.LASF1063:
 9250 6152 76615F65 		.ascii	"va_end(v) __builtin_va_end(v)\000"
 9250      6E642876 
 9250      29205F5F 
 9250      6275696C 
 9250      74696E5F 
 9251              	.LASF378:
 9252 6170 5F5F4C41 		.ascii	"__LACCUM_MIN__ (-0X1P31LK-0X1P31LK)\000"
 9252      4343554D 
 9252      5F4D494E 
 9252      5F5F2028 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 239


 9252      2D305831 
 9253              	.LASF1077:
 9254 6194 4F555450 		.ascii	"OUTPUT 0x1\000"
 9254      55542030 
 9254      783100
 9255              	.LASF115:
 9256 619f 4932434F 		.ascii	"I2CONSET_SI (0x1<<3)\000"
 9256      4E534554 
 9256      5F534920 
 9256      28307831 
 9256      3C3C3329 
 9257              	.LASF296:
 9258 61b4 5F5F4445 		.ascii	"__DEC32_MIN_EXP__ (-94)\000"
 9258      4333325F 
 9258      4D494E5F 
 9258      4558505F 
 9258      5F20282D 
 9259              	.LASF778:
 9260 61cc 50524978 		.ascii	"PRIxFAST16 __PRI16(x)\000"
 9260      46415354 
 9260      3136205F 
 9260      5F505249 
 9260      31362878 
 9261              	.LASF393:
 9262 61e2 5F5F554C 		.ascii	"__ULLACCUM_MIN__ 0.0ULLK\000"
 9262      4C414343 
 9262      554D5F4D 
 9262      494E5F5F 
 9262      20302E30 
 9263              	.LASF747:
 9264 61fb 53434E6F 		.ascii	"SCNoFAST8 __SCN8(o)\000"
 9264      46415354 
 9264      38205F5F 
 9264      53434E38 
 9264      286F2900 
 9265              	.LASF540:
 9266 620f 5F5F5F69 		.ascii	"___int_wchar_t_h \000"
 9266      6E745F77 
 9266      63686172 
 9266      5F745F68 
 9266      2000
 9267              	.LASF51:
 9268 6221 4932434D 		.ascii	"I2CMode\000"
 9268      6F646500 
 9269              	.LASF868:
 9270 6229 5F5F5052 		.ascii	"__PRIPTR(x) __STRINGIFY(ll ##x)\000"
 9270      49505452 
 9270      28782920 
 9270      5F5F5354 
 9270      52494E47 
 9271              	.LASF984:
 9272 6249 4C5F6375 		.ascii	"L_cuserid 9\000"
 9272      73657269 
 9272      64203900 
 9273              	.LASF107:
 9274 6255 4932435F 		.ascii	"I2C_NO_DATA 7\000"
 9274      4E4F5F44 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 240


 9274      41544120 
 9274      3700
 9275              	.LASF1073:
 9276 6263 73707269 		.ascii	"sprintf tfp_sprintf\000"
 9276      6E746620 
 9276      7466705F 
 9276      73707269 
 9276      6E746600 
 9277              	.LASF31:
 9278 6277 5F5A4E37 		.ascii	"_ZN7TwoWire5writeEh\000"
 9278      54776F57 
 9278      69726535 
 9278      77726974 
 9278      65456800 
 9279              	.LASF735:
 9280 628b 53434E69 		.ascii	"SCNiLEAST8 __SCN8(i)\000"
 9280      4C454153 
 9280      5438205F 
 9280      5F53434E 
 9280      38286929 
 9281              	.LASF176:
 9282 62a0 5F5F5549 		.ascii	"__UINT32_TYPE__ long unsigned int\000"
 9282      4E543332 
 9282      5F545950 
 9282      455F5F20 
 9282      6C6F6E67 
 9283              	.LASF947:
 9284 62c2 5F5F5357 		.ascii	"__SWID 0x2000\000"
 9284      49442030 
 9284      78323030 
 9284      3000
 9285              	.LASF1116:
 9286 62d0 64696769 		.ascii	"digitalPinToTimer(P) *(digital_pin_to_timer_PGM + ("
 9286      74616C50 
 9286      696E546F 
 9286      54696D65 
 9286      72285029 
 9287 6303 50292900 		.ascii	"P))\000"
 9288              	.LASF847:
 9289 6307 50524975 		.ascii	"PRIuFAST64 __PRI64(u)\000"
 9289      46415354 
 9289      3634205F 
 9289      5F505249 
 9289      36342875 
 9290              	.LASF661:
 9291 631d 55494E54 		.ascii	"UINT_LEAST8_MAX 255\000"
 9291      5F4C4541 
 9291      5354385F 
 9291      4D415820 
 9291      32353500 
 9292              	.LASF280:
 9293 6331 5F5F4442 		.ascii	"__DBL_HAS_QUIET_NAN__ 1\000"
 9293      4C5F4841 
 9293      535F5155 
 9293      4945545F 
 9293      4E414E5F 
 9294              	.LASF525:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 241


 9295 6349 5F474343 		.ascii	"_GCC_SIZE_T \000"
 9295      5F53495A 
 9295      455F5420 
 9295      00
 9296              	.LASF15:
 9297 6356 646F7562 		.ascii	"double\000"
 9297      6C6500
 9298              	.LASF353:
 9299 635d 5F5F554C 		.ascii	"__ULLFRACT_MIN__ 0.0ULLR\000"
 9299      4C465241 
 9299      43545F4D 
 9299      494E5F5F 
 9299      20302E30 
 9300              	.LASF532:
 9301 6376 5F545F57 		.ascii	"_T_WCHAR_ \000"
 9301      43484152 
 9301      5F2000
 9302              	.LASF911:
 9303 6381 5F425344 		.ascii	"_BSDTYPES_DEFINED \000"
 9303      54595045 
 9303      535F4445 
 9303      46494E45 
 9303      442000
 9304              	.LASF94:
 9305 6394 4D41585F 		.ascii	"MAX_TIMEOUT 0x00FFFFFF\000"
 9305      54494D45 
 9305      4F555420 
 9305      30783030 
 9305      46464646 
 9306              	.LASF588:
 9307 63ab 5F524545 		.ascii	"_REENT_CHECK_RAND48(ptr) \000"
 9307      4E545F43 
 9307      4845434B 
 9307      5F52414E 
 9307      44343828 
 9308              	.LASF922:
 9309 63c5 46445F49 		.ascii	"FD_ISSET(n,p) ((p)->fds_bits[(n)/NFDBITS] & (1L << "
 9309      53534554 
 9309      286E2C70 
 9309      29202828 
 9309      70292D3E 
 9310 63f8 28286E29 		.ascii	"((n) % NFDBITS)))\000"
 9310      2025204E 
 9310      46444249 
 9310      54532929 
 9310      2900
 9311              	.LASF144:
 9312 640a 5F5F5349 		.ascii	"__SIZEOF_INT__ 4\000"
 9312      5A454F46 
 9312      5F494E54 
 9312      5F5F2034 
 9312      00
 9313              	.LASF544:
 9314 641b 5F425344 		.ascii	"_BSD_WCHAR_T_\000"
 9314      5F574348 
 9314      41525F54 
 9314      5F00
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 242


 9315              	.LASF1075:
 9316 6429 4C4F5720 		.ascii	"LOW 0x0\000"
 9316      30783000 
 9317              	.LASF347:
 9318 6431 5F5F4C4C 		.ascii	"__LLFRACT_IBIT__ 0\000"
 9318      46524143 
 9318      545F4942 
 9318      49545F5F 
 9318      203000
 9319              	.LASF635:
 9320 6444 7374726E 		.ascii	"strncmpi strncasecmp\000"
 9320      636D7069 
 9320      20737472 
 9320      6E636173 
 9320      65636D70 
 9321              	.LASF13:
 9322 6459 75696E74 		.ascii	"uint32_t\000"
 9322      33325F74 
 9322      00
 9323              	.LASF675:
 9324 6462 494E5436 		.ascii	"INT64_MAX 9223372036854775807LL\000"
 9324      345F4D41 
 9324      58203932 
 9324      32333337 
 9324      32303336 
 9325              	.LASF812:
 9326 6482 50524975 		.ascii	"PRIuFAST32 __PRI32(u)\000"
 9326      46415354 
 9326      3332205F 
 9326      5F505249 
 9326      33322875 
 9327              	.LASF360:
 9328 6498 5F5F5341 		.ascii	"__SACCUM_EPSILON__ 0x1P-7HK\000"
 9328      4343554D 
 9328      5F455053 
 9328      494C4F4E 
 9328      5F5F2030 
 9329              	.LASF1032:
 9330 64b4 53595341 		.ascii	"SYSAHBCLKCTRL MMIO(0x40048080)\000"
 9330      4842434C 
 9330      4B435452 
 9330      4C204D4D 
 9330      494F2830 
 9331              	.LASF807:
 9332 64d3 53434E75 		.ascii	"SCNuLEAST32 __SCN32(u)\000"
 9332      4C454153 
 9332      54333220 
 9332      5F5F5343 
 9332      4E333228 
 9333              	.LASF117:
 9334 64ea 4932434F 		.ascii	"I2CONSET_STA (0x1<<5)\000"
 9334      4E534554 
 9334      5F535441 
 9334      20283078 
 9334      313C3C35 
 9335              	.LASF545:
 9336 6500 5F5F6E65 		.ascii	"__need_wchar_t\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 243


 9336      65645F77 
 9336      63686172 
 9336      5F7400
 9337              	.LASF919:
 9338 650f 66645F73 		.ascii	"fd_set _types_fd_set\000"
 9338      6574205F 
 9338      74797065 
 9338      735F6664 
 9338      5F736574 
 9339              	.LASF191:
 9340 6524 5F5F5549 		.ascii	"__UINT_FAST16_TYPE__ unsigned int\000"
 9340      4E545F46 
 9340      41535431 
 9340      365F5459 
 9340      50455F5F 
 9341              	.LASF92:
 9342 6546 46415354 		.ascii	"FAST_MODE_PLUS 1\000"
 9342      5F4D4F44 
 9342      455F504C 
 9342      55532031 
 9342      00
 9343              	.LASF425:
 9344 6557 5F5F5548 		.ascii	"__UHA_IBIT__ 8\000"
 9344      415F4942 
 9344      49545F5F 
 9344      203800
 9345              	.LASF77:
 9346 6566 5F5F6E65 		.ascii	"__need_wint_t \000"
 9346      65645F77 
 9346      696E745F 
 9346      742000
 9347              	.LASF370:
 9348 6575 5F5F4143 		.ascii	"__ACCUM_EPSILON__ 0x1P-15K\000"
 9348      43554D5F 
 9348      45505349 
 9348      4C4F4E5F 
 9348      5F203078 
 9349              	.LASF385:
 9350 6590 5F5F554C 		.ascii	"__ULACCUM_EPSILON__ 0x1P-32ULK\000"
 9350      41434355 
 9350      4D5F4550 
 9350      53494C4F 
 9350      4E5F5F20 
 9351              	.LASF990:
 9352 65af 5F552030 		.ascii	"_U 01\000"
 9352      3100
 9353              	.LASF282:
 9354 65b5 5F5F4C44 		.ascii	"__LDBL_DIG__ 15\000"
 9354      424C5F44 
 9354      49475F5F 
 9354      20313500 
 9355              	.LASF1070:
 9356 65c5 5F56415F 		.ascii	"_VA_LIST_T_H \000"
 9356      4C495354 
 9356      5F545F48 
 9356      2000
 9357              	.LASF964:
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 244


 9358 65d3 5F737464 		.ascii	"_stdin_r(x) ((x)->_stdin)\000"
 9358      696E5F72 
 9358      28782920 
 9358      28287829 
 9358      2D3E5F73 
 9359              	.LASF977:
 9360 65ed 5F5F7366 		.ascii	"__sfileno(p) ((p)->_file)\000"
 9360      696C656E 
 9360      6F287029 
 9360      20282870 
 9360      292D3E5F 
 9361              	.LASF742:
 9362 6607 50524975 		.ascii	"PRIuFAST8 __PRI8(u)\000"
 9362      46415354 
 9362      38205F5F 
 9362      50524938 
 9362      28752900 
 9363              	.LASF207:
 9364 661b 5F5F5749 		.ascii	"__WINT_MIN__ 0U\000"
 9364      4E545F4D 
 9364      494E5F5F 
 9364      20305500 
 9365              	.LASF653:
 9366 662b 494E5450 		.ascii	"INTPTR_MAX PTRDIFF_MAX\000"
 9366      54525F4D 
 9366      41582050 
 9366      54524449 
 9366      46465F4D 
 9367              	.LASF841:
 9368 6642 53434E6F 		.ascii	"SCNoLEAST64 __SCN64(o)\000"
 9368      4C454153 
 9368      54363420 
 9368      5F5F5343 
 9368      4E363428 
 9369              	.LASF307:
 9370 6659 5F5F4445 		.ascii	"__DEC64_EPSILON__ 1E-15DD\000"
 9370      4336345F 
 9370      45505349 
 9370      4C4F4E5F 
 9370      5F203145 
 9371              	.LASF861:
 9372 6673 50524978 		.ascii	"PRIxMAX __PRIMAX(x)\000"
 9372      4D415820 
 9372      5F5F5052 
 9372      494D4158 
 9372      28782900 
 9373              	.LASF1099:
 9374 6687 72616469 		.ascii	"radians(deg) ((deg)*DEG_TO_RAD)\000"
 9374      616E7328 
 9374      64656729 
 9374      20282864 
 9374      6567292A 
 9375              	.LASF179:
 9376 66a7 5F5F494E 		.ascii	"__INT_LEAST16_TYPE__ short int\000"
 9376      545F4C45 
 9376      41535431 
 9376      365F5459 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 245


 9376      50455F5F 
 9377              	.LASF914:
 9378 66c6 5F535953 		.ascii	"_SYS_TYPES_FD_SET \000"
 9378      5F545950 
 9378      45535F46 
 9378      445F5345 
 9378      542000
 9379              	.LASF968:
 9380 66d9 66726F70 		.ascii	"fropen(__cookie,__fn) funopen(__cookie, __fn, (int "
 9380      656E285F 
 9380      5F636F6F 
 9380      6B69652C 
 9380      5F5F666E 
 9381 670c 282A2928 		.ascii	"(*)())0, (fpos_t (*)())0, (int (*)())0)\000"
 9381      2929302C 
 9381      20286670 
 9381      6F735F74 
 9381      20282A29 
 9382              	.LASF673:
 9383 6734 55494E54 		.ascii	"UINT_LEAST32_MAX 4294967295UL\000"
 9383      5F4C4541 
 9383      53543332 
 9383      5F4D4158 
 9383      20343239 
 9384              	.LASF614:
 9385 6752 5F524545 		.ascii	"_REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrt"
 9385      4E545F57 
 9385      4352544F 
 9385      4D425F53 
 9385      54415445 
 9386 6785 6F6D625F 		.ascii	"omb_state)\000"
 9386      73746174 
 9386      652900
 9387              	.LASF488:
 9388 6790 5F505452 		.ascii	"_PTR void *\000"
 9388      20766F69 
 9388      64202A00 
 9389              	.LASF346:
 9390 679c 5F5F4C4C 		.ascii	"__LLFRACT_FBIT__ 63\000"
 9390      46524143 
 9390      545F4642 
 9390      49545F5F 
 9390      20363300 
 9391              	.LASF529:
 9392 67b0 5F5F7763 		.ascii	"__wchar_t__ \000"
 9392      6861725F 
 9392      745F5F20 
 9392      00
 9393              	.LASF455:
 9394 67bd 5F5F7468 		.ascii	"__thumb__ 1\000"
 9394      756D625F 
 9394      5F203100 
 9395              	.LASF687:
 9396 67c9 494E545F 		.ascii	"INT_FAST32_MAX __STDINT_EXP(INT_MAX)\000"
 9396      46415354 
 9396      33325F4D 
 9396      4158205F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 246


 9396      5F535444 
 9397              	.LASF966:
 9398 67ee 5F737464 		.ascii	"_stderr_r(x) ((x)->_stderr)\000"
 9398      6572725F 
 9398      72287829 
 9398      20282878 
 9398      292D3E5F 
 9399              	.LASF456:
 9400 680a 5F5F4152 		.ascii	"__ARMEL__ 1\000"
 9400      4D454C5F 
 9400      5F203100 
 9401              	.LASF1102:
 9402 6816 696E7465 		.ascii	"interrupts() asm(\"CPSIE i\")\000"
 9402      72727570 
 9402      74732829 
 9402      2061736D 
 9402      28224350 
 9403              	.LASF560:
 9404 6832 5F5F6C6F 		.ascii	"__lock_init_recursive(lock) (_CAST_VOID 0)\000"
 9404      636B5F69 
 9404      6E69745F 
 9404      72656375 
 9404      72736976 
 9405              	.LASF398:
 9406 685d 5F5F4851 		.ascii	"__HQ_FBIT__ 15\000"
 9406      5F464249 
 9406      545F5F20 
 9406      313500
 9407              	.LASF434:
 9408 686c 5F5F474E 		.ascii	"__GNUC_GNU_INLINE__ 1\000"
 9408      55435F47 
 9408      4E555F49 
 9408      4E4C494E 
 9408      455F5F20 
 9409              	.LASF617:
 9410 6882 5F524545 		.ascii	"_REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_"
 9410      4E545F53 
 9410      49474E41 
 9410      4C5F4255 
 9410      46287074 
 9411 68b5 62756629 		.ascii	"buf)\000"
 9411      00
 9412              	.LASF1151:
 9413 68ba 54494D45 		.ascii	"TIMER5C 17\000"
 9413      52354320 
 9413      313700
 9414              	.LASF942:
 9415 68c5 5F5F534F 		.ascii	"__SOPT 0x0400\000"
 9415      50542030 
 9415      78303430 
 9415      3000
 9416              	.LASF123:
 9417 68d3 49324144 		.ascii	"I2ADR_I2C 0x00000000\000"
 9417      525F4932 
 9417      43203078 
 9417      30303030 
 9417      30303030 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 247


 9418              	.LASF1037:
 9419 68e8 4750494F 		.ascii	"GPIO1DIR MMIO(0x50018000)\000"
 9419      31444952 
 9419      204D4D49 
 9419      4F283078 
 9419      35303031 
 9420              	.LASF734:
 9421 6902 53434E64 		.ascii	"SCNdLEAST8 __SCN8(d)\000"
 9421      4C454153 
 9421      5438205F 
 9421      5F53434E 
 9421      38286429 
 9422              	.LASF317:
 9423 6917 5F5F5346 		.ascii	"__SFRACT_IBIT__ 0\000"
 9423      52414354 
 9423      5F494249 
 9423      545F5F20 
 9423      3000
 9424              	.LASF1124:
 9425 6929 50422032 		.ascii	"PB 2\000"
 9425      00
 9426              	.LASF642:
 9427 692e 5F5F696E 		.ascii	"__int_least8_t_defined 1\000"
 9427      745F6C65 
 9427      61737438 
 9427      5F745F64 
 9427      6566696E 
 9428              	.LASF831:
 9429 6947 53434E75 		.ascii	"SCNu64 __SCN64(u)\000"
 9429      3634205F 
 9429      5F53434E 
 9429      36342875 
 9429      2900
 9430              	.LASF1098:
 9431 6959 726F756E 		.ascii	"round(x) ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))\000"
 9431      64287829 
 9431      20282878 
 9431      293E3D30 
 9431      3F286C6F 
 9432              	.LASF666:
 9433 698b 494E545F 		.ascii	"INT_LEAST16_MAX 32767\000"
 9433      4C454153 
 9433      5431365F 
 9433      4D415820 
 9433      33323736 
 9434              	.LASF581:
 9435 69a1 5F52414E 		.ascii	"_RAND48_ADD (0x000b)\000"
 9435      4434385F 
 9435      41444420 
 9435      28307830 
 9435      30306229 
 9436              	.LASF762:
 9437 69b6 53434E78 		.ascii	"SCNx16 __SCN16(x)\000"
 9437      3136205F 
 9437      5F53434E 
 9437      31362878 
 9437      2900
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 248


 9438              	.LASF105:
 9439 69c8 44415441 		.ascii	"DATA_NACK 5\000"
 9439      5F4E4143 
 9439      4B203500 
 9440              	.LASF1122:
 9441 69d4 4E4F545F 		.ascii	"NOT_A_PORT 0\000"
 9441      415F504F 
 9441      52542030 
 9441      00
 9442              	.LASF637:
 9443 69e1 5F535444 		.ascii	"_STDINT_H \000"
 9443      494E545F 
 9443      482000
 9444              	.LASF1001:
 9445 69ec 48455820 		.ascii	"HEX 16\000"
 9445      313600
 9446              	.LASF47:
 9447 69f3 57697265 		.ascii	"Wire\000"
 9447      00
 9448              	.LASF888:
 9449 69f8 5F535444 		.ascii	"_STDDEF_H_ \000"
 9449      4445465F 
 9449      485F2000 
 9450              	.LASF461:
 9451 6a04 5F5F4152 		.ascii	"__ARM_ARCH_6M__ 1\000"
 9451      4D5F4152 
 9451      43485F36 
 9451      4D5F5F20 
 9451      3100
 9452              	.LASF820:
 9453 6a16 5F5F5052 		.ascii	"__PRI64(x) __STRINGIFY(ll ##x)\000"
 9453      49363428 
 9453      7829205F 
 9453      5F535452 
 9453      494E4749 
 9454              	.LASF319:
 9455 6a35 5F5F5346 		.ascii	"__SFRACT_MAX__ 0X7FP-7HR\000"
 9455      52414354 
 9455      5F4D4158 
 9455      5F5F2030 
 9455      58374650 
 9456              	.LASF826:
 9457 6a4e 50524978 		.ascii	"PRIx64 __PRI64(x)\000"
 9457      3634205F 
 9457      5F505249 
 9457      36342878 
 9457      2900
 9458              	.LASF930:
 9459 6a60 5F666C6F 		.ascii	"_flockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __loc"
 9459      636B6669 
 9459      6C652866 
 9459      70292028 
 9459      28286670 
 9460 6a93 6B5F6163 		.ascii	"k_acquire_recursive((fp)->_lock))\000"
 9460      71756972 
 9460      655F7265 
 9460      63757273 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 249


 9460      69766528 
 9461              	.LASF561:
 9462 6ab5 5F5F6C6F 		.ascii	"__lock_close(lock) (_CAST_VOID 0)\000"
 9462      636B5F63 
 9462      6C6F7365 
 9462      286C6F63 
 9462      6B292028 
 9463              	.LASF796:
 9464 6ad7 53434E75 		.ascii	"SCNu32 __SCN32(u)\000"
 9464      3332205F 
 9464      5F53434E 
 9464      33322875 
 9464      2900
 9465              	.LASF781:
 9466 6ae9 53434E69 		.ascii	"SCNiFAST16 __SCN16(i)\000"
 9466      46415354 
 9466      3136205F 
 9466      5F53434E 
 9466      31362869 
 9467              	.LASF227:
 9468 6aff 5F5F494E 		.ascii	"__INT16_C(c) c\000"
 9468      5431365F 
 9468      43286329 
 9468      206300
 9469              	.LASF896:
 9470 6b0e 5F425344 		.ascii	"_BSD_PTRDIFF_T_ \000"
 9470      5F505452 
 9470      44494646 
 9470      5F545F20 
 9470      00
 9471              	.LASF489:
 9472 6b1f 5F414E44 		.ascii	"_AND ,\000"
 9472      202C00
 9473              	.LASF322:
 9474 6b26 5F5F5553 		.ascii	"__USFRACT_IBIT__ 0\000"
 9474      46524143 
 9474      545F4942 
 9474      49545F5F 
 9474      203000
 9475              	.LASF482:
 9476 6b39 5F5F494D 		.ascii	"__IMPORT \000"
 9476      504F5254 
 9476      2000
 9477              	.LASF311:
 9478 6b43 5F5F4445 		.ascii	"__DEC128_MAX_EXP__ 6145\000"
 9478      43313238 
 9478      5F4D4158 
 9478      5F455850 
 9478      5F5F2036 
 9479              	.LASF139:
 9480 6b5b 5F5F4154 		.ascii	"__ATOMIC_ACQ_REL 4\000"
 9480      4F4D4943 
 9480      5F414351 
 9480      5F52454C 
 9480      203400
 9481              	.LASF399:
 9482 6b6e 5F5F4851 		.ascii	"__HQ_IBIT__ 0\000"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 250


 9482      5F494249 
 9482      545F5F20 
 9482      3000
 9483              	.LASF537:
 9484 6b7c 5F574348 		.ascii	"_WCHAR_T_DEFINED_ \000"
 9484      41525F54 
 9484      5F444546 
 9484      494E4544 
 9484      5F2000
 9485              	.LASF44:
 9486 6b8f 64617461 		.ascii	"data\000"
 9486      00
 9487              	.LASF469:
 9488 6b94 5F57414E 		.ascii	"_WANT_IO_LONG_LONG 1\000"
 9488      545F494F 
 9488      5F4C4F4E 
 9488      475F4C4F 
 9488      4E472031 
 9489              	.LASF556:
 9490 6ba9 5F5F5359 		.ascii	"__SYS_LOCK_H__ \000"
 9490      535F4C4F 
 9490      434B5F48 
 9490      5F5F2000 
 9491              	.LASF45:
 9492 6bb9 53746174 		.ascii	"StatValue\000"
 9492      56616C75 
 9492      6500
 9493              	.LASF220:
 9494 6bc3 5F5F5549 		.ascii	"__UINT8_MAX__ 255\000"
 9494      4E54385F 
 9494      4D41585F 
 9494      5F203235 
 9494      3500
 9495              	.LASF583:
 9496 6bd5 5F524545 		.ascii	"_REENT_ASCTIME_SIZE 26\000"
 9496      4E545F41 
 9496      53435449 
 9496      4D455F53 
 9496      495A4520 
 9497              	.LASF246:
 9498 6bec 5F5F5549 		.ascii	"__UINT_FAST32_MAX__ 4294967295U\000"
 9498      4E545F46 
 9498      41535433 
 9498      325F4D41 
 9498      585F5F20 
 9499              	.LASF232:
 9500 6c0c 5F5F5549 		.ascii	"__UINT_LEAST8_MAX__ 255\000"
 9500      4E545F4C 
 9500      45415354 
 9500      385F4D41 
 9500      585F5F20 
 9501              	.LASF926:
 9502 6c24 5F5F636C 		.ascii	"__clockid_t_defined \000"
 9502      6F636B69 
 9502      645F745F 
 9502      64656669 
 9502      6E656420 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 251


 9503              	.LASF587:
 9504 6c39 5F524545 		.ascii	"_REENT_INIT_PTR(var) { (var)->_errno = 0; (var)->_s"
 9504      4E545F49 
 9504      4E49545F 
 9504      50545228 
 9504      76617229 
 9505 6c6c 7464696E 		.ascii	"tdin = &(var)->__sf[0]; (var)->_stdout = &(var)->__"
 9505      203D2026 
 9505      28766172 
 9505      292D3E5F 
 9505      5F73665B 
 9506 6c9f 73665B31 		.ascii	"sf[1]; (var)->_stderr = &(var)->__sf[2]; (var)->_in"
 9506      5D3B2028 
 9506      76617229 
 9506      2D3E5F73 
 9506      74646572 
 9507 6cd2 63203D20 		.ascii	"c = 0; memset(&(var)->_emergency, 0, sizeof((var)->"
 9507      303B206D 
 9507      656D7365 
 9507      74282628 
 9507      76617229 
 9508 6d05 5F656D65 		.ascii	"_emergency)); (var)->_current_category = 0; (var)->"
 9508      7267656E 
 9508      63792929 
 9508      3B202876 
 9508      6172292D 
 9509 6d38 5F637572 		.ascii	"_current_locale = \"C\"; (var)->__sdidinit = 0; (va"
 9509      72656E74 
 9509      5F6C6F63 
 9509      616C6520 
 9509      3D202243 
 9510 6d69 72292D3E 		.ascii	"r)->__cleanup = _NULL; (var)->_result = _NULL; (var"
 9510      5F5F636C 
 9510      65616E75 
 9510      70203D20 
 9510      5F4E554C 
 9511 6d9c 292D3E5F 		.ascii	")->_result_k = 0; (var)->_p5s = _NULL; (var)->_free"
 9511      72657375 
 9511      6C745F6B 
 9511      203D2030 
 9511      3B202876 
 9512 6dcf 6C697374 		.ascii	"list = _NULL; (var)->_cvtlen = 0; (var)->_cvtbuf = "
 9512      203D205F 
 9512      4E554C4C 
 9512      3B202876 
 9512      6172292D 
 9513 6e02 5F4E554C 		.ascii	"_NULL; (var)->_new._reent._unused_rand = 0; (var)->"
 9513      4C3B2028 
 9513      76617229 
 9513      2D3E5F6E 
 9513      65772E5F 
 9514 6e35 5F6E6577 		.ascii	"_new._reent._strtok_last = _NULL; (var)->_new._reen"
 9514      2E5F7265 
 9514      656E742E 
 9514      5F737472 
 9514      746F6B5F 
 9515 6e68 742E5F61 		.ascii	"t._asctime_buf[0] = 0; memset(&(var)->_new._reent._"
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 252


 9515      73637469 
 9515      6D655F62 
 9515      75665B30 
 9515      5D203D20 
 9516 6e9b 6C6F6361 		.ascii	"localtime_buf, 0, sizeof((var)->_new._reent._localt"
 9516      6C74696D 
 9516      655F6275 
 9516      662C2030 
 9516      2C207369 
 9517 6ece 696D655F 		.ascii	"ime_buf)); (var)->_new._reent._gamma_signgam = 0; ("
 9517      62756629 
 9517      293B2028 
 9517      76617229 
 9517      2D3E5F6E 
 9518 6f01 76617229 		.ascii	"var)->_new._reent._rand_next = 1; (var)->_new._reen"
 9518      2D3E5F6E 
 9518      65772E5F 
 9518      7265656E 
 9518      742E5F72 
 9519 6f34 742E5F72 		.ascii	"t._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reen"
 9519      34382E5F 
 9519      73656564 
 9519      5B305D20 
 9519      3D205F52 
 9520 6f67 742E5F72 		.ascii	"t._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reen"
 9520      34382E5F 
 9520      73656564 
 9520      5B315D20 
 9520      3D205F52 
 9521 6f9a 742E5F72 		.ascii	"t._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reen"
 9521      34382E5F 
 9521      73656564 
 9521      5B325D20 
 9521      3D205F52 
 9522 6fcd 742E5F72 		.ascii	"t._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reen"
 9522      34382E5F 
 9522      6D756C74 
 9522      5B305D20 
 9522      3D205F52 
 9523 7000 742E5F72 		.ascii	"t._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reen"
 9523      34382E5F 
 9523      6D756C74 
 9523      5B315D20 
 9523      3D205F52 
 9524 7033 742E5F72 		.ascii	"t._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reen"
 9524      34382E5F 
 9524      6D756C74 
 9524      5B325D20 
 9524      3D205F52 
 9525 7066 742E5F72 		.ascii	"t._r48._add = _RAND48_ADD; (var)->_new._reent._mble"
 9525      34382E5F 
 9525      61646420 
 9525      3D205F52 
 9525      414E4434 
 9526 7099 6E5F7374 		.ascii	"n_state.__count = 0; (var)->_new._reent._mblen_stat"
 9526      6174652E 
 9526      5F5F636F 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 253


 9526      756E7420 
 9526      3D20303B 
 9527 70cc 652E5F5F 		.ascii	"e.__value.__wch = 0; (var)->_new._reent._mbtowc_sta"
 9527      76616C75 
 9527      652E5F5F 
 9527      77636820 
 9527      3D20303B 
 9528 70ff 74652E5F 		.ascii	"te.__count = 0; (var)->_new._reent._mbtowc_state.__"
 9528      5F636F75 
 9528      6E74203D 
 9528      20303B20 
 9528      28766172 
 9529 7132 76616C75 		.ascii	"value.__wch = 0; (var)->_new._reent._wctomb_state._"
 9529      652E5F5F 
 9529      77636820 
 9529      3D20303B 
 9529      20287661 
 9530 7165 5F636F75 		.ascii	"_count = 0; (var)->_new._reent._wctomb_state.__valu"
 9530      6E74203D 
 9530      20303B20 
 9530      28766172 
 9530      292D3E5F 
 9531 7198 652E5F5F 		.ascii	"e.__wch = 0; (var)->_new._reent._mbrlen_state.__cou"
 9531      77636820 
 9531      3D20303B 
 9531      20287661 
 9531      72292D3E 
 9532 71cb 6E74203D 		.ascii	"nt = 0; (var)->_new._reent._mbrlen_state.__value.__"
 9532      20303B20 
 9532      28766172 
 9532      292D3E5F 
 9532      6E65772E 
 9533 71fe 77636820 		.ascii	"wch = 0; (var)->_new._reent._mbrtowc_state.__count "
 9533      3D20303B 
 9533      20287661 
 9533      72292D3E 
 9533      5F6E6577 
 9534 7231 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbrtowc_state.__value.__wc"
 9534      20287661 
 9534      72292D3E 
 9534      5F6E6577 
 9534      2E5F7265 
 9535 7264 68203D20 		.ascii	"h = 0; (var)->_new._reent._mbsrtowcs_state.__count "
 9535      303B2028 
 9535      76617229 
 9535      2D3E5F6E 
 9535      65772E5F 
 9536 7297 3D20303B 		.ascii	"= 0; (var)->_new._reent._mbsrtowcs_state.__value.__"
 9536      20287661 
 9536      72292D3E 
 9536      5F6E6577 
 9536      2E5F7265 
 9537 72ca 77636820 		.ascii	"wch = 0; (var)->_new._reent._wcrtomb_state.__count "
 9537      3D20303B 
 9537      20287661 
 9537      72292D3E 
 9537      5F6E6577 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 254


 9538 72fd 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcrtomb_state.__value.__wc"
 9538      20287661 
 9538      72292D3E 
 9538      5F6E6577 
 9538      2E5F7265 
 9539 7330 68203D20 		.ascii	"h = 0; (var)->_new._reent._wcsrtombs_state.__count "
 9539      303B2028 
 9539      76617229 
 9539      2D3E5F6E 
 9539      65772E5F 
 9540 7363 3D20303B 		.ascii	"= 0; (var)->_new._reent._wcsrtombs_state.__value.__"
 9540      20287661 
 9540      72292D3E 
 9540      5F6E6577 
 9540      2E5F7265 
 9541 7396 77636820 		.ascii	"wch = 0; (var)->_new._reent._l64a_buf[0] = '\\0'; ("
 9541      3D20303B 
 9541      20287661 
 9541      72292D3E 
 9541      5F6E6577 
 9542 73c8 76617229 		.ascii	"var)->_new._reent._signal_buf[0] = '\\0'; (var)->_n"
 9542      2D3E5F6E 
 9542      65772E5F 
 9542      7265656E 
 9542      742E5F73 
 9543 73fa 65772E5F 		.ascii	"ew._reent._getd"
 9543      7265656E 
 9543      742E5F67 
 9543      657464
 9544 7409 6174655F 		.ascii	"ate_err = 0; (var)->_atexit = _NULL; (var)->_atexit"
 9544      65727220 
 9544      3D20303B 
 9544      20287661 
 9544      72292D3E 
 9545 743c 302E5F6E 		.ascii	"0._next = _NULL; (var)->_atexit0._ind = 0; (var)->_"
 9545      65787420 
 9545      3D205F4E 
 9545      554C4C3B 
 9545      20287661 
 9546 746f 61746578 		.ascii	"atexit0._fns[0] = _NULL; (var)->_atexit0._on_exit_a"
 9546      6974302E 
 9546      5F666E73 
 9546      5B305D20 
 9546      3D205F4E 
 9547 74a2 7267732E 		.ascii	"rgs._fntypes = 0; (var)->_atexit0._on_exit_args._fn"
 9547      5F666E74 
 9547      79706573 
 9547      203D2030 
 9547      3B202876 
 9548 74d5 61726773 		.ascii	"args[0] = _NULL; (var)->_sig_func = _NULL; (var)->_"
 9548      5B305D20 
 9548      3D205F4E 
 9548      554C4C3B 
 9548      20287661 
 9549 7508 5F73676C 		.ascii	"_sglue._next = _NULL; (var)->__sglue._niobs = 0; (v"
 9549      75652E5F 
 9549      6E657874 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 255


 9549      203D205F 
 9549      4E554C4C 
 9550 753b 6172292D 		.ascii	"ar)->__sglue._iobs = _NULL; memset(&(var)->__sf, 0,"
 9550      3E5F5F73 
 9550      676C7565 
 9550      2E5F696F 
 9550      6273203D 
 9551 756e 2073697A 		.ascii	" sizeof((var)->__sf)); }\000"
 9551      656F6628 
 9551      28766172 
 9551      292D3E5F 
 9551      5F736629 
 9552              	.LASF699:
 9553 7587 50545244 		.ascii	"PTRDIFF_MIN (-PTRDIFF_MAX - 1)\000"
 9553      4946465F 
 9553      4D494E20 
 9553      282D5054 
 9553      52444946 
 9554              	.LASF728:
 9555 75a6 50524964 		.ascii	"PRIdLEAST8 __PRI8(d)\000"
 9555      4C454153 
 9555      5438205F 
 9555      5F505249 
 9555      38286429 
 9556              	.LASF267:
 9557 75bb 5F5F4442 		.ascii	"__DBL_MANT_DIG__ 53\000"
 9557      4C5F4D41 
 9557      4E545F44 
 9557      49475F5F 
 9557      20353300 
 9558              	.LASF342:
 9559 75cf 5F5F554C 		.ascii	"__ULFRACT_IBIT__ 0\000"
 9559      46524143 
 9559      545F4942 
 9559      49545F5F 
 9559      203000
 9560              	.LASF1092:
 9561 75e2 52495349 		.ascii	"RISING 3\000"
 9561      4E472033 
 9561      00
 9562              	.LASF991:
 9563 75eb 5F4C2030 		.ascii	"_L 02\000"
 9563      3200
 9564              	.LASF925:
 9565 75f1 5F53545F 		.ascii	"_ST_INT32\000"
 9565      494E5433 
 9565      3200
 9566              	.LASF463:
 9567 75fb 5F5F4152 		.ascii	"__ARM_EABI__ 1\000"
 9567      4D5F4541 
 9567      42495F5F 
 9567      203100
 9568              	.LASF181:
 9569 760a 5F5F494E 		.ascii	"__INT_LEAST64_TYPE__ long long int\000"
 9569      545F4C45 
 9569      41535436 
 9569      345F5459 
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 256


 9569      50455F5F 
 9570              	.LASF356:
 9571 762d 5F5F5341 		.ascii	"__SACCUM_FBIT__ 7\000"
 9571      4343554D 
 9571      5F464249 
 9571      545F5F20 
 9571      3700
 9572              	.LASF672:
 9573 763f 494E545F 		.ascii	"INT_LEAST32_MAX 2147483647L\000"
 9573      4C454153 
 9573      5433325F 
 9573      4D415820 
 9573      32313437 
 9574              	.LASF730:
 9575 765b 5052496F 		.ascii	"PRIoLEAST8 __PRI8(o)\000"
 9575      4C454153 
 9575      5438205F 
 9575      5F505249 
 9575      38286F29 
 9576              		.ident	"GCC: (GNU Tools for ARM Embedded Processors) 4.7.4 20130613 (release) [ARM/embedded-4_7-br
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 257


DEFINED SYMBOLS
                            *ABS*:0000000000000000 Wire.cpp
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:63     .text._Z14I2C_IRQHandlerv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:68     .text._Z14I2C_IRQHandlerv:0000000000000000 _Z14I2C_IRQHandlerv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:292    .text._Z14I2C_IRQHandlerv:0000000000000120 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:307    .text._Z7I2CInitm:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:312    .text._Z7I2CInitm:0000000000000000 _Z7I2CInitm
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:420    .text._Z7I2CInitm:0000000000000078 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:433    .text._Z9I2CEnginev:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:438    .text._Z9I2CEnginev:0000000000000000 _Z9I2CEnginev
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:500    .text._Z9I2CEnginev:0000000000000040 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:510    .text._ZN7TwoWireC2Ev:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:515    .text._ZN7TwoWireC2Ev:0000000000000000 _ZN7TwoWireC2Ev
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:515    .text._ZN7TwoWireC2Ev:0000000000000000 _ZN7TwoWireC1Ev
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:529    .text._ZN7TwoWire5beginEv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:534    .text._ZN7TwoWire5beginEv:0000000000000000 _ZN7TwoWire5beginEv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:556    .text._ZN7TwoWire11requestFromEhhh:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:561    .text._ZN7TwoWire11requestFromEhhh:0000000000000000 _ZN7TwoWire11requestFromEhhh
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:601    .text._ZN7TwoWire11requestFromEhhh:0000000000000020 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:609    .text._ZN7TwoWire11requestFromEhh:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:614    .text._ZN7TwoWire11requestFromEhh:0000000000000000 _ZN7TwoWire11requestFromEhh
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:635    .text._ZN7TwoWire11requestFromEii:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:640    .text._ZN7TwoWire11requestFromEii:0000000000000000 _ZN7TwoWire11requestFromEii
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:665    .text._ZN7TwoWire11requestFromEiii:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:670    .text._ZN7TwoWire11requestFromEiii:0000000000000000 _ZN7TwoWire11requestFromEiii
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:696    .text._ZN7TwoWire17beginTransmissionEh:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:701    .text._ZN7TwoWire17beginTransmissionEh:0000000000000000 _ZN7TwoWire17beginTransmissionEh
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:727    .text._ZN7TwoWire17beginTransmissionEh:0000000000000014 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:734    .text._ZN7TwoWire17beginTransmissionEi:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:739    .text._ZN7TwoWire17beginTransmissionEi:0000000000000000 _ZN7TwoWire17beginTransmissionEi
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:780    .text._ZN7TwoWire17beginTransmissionEi:0000000000000014 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:787    .text._ZN7TwoWire15endTransmissionEh:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:792    .text._ZN7TwoWire15endTransmissionEh:0000000000000000 _ZN7TwoWire15endTransmissionEh
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:815    .text._ZN7TwoWire15endTransmissionEv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:820    .text._ZN7TwoWire15endTransmissionEv:0000000000000000 _ZN7TwoWire15endTransmissionEv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:847    .text._ZN7TwoWire5writeEh:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:852    .text._ZN7TwoWire5writeEh:0000000000000000 _ZN7TwoWire5writeEh
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:880    .text._ZN7TwoWire5writeEh:0000000000000014 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:886    .text._ZN7TwoWire5writeEPhj:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:891    .text._ZN7TwoWire5writeEPhj:0000000000000000 _ZN7TwoWire5writeEPhj
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:939    .text._ZN7TwoWire4readEv:0000000000000000 $t
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:944    .text._ZN7TwoWire4readEv:0000000000000000 _ZN7TwoWire4readEv
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:982    .text._ZN7TwoWire4readEv:0000000000000020 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1043   .bss.Wire:0000000000000000 Wire
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1057   .bss.WrIndex:0000000000000000 WrIndex
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1038   .bss.RdIndex:0000000000000000 RdIndex
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1031   .bss.I2CWriteLength:0000000000000000 I2CWriteLength
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1071   .bss.I2CReadIndex:0000000000000000 I2CReadIndex
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1012   .bss.I2CReadLength:0000000000000000 I2CReadLength
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1077   .bss.I2CCount:0000000000000000 I2CCount
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1083   .bss.I2CSlaveBuffer:0000000000000000 I2CSlaveBuffer
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1005   .bss.I2CMasterBuffer:0000000000000000 I2CMasterBuffer
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1024   .bss.I2CMode:0000000000000000 I2CMode
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1064   .bss.timeout:0000000000000000 timeout
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1018   .bss.I2CSlaveState:0000000000000000 I2CSlaveState
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1050   .bss.I2CMasterState:0000000000000000 I2CMasterState
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1006   .bss.I2CMasterBuffer:0000000000000000 $d
ARM GAS  /var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s 			page 258


/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1008   .bss.I2CReadLength:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1015   .bss.I2CSlaveState:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1021   .bss.I2CMode:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1027   .bss.I2CWriteLength:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1034   .bss.RdIndex:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1044   .bss.Wire:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1046   .bss.I2CMasterState:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1053   .bss.WrIndex:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1060   .bss.timeout:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1067   .bss.I2CReadIndex:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1074   .bss.I2CCount:0000000000000000 $d
/var/folders/wv/bpgj319905s5rl92drfwf9k40000gn/T//ccT6qemc.s:1084   .bss.I2CSlaveBuffer:0000000000000000 $d
                     .debug_frame:0000000000000010 $d
                           .group:0000000000000000 wm4.1.8ebf1c990d6a0cbee7a5e554ec03ca59
                           .group:0000000000000000 wm4.newlib.h.8.a9901dc52d1357e3e94003403d43f8b5
                           .group:0000000000000000 wm4.features.h.22.b72b3baab2bb2eab3661375590100b6b
                           .group:0000000000000000 wm4.config.h.193.5fb8ef056cdff92dec3dee9552839d8c
                           .group:0000000000000000 wm4._ansi.h.23.fff5fb436fa813a3c343750c1b5c0dee
                           .group:0000000000000000 wm4.stdlib.h.13.603ed7eb09a1561ab06840b7c0fcff58
                           .group:0000000000000000 wm4.stddef.h.187.40b3a084f9bc2c020a9e00b9eabe9c14
                           .group:0000000000000000 wm4._default_types.h.6.5e12cd604db8ce00b62bb2f02708eaf3
                           .group:0000000000000000 wm4.lock.h.2.9bc98482741e5e2a9450b12934a684ea
                           .group:0000000000000000 wm4.stddef.h.349.31f4c5baff3fa2689010b32028da9c47
                           .group:0000000000000000 wm4.reent.h.16.9e42f0e588b85e70b2bf6572af57ce64
                           .group:0000000000000000 wm4.alloca.h.8.dfc0c703c47ec3e69746825b17d9e66d
                           .group:0000000000000000 wm4.stdlib.h.50.f5923f1950ced340a337f4676566f65a
                           .group:0000000000000000 wm4.string.h.8.ef946ad0bc9ad5c970c365dcd1fc4b0a
                           .group:0000000000000000 wm4.stddef.h.235.d9f4f80b8c4429535175712282cda6a6
                           .group:0000000000000000 wm4.string.h.86.d5c872ff52e2712c985b588a0ef39f3c
                           .group:0000000000000000 wm4.stdint.h.10.90b695f550ca6cc3fb08fa83baf01e05
                           .group:0000000000000000 wm4.stddef.h.344.4bee28520e334d56befdb7f304761799
                           .group:0000000000000000 wm4.inttypes.h.20.54b7c434bb63171d5145327a6d429f51
                           .group:0000000000000000 wm4.stdio.h.27.f2ac352bab34f31f9f478442827b2ba6
                           .group:0000000000000000 wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6
                           .group:0000000000000000 wm4.types.h.23.0d949686bbcadd1621462d4fa1f884f9
                           .group:0000000000000000 wm4.stddef.h.40.087efe82bda91542a59914ae13ce2e85
                           .group:0000000000000000 wm4.types.h.2.e9cec8c90ab35f77d9f499e06ae02400
                           .group:0000000000000000 wm4.types.h.80.1f2c84c0d57dd52dd9936095d9ac218e
                           .group:0000000000000000 wm4.stdio.h.2.4aa87247282eca6c8f36f9de33d8df1a
                           .group:0000000000000000 wm4.stdio.h.63.dfdea6580b080784d08faace69b6ed76
                           .group:0000000000000000 wm4.ctype.h.2.c8defeb78957b878a8c8884c0f101735
                           .group:0000000000000000 wm4.Print.h.30.f0c5252e1c1c571b69cebbc87428dee1
                           .group:0000000000000000 wm4.lpc.h.1.1d3a45b5e29fdf209290f88665d1fb1e
                           .group:0000000000000000 wm4.stdarg.h.31.fa591a4b1df9e413e9f5b8097f9ae89d
                           .group:0000000000000000 wm4.printf.h.118.ab3672ee221610a07496c11f46394049
                           .group:0000000000000000 wm4.Arduino.h.7.11ae76491bba122b55a6a0794d995347

NO UNDEFINED SYMBOLS
