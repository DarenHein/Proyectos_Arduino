
// prnder luces led con for 
int pinVerde = 7 ; 
int pinRojo = 8 ; 
int relax = 500 ; 

void setup(){
  pinMode(pinVerde,OUTPUT); 
  pinMode(pinRojo,OUTPUT); 
}
void loop(){

  for (int i =  0 ; i < 5 ; i ++ ){
    digitalWrite(pinVerde,HIGH);
    delay(relax);  
    digitalWrite(pinVerde,LOW); 
    delay(relax); 
  }
  for(int i = 0 ; i < 3 ; i ++ ){
    digitalWrite(pinRojo,HIGH); 
    delay(relax); 
    digitalWrite(pinRojo,LOW); 
    delay(relax); 
  }

}