const int ledpin=12;
const int flamepin=A3;
const int buzzerpin=8;
const int threshold=200;

int flamesensvalue=0;//initilise flamesensor reading







void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(flamepin,INPUT);
pinMode(buzzerpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
flamesensvalue=analogRead(flamepin);//read analog data from flame sensor
if (flamesensvalue<=threshold)//reading compare from flame sensor with threshold value
{
tone(buzzerpin,100);
digitalWrite(ledpin,HIGH);
delay(500);
noTone(buzzerpin);
digitalWrite(ledpin,LOW);
delay(100);
Serial.println("--------ALARM ACTIVATED------");
}

else{
  noTone(buzzerpin);
  digitalWrite(ledpin,LOW);

  Serial.println("ALARM DEACTIVATED");

}
}
