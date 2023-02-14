#include <LiquidCrystal.h>

const int rs = 9, en = 8, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2,0); // 글자를 가운데에 배치
  lcd.print("Hello World!");
}

void loop() {
}