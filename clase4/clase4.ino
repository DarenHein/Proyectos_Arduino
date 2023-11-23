// programa que da 4 leds en lenguaje binario de 4 bits 
int pin1 = 5; 
int pin2 = 6; 
int pin3 = 7; 
int pin4 = 8; 
int descanso = 500; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,LOW); //0
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,LOW); //1
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,LOW); //10
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,LOW); //11
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,HIGH); //100
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,HIGH); //101
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,HIGH); //110
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,HIGH); //111
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,LOW); //1000
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,LOW); //1001
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,LOW); //1010
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,LOW); //1011
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,HIGH); //1100
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,HIGH); //1101
  digitalWrite(pin3,LOW); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,HIGH); //1110
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,LOW); 
  delay(descanso); 
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,HIGH); //1111
  digitalWrite(pin3,HIGH); 
  digitalWrite(pin4,HIGH); 
  delay(descanso); 
}
