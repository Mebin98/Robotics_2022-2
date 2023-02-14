// C++ code
//
void setup()
{
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(A0);
  int temp;
  temp = map((val- 20) * 3.04,0,1023,-40,125);
  Serial.println(temp);
  delay(1000);
  if(temp > 80) 
  {
    digitalWrite(10, HIGH);
    delay(50);
    digitalWrite(10, LOW);
    delay(50);
  }
}