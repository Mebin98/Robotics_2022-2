// C++ code
//
int incomingByte = 0; 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   Serial.println(incomingByte);
   incomingByte ++;
   delay(1000);
}