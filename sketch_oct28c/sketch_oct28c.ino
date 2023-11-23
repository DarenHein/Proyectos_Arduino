// prender motor con sencor supersonico 
int pinTri = 7 ; 
int pinEcho = 6 ;
int pinM = 9 ;  
int pinM2 = 8 ;  
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinM,OUTPUT); 
  pinMode(pinM2,OUTPUT); 
  pinMode(pinTri,OUTPUT); 
  pinMode(pinEcho,INPUT); 
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
  if(recibe >= 1300 ){
    digitalWrite(pinM,HIGH); 
    digitalWrite(pinM2,LOW);
  }
  else {
    digitalWrite(pinM,LOW); 
    digitalWrite(pinM2,LOW);
  }


  

}
