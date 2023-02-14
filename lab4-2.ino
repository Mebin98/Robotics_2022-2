// C++ code
//
int buttonState;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop()
{
  if(buttonState = digitalRead(8))
  {
     digitalWrite(13, HIGH);
  }
  else
  {
     digitalWrite(13, LOW);
  }  
}