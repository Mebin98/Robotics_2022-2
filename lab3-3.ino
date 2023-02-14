// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int i;
  for(i = 0; i < 256; i++)
  {
    analogWrite(11,i);
    analogWrite(10,255 - i);
    delay(10);
    
  }
  
}