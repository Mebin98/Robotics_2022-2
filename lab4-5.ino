// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  int number = Serial.parseInt();
  int i;
  for(i=0; i<number; i++)
  {
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    delay(300);
  }
}