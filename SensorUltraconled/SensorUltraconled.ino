// practica con sensor ultrasonico y dos led 
// NOTA SIRVE PARA EL FINAL DE ETICA EL HDPM
int ledRojo = 9 ;
int ledVerde = 8 ; 
int gatillo = 12 ; 
int echo = 11 ; 
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledRojo,OUTPUT); 
  pinMode(ledVerde,OUTPUT); 
  pinMode(gatillo,OUTPUT); 
  pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gatillo,HIGH); 
  delayMicroseconds(10);
  recibe = pulseIn(echo,HIGH); 
  delay (25); 
  digitalWrite(gatillo,LOW);
  Serial.println(recibe); 
  if (recibe <= 3000){
    digitalWrite(ledRojo,LOW); 
    digitalWrite(ledVerde,HIGH); 
  }
  if (recibe >= 2000) {
    digitalWrite(ledVerde,LOW); 
    digitalWrite(ledRojo,HIGH); 
  }
  
}
