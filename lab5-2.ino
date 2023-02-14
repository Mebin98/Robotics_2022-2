// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(A0);
  int buttonState = digitalRead(8);
  val = map(val,0,1023,0,509);
  Serial.println(val);
  analogWrite(10,val);
  delay(100);
  while(buttonState = digitalRead(8))
  {
     digitalWrite(10, LOW);
  }
}