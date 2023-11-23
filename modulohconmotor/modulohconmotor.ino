// controlar motor con arduino 
// con modulo h
// esta sencillo facil de conectar pero neceistas el modulo h para que funcione  
int pin1 = 9 ; 
int pin2 = 8 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT); 
  pinMode(pin2,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  // prender un motor 
  digitalWrite(pin1,HIGH); // UNO VA A 5 V 
  digitalWrite(pin2,LOW); // EL OTRO A GND 
  // NUNCA PONER LAS DOS EN HIGH NUNCAAAAAAAAA
// en low si 
}
