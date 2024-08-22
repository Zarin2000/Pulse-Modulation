int pwm = 11;
void setup() {
pinMode(pwm, OUTPUT);
}

void loop() {
analogWrite(pwm,64);
delay(1000); 
analogWrite(pwm,127);
delay(500); 
analogWrite(pwm,191);
delay(500); 
analogWrite(pwm,255);
delay(1000); 
analogWrite(pwm,0);
delay(500);
}
