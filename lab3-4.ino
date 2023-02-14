// C++ code
//
int red = 9;
int green = 10;
int blue = 11;

void setup()
{
  pinMode(9,OUTPUT); 
  pinMode(10,OUTPUT); 
  pinMode(11,OUTPUT); 
}

void loop()
{
  RGB(255, 0, 0); 
  delay(1000);
  RGB(0, 255, 0); 
  delay(1000);
  RGB(0, 0, 255); 
  delay(1000);
  RGB(255, 255, 125); 
  delay(1000);
  RGB(0, 255, 255); 
  delay(1000);
  RGB(255, 0, 255); 
  delay(1000);
  RGB(255, 255, 0); 
  delay(1000);
  RGB(255, 255, 255); 
  delay(1000);
}

void RGB(int red_value,int green_value,int blue_value)
{
  analogWrite(red,red_value);
  analogWrite(green,green_value);
  analogWrite(blue,blue_value);
}