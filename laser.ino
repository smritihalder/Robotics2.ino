
int Laser = 4;   

void setup()

{
Serial.begin(9600); 
pinMode (Laser,OUTPUT); 

}

void loop() 
{
  digitalWrite(Laser,HIGH);  
           
  Serial.print("Laser on  ");  
                                                  
  Serial.println();                                                               
    delay(8000);                                                              
  digitalWrite(Laser,LOW);                                                   
                   
  Serial.print("Laser OFF  ");          
                                                      
  Serial.println();                                                             
    delay(8000);                                                             
}
