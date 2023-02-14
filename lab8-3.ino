// C++ code
//
const int alarm[] = {262,330,392}; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  delayMicroseconds(20);
  digitalWrite(2, HIGH);
  delayMicroseconds(20);
  digitalWrite(2, LOW);
  
  pinMode(3,INPUT); 
  double dur = pulseIn(3, HIGH); 
  double dis = (0.5 * 100 *(dur * 340 / 1000000)) + 2.1;
  //2.1은 오차보정값
  howfar(dis);
  Serial.print(dis);
  Serial.println(" cm");
  delay(1000);
}

void howfar(int x)
{
  if(x < 80)
  {
    tone(8,alarm[0],200);
    delay(50);
  }
  if((x >= 80) && (x < 160))
  {
    tone(8,alarm[1],200);
    delay(20);
  }
  if(x >= 160)
  {
    tone(8,alarm[2],200);
    delay(50);
  }
  
}