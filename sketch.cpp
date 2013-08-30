#include "Arduino.h"

#define LEDPIN  13

HardwareSerial serial;

char buf[100];
uint8_t ch;

void mainmenu();

void setup()
{
  serial.begin(9600);
  pinMode(LEDPIN, OUTPUT);
  mainmenu();
}

void loop()
{
  if(serial.available())
    {
      ch = serial.read();

      serial.print(ch);

      switch (ch)
	{
	case '1':
	  serial.println("LED ON");
	  digitalWrite(LEDPIN, HIGH);
	  break;
	case '2':
	  serial.println("LED OFF");
	  digitalWrite(LEDPIN, LOW);
	  break;
	default:
	  break;
	}
      mainmenu();
    }
  
}

void mainmenu()
{
  serial.println("Main Menu - Restrictor Plate v0.1");
  serial.println("1.  LED ON");
  serial.println("2.  LED OFF");
  serial.print("==> ");
}


