// C++ code
//
#include <Servo.h>
int pinTri = 9 ; 
int pinEcho = 8 ; 
int recibe ; 
Servo mi_servo; 
int pinLed = 7 ; // verde 
int pinLed2 = 6 ; // rojo 
int pinServo = 10; 

void setup()
{
  pinMode(pinTri,OUTPUT); 
  pinMode(pinEcho,INPUT); 
  Serial.begin(9600); 
  mi_servo.attach(pinServo) ; 
  pinMode(pinLed,OUTPUT); 
  pinMode(pinLed2,OUTPUT); 
 
}

void loop()
{
  //mi_servo.write(0); 
  digitalWrite(pinTri,HIGH);
  delayMicroseconds(10); 
  recibe = pulseIn(pinEcho,HIGH); 
  delay(25); 
  digitalWrite(pinTri,LOW); 
  Serial.println(recibe); 
  if (recibe >= 1000){
    mi_servo.write(180); 
    digitalWrite(pinLed,HIGH); 
    digitalWrite(pinLed2,LOW); 
  }
  else if (recibe < 500){
    mi_servo.write(90); 
    digitalWrite(pinLed,LOW); 
    digitalWrite(pinLed2,HIGH); 
  }
  delay(1000); 
}