// C++ code
//

int count = 0;
int buttonState;
void setup()
{
  Serial.begin(9600);
  pinMode(6, INPUT);
}

void loop()
{
  Serial.println(count);
  count ++;
  delay(1000);
  if(buttonState = digitalRead(6))
  {
    Serial.println(count = 0);
  }
}