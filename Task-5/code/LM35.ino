int sensor=A1;
float volt;
float temp;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float value=analogRead(A1);
volt=(value*(5.0/1023));
temp=(volt*100.0);              /* 10 mV =1 c         LM35 temprature (-60<temp<150) */
Serial.print("temprature= " );
Serial.print(temp);
Serial.println(" c");
delay(100);
}
