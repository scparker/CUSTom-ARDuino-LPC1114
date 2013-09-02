#include "Arduino.h"
#include "HardwareSerial.h"
#include "Wire.h"
#include <stdint.h>

#define LEDPIN  14

char buf[100];
char ch;

double float_test = 654321.123456;
uint8_t temp_l, temp_h;
int16_t temp16;
double  tempd;
double  tempf;

//  MPU-6050 Registers
#define MPU6050_ADDRESS          (uint8_t)0xD0
#define MPU6050_I2C_ADDRESS      MPU6050_ADDRESS
#define MPU6050_WHO_AM_I         (uint8_t)0x75

#define MPU6050_PWR_MGMT_1         0x6B   // R/W

#define MPU6050_ACCEL_XOUT_H     (uint8_t)0x3B
#define MPU6050_ACCEL_XOUT_L     (uint8_t)0x3C

#define MPU6050_TEMP_H           (uint8_t)0x41
#define MPU6050_TEMP_L           (uint8_t)0x42

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

      Serial.println(ch);

      switch (ch)
	{
	case '1':
	  Serial.println("LED ON");
	  digitalWrite(LEDPIN, HIGH);
	  Serial.println(float_test, 6);
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
	  Serial.print("MPU6050 WHO_AM_I: 0x");
	  Serial.println(Wire.read(), HEX);
	  break;
	case '4':
	  Serial.println("Clear sleep");
	  Wire.beginTransmission(MPU6050_ADDRESS);
	  Wire.write(MPU6050_PWR_MGMT_1);
	  Wire.write(0);
	  Wire.endTransmission();
	  break;
	case '5':
	  Serial.println("MPU6050 X-axis");
	  Wire.beginTransmission(MPU6050_ADDRESS);
	  Wire.requestFrom(MPU6050_ACCEL_XOUT_H,2);
	  Wire.endTransmission();
	  Serial.print("MPU6050 X axis: 0x");
	  Serial.println((int32_t)((Wire.read()) + (Wire.read()<<8)), HEX);
	  break;
	case '6':
	  Serial.println("MPU6050 Temp");
	  Wire.beginTransmission(MPU6050_ADDRESS);
	  Wire.requestFrom(MPU6050_TEMP_H,2);
	  Wire.endTransmission();
	  temp_l = Wire.read();
	  temp_h = Wire.read();
	  //Serial.print("MPU6050 temp_l: ");
	  //Serial.println(temp_l, HEX);
	  //Serial.print("MPU6050 temp_h: ");
	  //Serial.println(temp_h, HEX);
	  temp16 = (temp_h<<8) + temp_l;
	  //Serial.print("MPU6050 temp16: ");
	  //Serial.println(temp16, DEC);
	  tempd = (temp16 / 340.0) + 36.53;
	  //Serial.print("MPU6050 temp (C): ");
	  //Serial.println(tempd);
	  tempf = (tempd)*(9.0/5.0) + 32.0;
	  Serial.print("MPU6050 temp (F): ");
	  Serial.println(tempf);
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
  Serial.println("4.  Clear sleep");
  Serial.println("5.  Read X");
  Serial.print("==> ");
}
