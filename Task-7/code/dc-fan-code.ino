#include <LiquidCrystal.h>
int fan=13;
int sensor=A0;
float volt;
float temp;
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  pinMode(fan, OUTPUT);
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
float value=analogRead(A0);
volt=(value*(5.0/1023));
temp=(volt*100.0);              /* 10 mV =1 c                                        /* Set cursor to column 0 row 0 */
lcd.setCursor(0,1);
lcd.print(temp);
lcd.print("  c");
 if (temp>40.0)
  {
    digitalWrite(fan, HIGH);
  }
 else 
  {
    digitalWrite(fan, LOW);
  }

 
  
 
}
