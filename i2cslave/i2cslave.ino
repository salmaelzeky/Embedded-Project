#include <Wire.h>

void setup()
{
  //Serial.begin(9600);
  Wire.begin(); // join i2c bus (address optional for master)
  //Serial.println("master setup");
}

byte x = 0;

void loop()
{
  Wire.beginTransmission(21); // transmit to device #4
  Wire.write("x is ");        // sends five bytes
  Wire.write(x);              // sends one byte 
  Wire.endTransmission();    // stop transmitting
  //Serial.println(x);
  x++;
  delay(500);
}
