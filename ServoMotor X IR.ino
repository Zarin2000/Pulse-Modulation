#include<Servo.h>
int irpin = 7;
int irvalue;
Servo pwm;
void setup() {
pinMode(irpin, INPUT);
pwm.attach(11);  
}
void loop() {
 irvalue = digitalRead(irpin);
Serial.print("Show irvalue=");
Serial.print(irvalue);
if(irvalue==0){
  pwm.write(180);               
  delay(20); 
}
else
{
  pwm.write(0);               
  delay(20); 
}
}

