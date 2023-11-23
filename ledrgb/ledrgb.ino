// led rbg de anodo comun 
// 3 tierras y un positivo 
int pin = 9 ; // red 
int pin2 = 10 ; // blue 
int pin3 = 11 ;  // verde 
// NOTA IMPORTANTE SI SON DE ANODO COMUN EL HIGH SE INVIETE POR LOW Y VEICEVERSA 

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT); 
  pinMode(pin2,OUTPUT); 
  pinMode(pin3,OUTPUT); 

}
// en anodo comun el 0 es brillo mx y 255 es minimo 

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin,0); 
  analogWrite(pin2,140); 
  analogWrite(pin3,0); 
}
