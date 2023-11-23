// hacer un semaforo con un potenciometro }
// 0 a 3 V verde 
// 3.1 a 4 blanco 
// 4.1 a 5 o mas rojo 
int pinVerde = 7; 
int pinBlanco = 8;
int pinRojo = 9 ; 
int relax = 500 ; 
float v ; 
float v2 ; 
int pinAnalogo = A0;  

void setup() {
  // put your setup code here, to run once:
  pinMode(pinVerde,OUTPUT); 
  pinMode(pinBlanco,OUTPUT); 
  pinMode(pinRojo,OUTPUT); 
  pinMode(pinAnalogo,INPUT); 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
v = analogRead(pinAnalogo); 
v2 = (5*v)/1023; 
if (v2 <= 3){
  digitalWrite(pinRojo,LOW); 
  digitalWrite(pinBlanco,LOW); 
  digitalWrite(pinVerde,HIGH); 
}
if(v2 > 3 && v2 <= 4  ){
  digitalWrite(pinBlanco,HIGH); 
  digitalWrite(pinVerde,LOW); 
  digitalWrite(pinRojo,LOW); 
}
if (v2 >= 5 ){
  digitalWrite(pinRojo,HIGH); 
  digitalWrite(pinVerde,LOW); 
  digitalWrite(pinBlanco,LOW); 
}

Serial.println(v2); 
delay(relax); 

}
