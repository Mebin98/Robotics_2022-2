// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(A0);
  Serial.println(val);
  if(val == 0) //resist min
  {
     digitalWrite(10, LOW);
  }
  else if(val == 1023)//resist max
  {
     digitalWrite(10, HIGH);
  }
}