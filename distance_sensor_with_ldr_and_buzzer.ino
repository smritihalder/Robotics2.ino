//define pins numbers
const int trigPin=9;
const int echoPin=10;
const int buzzerPin=11;
const int ledPin=13;
const int ldrPin=A0;
//define variables
long duration;
int distance;
int safetydistance;

void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(
buzzerPin,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(ldrPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrstatus=analogRead(ldrPin);//read the state of ldr value
digitalWrite(trigPin,OUTPUT);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);

duration=pulseIn(echoPin,HIGH);
distance=(duration/2)/28.5;
Serial.println(distance);

if((distance<=400)&&(ldrstatus<=400)) {

tone(buzzerPin,200);
digitalWrite(ledPin,HIGH);
delay(500);
noTone(buzzerPin);
digitalWrite(ledPin,LOW);
delay(100);
Serial.println("--------ALARM ACTIVATED------");
}

else{
  noTone(buzzerPin);
  digitalWrite(ledPin,LOW);

  Serial.println("ALARM DEACTIVATED");
}

}
