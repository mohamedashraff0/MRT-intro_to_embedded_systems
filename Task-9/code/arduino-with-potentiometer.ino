#include<Servo.h>
Servo motorservo;
int motor=13;
int pot=A0;
int value, angle;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
motorservo.attach(motor);
}

void loop() {
  // put your main code here, to run repeatedly:
value= analogRead(pot);
angle=map(value,0,1023,0,180);
motorservo.write(angle);
Serial.println(angle);
delay(100);

}
