// C++ code
//
const int piano[] = {262, 294, 330};
int button;

void setup()
{
  for(int i=2; i<5; i++)
  {
    pinMode(i, INPUT);
  }
}

void loop()
{
  if(button = digitalRead(2))
  {
    tone(8,piano[0],200);
    delay(50);
  }
  // 도 
  if(button = digitalRead(3))
  {
    tone(8,piano[1],200);
    delay(50);
  }
  //레
  if(button = digitalRead(4))
  {
    tone(8,piano[2],200);
    delay(50);
  }
  //미
}