// introducciona los servo motores 
#include <Servo.h> // incluimos la libreria Servo.h
int pinServo = 9 ; // tiene que ser un pin pwd o analogo 
int angulo = 180 ; 
Servo mi_servo ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // monitor serial 
  mi_servo.attach(pinServo); // iniciamos el servo de la libreria 
}
void loop() {
  // put your main code here, to run repeatedly:
  mi_servo.write(angulo); // hacemos que el servo se mueva en ese angulo 
}
