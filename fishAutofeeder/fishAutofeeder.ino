#include <SoftwareSerial.h>
#include <Wire.h>
#include <Servo.h>  // library motor servo
Servo myservo;
SoftwareSerial modul_bt(3,4);
char val;
void setup()
{
  Serial.begin(9600);
  modul_bt.begin(9600);
  myservo.attach(2);
}

void loop()
{
if(modul_bt.available()) 
{
  val=modul_bt.read();
  if(val=='B')
  {
    myservo.write(90);
  } 
  if(val=='T')
  {
    myservo.write(0);
  }
}
}
