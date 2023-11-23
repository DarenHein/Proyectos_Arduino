// distintas practicas con servo motor 
#include <Servo.h> // libreria del servo 
int pinServo = 9 ; 
int ledpin = 8 ; 
int ledpin2 = 7 ;
int recibe ;  
Servo mi_servo; // intancia con la calse servo  
void setup() {
  // put your setup code here, to run once:
  mi_servo.attach(pinServo); // inciamos el pin servo 
  pinMode(ledpin,OUTPUT); 
  pinMode(ledpin2 , OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,LOW); 
  digitalWrite(ledpin2,LOW); 
  mi_servo.write(0); 
  Serial.println("Empieza el programa"); 
  for (int i = 0 ; i <= 170 ; i++){ // i tomara el lugar del angulo cada ciclo se sumara 1 
    mi_servo.write(i); 
    if (i<=170){ // si i no a llegafo a 170 se repite el bucle con el led verde encendido 
      digitalWrite(ledpin,HIGH); 
    }
    delay(300); 
    recibe = i ; 
  }
  if (recibe == 170){ // cunado acabe el buclie y i llegue a 170 acabara y se prendera el led rojo 
    digitalWrite(ledpin2,HIGH); 
    Serial.println("termina el programa"); 
  } 
  delay(1000); 
}
