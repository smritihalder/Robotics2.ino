
const int pwm=9;
void setup() {
  // put your setup code here, to run once:
pinMode(pwm,OUTPUT);
}

void loop() {
  
analogWrite(pwm,25);
delay(100);
analogWrite(pwm,75);
delay(100);
analogWrite(pwm,100);
delay(100);
analogWrite(pwm,125);
delay(100);
analogWrite(pwm,150);
delay(100);
analogWrite(pwm,175);
delay(100);
analogWrite(pwm,200);
delay(100);
analogWrite(pwm,255);
delay(100);
}
