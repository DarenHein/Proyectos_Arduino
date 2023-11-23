// programa que al presionar un boton prende un led y mueve a 90 grados el servo de 0 a 90 
#include <Servo.h>
int pinServo = 9 ; 
int ledverde = 7 ; 
int ledrojo = 6 ; 
Servo mi_servo ;
int pinboton = 10; 
int recibe; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  mi_servo.attach(pinServo); 
  pinMode(pinboton,INPUT); 
  pinMode(ledverde, OUTPUT); 
  pinMode(ledrojo, OUTPUT); 
  digitalWrite(pinboton,HIGH); 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(pinboton); 
  if(recibe == 1){
    digitalWrite(ledrojo,HIGH); 
    digitalWrite(ledverde,LOW); 
    mi_servo.write(0);
  }
  else if (recibe == 0 ){
    digitalWrite(ledrojo,LOW); 
    digitalWrite(ledverde,HIGH); 
    mi_servo.write(90);
  }

}
