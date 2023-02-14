// C++ code
//
#include <Servo.h>
Servo servo;
void setup()
{
  Serial.begin(9600);
  servo.attach(9);
}

void loop()
{
  int input = analogRead(A0);
  input = map(input,0,1023,0,180);
  Serial.println(input);
  servo.write(input);
}