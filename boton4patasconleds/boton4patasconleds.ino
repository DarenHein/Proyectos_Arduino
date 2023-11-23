int pinBoton = 9; // pin del boton 
int recibe; // variable que recibe el dato 
int pinLed = 8 ; // pin de led 
int pinLed2 = 7; // pin de led 2 
int relax = 1000; // tiempo de espera 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinBoton,INPUT); // recibe datos 
  digitalWrite(pinBoton,HIGH); // iniciamos el boton en 1 = 5v 
  pinMode(pinLed,OUTPUT); // que se enviaran datos 
  pinMode(pinLed2,OUTPUT); // que se enviaran datos 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(pinBoton); // recie el daton de boton 
  switch(recibe){
    case 0 : // si recibe un 0 
      digitalWrite(pinLed,HIGH); // prende 
      digitalWrite(pinLed2,LOW); // apaga 
    break;
    case 1 : // si recibe 1 
      digitalWrite(pinLed2,HIGH); // prende  
      digitalWrite(pinLed,LOW); // aopaga 
    break; 
  }
}
