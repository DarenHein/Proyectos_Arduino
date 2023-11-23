// mover un servo motor con una fotoresistencia 
#include <Servo.h>
Servo mi_servo; 
int pinSer = 9;
int pinAnalogo = A0; 
int recibe ; 
int angulo; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // iniciamos monitor serial 
  pinMode(pinAnalogo,INPUT); // activmaos el pin analogo 
  mi_servo.attach(pinSer);// activamos el pin servo 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = analogRead(pinAnalogo); // revibe el dato del pin analogo 
  Serial.println(recibe); 
  angulo = (180/8)*(recibe-13);
  mi_servo.write(angulo); 
  delay(500); 

}
