/*
  programa que con un Sesor ultrasonico y un buzzer pasico hacemos un 
  alarma de proximidad 
  funcion : 
    al llegar a cierta distancia del sensor ultrasonico el buzzer sonara 
*/
int pinTri = 8 ; 
int pinEcho = 9 ; 
int buzzpas = 7 ; 
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinTri,OUTPUT); 
  pinMode(pinEcho,INPUT); 
  pinMode(buzzpas,OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinTri,OUTPUT); 
  delayMicroseconds(10); 
  recibe = pulseIn(pinEcho,HIGH); 
  delay(25); 
  digitalWrite(pinTri,LOW); 
  Serial.println(recibe); 
  if (recibe >= 300){
    digitalWrite(buzzpas,HIGH);
    delay(1000); 
  }
  else {
    digitalWrite(buzzpas,LOW); 
  }

}
