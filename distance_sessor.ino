const int echo = 13;
const int trig = 12;
const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;

int duration = 0;
int distance = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) / 28.5;
  Serial.println(distance);

  if(distance<=7)
  {digitalWrite(LED1,HIGH);
}
else
{
  digitalWrite(LED1,LOW);
}
if(distance<=14)
{
  digitalWrite(LED2,HIGH);
}
else
{
  digitalWrite(LED2,LOW);
}
if(distance<=21)
{
  digitalWrite(LED3,HIGH);
}
else
{
  digitalWrite(LED3,LOW);
}
if(distance<=28)
{
  digitalWrite(LED4,HIGH);
}
else
{digitalWrite(LED4,LOW);

}
  
}
