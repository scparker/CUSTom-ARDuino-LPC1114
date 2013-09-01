#include "Arduino.h"
#include "HardwareSerial.h"
#include "Wire.h"

#define LEDPIN  14

char buf[100];
char ch;

//  MPU-6050 Registers
#define MPU6050_ADDRESS          (uint8_t)0xD0
#define MPU6050_WHO_AM_I         (uint8_t)0x75
#define MPU6050_ACCEL_XOUT_H     (uint8_t)0x3B

void mainmenu();

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  pinMode(LEDPIN, OUTPUT);
  mainmenu();
}

void loop()
{

  if(Serial.available())
    {
      ch = Serial.read();

      Serial.print(ch);

      switch (ch)
	{
	case '1':
	  Serial.println("LED ON");
	  digitalWrite(LEDPIN, HIGH);
	  break;
	case '2':
	  Serial.println("LED OFF");
	  digitalWrite(LEDPIN, LOW);
	  break;
	case '3':
	  Serial.println("MPU6050 WHO_AM_I");
	  Wire.beginTransmission(MPU6050_ADDRESS);
	  Wire.requestFrom(MPU6050_WHO_AM_I,1);
	  Wire.endTransmission();
	  
	  Serial.print(Wire.read());

	  break;
	default:
	  break;
	}
      mainmenu();
    }
  
}

void mainmenu()
{
  Serial.println("Main Menu - Restrictor Plate v0.1");
  Serial.println("1.  LED ON");
  Serial.println("2.  LED OFF");
  Serial.println("3.  MPU6050 WHO_AM_I");
  Serial.print("==> ");
}


