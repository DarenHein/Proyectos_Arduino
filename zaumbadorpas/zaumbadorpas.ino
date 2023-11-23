// zumbador pasivo de 3 patas 
int pinZum =  9 ; 
void setup(){
  pinMode(pinZum,OUTPUT); 

}
void loop(){
  digitalWrite(pinZum,HIGH); 
  delay(2000); 
  digitalWrite(pinZum,LOW); 
  delay(2000); 

}