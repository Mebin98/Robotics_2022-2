// C++ code
void setup()
{
  pinMode(11, OUTPUT); //RED
  pinMode(10, OUTPUT); //BLUE
  pinMode(9, OUTPUT); //GREEN
  Serial.begin(9600);
}

void loop()
{
  int red = analogRead(A0);
  int blue = analogRead(A1);
  int green = analogRead(A2);
  map(red,0,1023,0,255);
  map(blue,0,1023,0,255);
  map(green,0,1023,0,255);
  Serial.println(A0);
  Serial.println(A1);
  Serial.println(A2);
  digitalWrite(11, red);
  digitalWrite(10, blue);
  digitalWrite(9, green);
}