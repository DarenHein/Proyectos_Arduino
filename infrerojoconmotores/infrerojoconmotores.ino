// prueba de sensor con motores 
// EN RESUMEN 
/*
CUANDOE EL SENSOR ESTE EN HIGH (NEGRO) PRENDERA LOS MOTORES SI ESTE LLEGA A ESTAR EN LOW (BLANCO)
SE APAGARA 
ESTO LO OUCPARE EN EL ROBOT PARA QUE CUNADO DETECT SALIDA DEL RING REGRESE A SU LUGAR 
*/
int sensor = 4 ; 
int motor1 = 5 ; 
int motor2 = 6 ; 
int motor3 = 7 ;  
int motor4 = 8 ;  
int recibe ; 
void setup() {
  Serial.begin(9600); 
  pinMode(sensor,INPUT); 
  pinMode(motor1,OUTPUT); 
  pinMode(motor2,OUTPUT); 
  pinMode(motor3,OUTPUT); 
  pinMode(motor4,OUTPUT); 
}

void loop() {
  recibe = digitalRead(sensor); 
  if (recibe == HIGH){
    digitalWrite(motor1,HIGH); 
    digitalWrite(motor2,LOW); 
    digitalWrite(motor3,HIGH); 
    digitalWrite(motor4,LOW); 
  }
  else {
    digitalWrite(motor1,LOW); 
    digitalWrite(motor2,LOW); 
    digitalWrite(motor3,LOW); 
    digitalWrite(motor4,LOW);
  }
}
