#include <stdint.h>

//  BEGIN Arduino:pins_arduino.h

#define NUM_DIGITAL_PINS            20
#define NUM_ANALOG_INPUTS           6
#define analogInputToDigitalPin(p)  ((p < 6) ? (p) + 14 : -1)
#define digitalPinHasPWM(p)         ((p) == 3 || (p) == 4 || (p) == 9 || (p) == 10 || (p) == 11)

static const uint8_t SS   = 5;
static const uint8_t MOSI = 9;
static const uint8_t MISO = 10;
static const uint8_t SCK  = 11;

static const uint8_t SDA = 7;
static const uint8_t SCL = 13;
static const uint8_t LED_BUILTIN = 13;

static const uint8_t A0 = 15;
static const uint8_t A1 = 16;
static const uint8_t A2 = 17;
static const uint8_t A3 = 18;
static const uint8_t A4 = 19;
static const uint8_t A5 = 20;
static const uint8_t A6 = 21;
static const uint8_t A7 = 21;

// these arrays map port names (e.g. port B) to the
// appropriate addresses for various functions (e.g. reading
// and writing)
const uint32_t port_to_mode_PGM[] = {
	NOT_A_PORT,
	(uint32_t) &GPIO0DIR,
	(uint32_t) &GPIO1DIR,
	NOT_A_PORT,
	NOT_A_PORT,
};

const uint32_t port_to_output_PGM[] = {
	NOT_A_PORT,
	(uint32_t) &GPIO0DATA,
	(uint32_t) &GPIO1DATA,
	NOT_A_PORT,
	NOT_A_PORT,
};

const uint32_t port_to_input_PGM[] = {
	NOT_A_PORT,
	(uint32_t) &GPIO0DATA,
	(uint32_t) &GPIO1DATA,
	NOT_A_PORT,
	NOT_A_PORT,
};

const uint8_t digital_pin_to_port_PGM[] = {
	PB, /* 0 */
	PB,
	PB,
	PB,
	PA,
	PA,
	PA,
	PA,
	PA, /* 8 */
	PA,
	PA,
	PA,
	PA,
	PB,
	PA, /* 14 */
	PB,
	PB,
	PB,
	PB,
	PB,
};

const uint16_t digital_pin_to_bit_mask_PGM[] = {
	_BV(6), /* 0, port D */
	_BV(7),
	_BV(8),
	_BV(9),
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(7), /* 8, port B */
	_BV(8),
	_BV(9),
	_BV(10),
	_BV(5),
	_BV(5),
	_BV(11), /* 14, port C */
	_BV(0),
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
};

const uint8_t digital_pin_to_timer_PGM[] = {
	NOT_ON_TIMER, /* 0 - port D */
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER, /* 8 - port B */
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER, /* 14 - port C */
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	NOT_ON_TIMER,
};

//  END Arduino:pins_arduino.h
