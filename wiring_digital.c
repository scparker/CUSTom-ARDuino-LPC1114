/*
  wiring_digital.c - digital input and output functions
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2005-2006 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  Modified 28 September 2010 by Mark Sproul

  $Id: wiring.c 248 2007-02-03 15:36:30Z mellis $
*/

#define ARDUINO_MAIN
#include "wiring_private.h"
#include "pins_arduino.h"

void pinMode(uint8_t pin, uint8_t mode)
{
	uint32_t bit = digitalPinToBitMask(pin);
	uint32_t port = digitalPinToPort(pin);
	volatile uint32_t *reg, *out;

	if (port == NOT_A_PIN) return;

	// JWS: can I let the optimizer do this?
	reg = (uint32_t *)portModeRegister(port);
	out = (uint32_t *)portOutputRegister(port);

	if (mode == INPUT) { 
	        noInterrupts();
         	*reg &= ~bit;
		*out &= ~bit;
		interrupts();
	} else if (mode == INPUT_PULLUP) {
	        noInterrupts();
		*reg &= ~bit;
		*out |= bit;
		interrupts();
	} else {
	        noInterrupts();
		*reg |= bit;
		interrupts();
	}
}

static void turnOffPWM(uint8_t timer)
{
  //  Placeholder
}

void digitalWrite(uint8_t pin, uint8_t val)
{
	uint32_t timer = digitalPinToTimer(pin);
	uint32_t bit = digitalPinToBitMask(pin);
	uint32_t port = digitalPinToPort(pin);
	uint32_t *out;

	if (port == NOT_A_PIN) return;

	// If the pin that support PWM output, we need to turn it off
	// before doing a digital write.
	if (timer != NOT_ON_TIMER) turnOffPWM(timer);

	out = (uint32_t *)portOutputRegister(port);

	noInterrupts();

	if (val == LOW) {
		*out &= ~bit;
	} else {
		*out |= bit;
	}

	interrupts();
}

int digitalRead(uint8_t pin)
{
	uint32_t timer = digitalPinToTimer(pin);
	uint32_t bit = digitalPinToBitMask(pin);
	uint32_t port = digitalPinToPort(pin);

	if (port == NOT_A_PIN) return LOW;

	// If the pin that support PWM output, we need to turn it off
	// before getting a digital reading.
	if (timer != NOT_ON_TIMER) turnOffPWM(timer);

	if (*(uint32_t *)portInputRegister(port) & bit) return HIGH;
	return LOW;
}
