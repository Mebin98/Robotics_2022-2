// C++ code
//
int buttonState;

void setup()
{
  pinMode(7, INPUT); //red
  pinMode(13, OUTPUT); //red
  pinMode(5, INPUT); //green
  pinMode(11, OUTPUT); //green
  pinMode(6, INPUT); //blue
  pinMode(12, OUTPUT); //blue
}

void loop()
{
  if(buttonState = digitalRead(7))
  {
     digitalWrite(13, HIGH);
  }
  else
  {
     digitalWrite(13, LOW);
  }
  if(buttonState = digitalRead(5))
  {
     digitalWrite(11, HIGH);
  }
  else
  {
     digitalWrite(11, LOW);
  }  
  if(buttonState = digitalRead(6))
  {
     digitalWrite(12, HIGH);
  }
  else
  {
     digitalWrite(12, LOW);
  }
}