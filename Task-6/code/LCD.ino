#include <LiquidCrystal.h>
int sensor=A1;
float volt;
float temp;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("POWER ON ");
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Temprature=");
float value=analogRead(A1);
volt=(value*(5.0/1023));
temp=(volt*100.0);              /* 10 mV =1 c                                        /* Set cursor to column 0 row 0 */
lcd.setCursor(0,1);
lcd.print(temp);
lcd.print("  c");
}
