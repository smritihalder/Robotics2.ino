const int echo=11;
const int trig=10;
const int ledPin=13;
const int buzzerPin=12; 

int duration=0;
int distance=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(buzzerPin,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);

duration=pulseIn(echo,HIGH);
distance=(duration/2)/28.5;
Serial.println(distance);

if(distance<=14){

tone(buzzerPin,100);
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
