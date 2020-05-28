 int a=6;  //for displaying segment "a"
 int b=5;  //for displaying segment "b"
 int c=10;  //for displaying segment "c"
 int d=9;  //for displaying segment "d"
 int e=8;  //for displaying segment "e"
 int f=7;  //for displaying segment "f"
 int g=4;  //for displaying segment "g"





void setup() {
  // put your setup code here, to run once:

pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);

}

void loop() {



digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for one

digitalWrite(b,LOW);digitalWrite(c,LOW);

delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for two
digitalWrite(a,LOW);digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(e,LOW);digitalWrite(d,LOW);

delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for three
digitalWrite(a,LOW);digitalWrite(b,LOW);
digitalWrite(g,LOW);digitalWrite(c,LOW);
digitalWrite(d,LOW);

delay(1000);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for four
digitalWrite(f,LOW);digitalWrite(g,LOW);
digitalWrite(b,LOW);digitalWrite(c,LOW);


delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for five
digitalWrite(a,LOW);digitalWrite(f,LOW);
digitalWrite(g,LOW);digitalWrite(c,LOW);
digitalWrite(d,LOW);

delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for six
digitalWrite(a,LOW);digitalWrite(f,LOW);
digitalWrite(e,LOW);digitalWrite(d,LOW);
digitalWrite(c,LOW);digitalWrite(g,LOW);

delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for seven
digitalWrite(a,LOW);digitalWrite(b,LOW);
digitalWrite(c,LOW);


delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for eight
digitalWrite(a,LOW);digitalWrite(b,LOW);
digitalWrite(c,LOW);digitalWrite(d,LOW);
digitalWrite(e,LOW);digitalWrite(f,LOW);digitalWrite(g,LOW);

delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//for nine
digitalWrite(f,LOW);digitalWrite(a,LOW);
digitalWrite(b,LOW);digitalWrite(g,LOW);
digitalWrite(c,LOW);digitalWrite(d,LOW);

delay(1000);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

//for zero

digitalWrite(a,LOW);digitalWrite(b,LOW);
digitalWrite(c,LOW);digitalWrite(d,LOW);
digitalWrite(e,LOW);digitalWrite(f,LOW);




}
