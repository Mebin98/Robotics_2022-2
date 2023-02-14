// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int resist = analogRead(A0);
  int number = resist;
  Serial.println(resist);
  digitalWrite(10, HIGH);
  delay(number);
  digitalWrite(10, LOW);
  delay(number);
}