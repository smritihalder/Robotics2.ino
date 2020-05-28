const int ledPin=13;
const int buzzerPin=12;
const int ldrPin=A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(buzzerPin,OUTPUT);
pinMode(ldrPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrstatus=analogRead(ldrPin);//read the state of ldr value


 if(ldrstatus>=400){
  tone(buzzerPin,100);
  digitalWrite(ledPin,HIGH);

  delay(500);

  noTone(buzzerPin);
  digitalWrite(ledPin,LOW);
  delay(100);

  Serial.println("----------------ALARM ACTIVATED----------");
 }
 else{
  
  noTone(buzzerPin);
digitalWrite(ledPin,LOW);


  Serial.println("ALARM DEACTIVATED");
 }
}
