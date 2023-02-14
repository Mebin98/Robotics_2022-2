// C++ code
#include <Servo.h>
Servo servo;
// power to 5v
// ground to gnd
// signal to pin num
int angle = 0;

void setup()
{
  servo.attach(9);
}

void loop()
{
  for(angle = 0; angle < 180; angle++)
  {
    servo.write(angle);
    delay(20);
  }
  
  for(angle = 180; angle > 0; angle--)
  {
    servo.write(angle);
    delay(20);
  }
}