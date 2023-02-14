// C++ code
//
const int array[] = {262,294,330,392,440};
void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  sol();
  la();
  sol();
  tone(8,array[2],400);
  delay(350);
  noTone(8);
  delay(700);
  
  sol();
  mi();
  tone(8,array[1],400);
  delay(350);
  noTone(8);
  delay(700);
  
  sol();
  la();
  sol();
  tone(8,array[2],400);
  delay(350);
  noTone(8);
  delay(700);
  
  tone(8,array[3],400);
  delay(350);
  noTone(8);
  delay(400);
  
  tone(8,array[2],400);
  delay(350);
  noTone(8);
  delay(400);
  
  tone(8,array[1],400);
  delay(350);
  noTone(8);
  delay(400);
  
  tone(8,array[2],400);
  delay(350);
  noTone(8);
  delay(400);
  
  tone(8,array[0],400);
  delay(350);
  noTone(8);
  delay(400);
}

void sol() // 솔솔을 위한 함수
{
  int i;
  for(i=0; i<2; i++)
  {
     tone(8,array[3],400);
     delay(250);
     noTone(8);
     delay(400);
  }
}

void la() //라라를 위한 함수
{
  int i;
  for(i=0; i<2; i++)
  {
     tone(8,array[4],400);
     delay(250);
     noTone(8);
     delay(400);
  }
}

void mi() //미미를 위한 함수
{
  int i;
  for(i=0; i<2; i++)
  {
     tone(8,array[2],400);
     delay(250);
     noTone(8);
     delay(400);
  }
}