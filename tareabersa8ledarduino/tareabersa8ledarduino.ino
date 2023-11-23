// C++ code
// versiona arduino 
int led1 = 2 ; 
int led2 = 3 ;
int led3 = 4 ; 
int led4 = 5 ; 
int led5 = 6 ; 
int led6 = 7 ; 
int led7 = 8 ; 
int led8 = 9 ; 
int boton1 = A0 ; 
int boton2 = A1; 
int boton3 = A2 ; 
int boton4  = A3 ; 
int boton5 = A4; 
int recibe1 ;
int recibe2 ; 
int recibe3 ; 
int recibe4 ; 
int recibe5 ; 
void setup()
{
  
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT); 
  pinMode(led5,OUTPUT); 
  pinMode(led6,OUTPUT); 
  pinMode(led7,OUTPUT); 
  pinMode(led8,OUTPUT); 
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT); 
  pinMode(boton3,INPUT); 
  pinMode(boton4,INPUT); 
  pinMode(boton5,INPUT); 
  digitalWrite(boton1 ,HIGH); 
  digitalWrite(boton2,HIGH); 
  digitalWrite(boton3,HIGH); 
  digitalWrite(boton4,HIGH); 
  digitalWrite(boton5,HIGH); 
  Serial.begin(9600); 
}

void loop()
{ 
  recibe1 = digitalRead(boton1); 
  recibe2 = digitalRead(boton2); 
  recibe3 = digitalRead(boton3); 
  recibe4 = digitalRead(boton4); 
  recibe5 = digitalRead(boton5); 
  Serial.println(recibe1); 
  Serial.println(recibe2); 
  Serial.println(recibe3); 
  Serial.println(recibe4); 
  Serial.println(recibe5); 
  if (recibe1 == 0 ){
    digitalWrite(led1,HIGH); 
  	digitalWrite(led2,HIGH); 
  	digitalWrite(led3,HIGH);
  	digitalWrite(led4,HIGH); 
  	digitalWrite(led5,HIGH); 
  	digitalWrite(led6,HIGH); 
  	digitalWrite(led7,HIGH); 
  	digitalWrite(led8,HIGH); 
  }
  else if (recibe2 == 0) {
    digitalWrite(led1,LOW); 
  	digitalWrite(led2,LOW); 
  	digitalWrite(led3,LOW);
  	digitalWrite(led4,LOW); 
  	digitalWrite(led5,LOW); 
  	digitalWrite(led6,LOW); 
  	digitalWrite(led7,LOW); 
  	digitalWrite(led8,LOW);
  }
  else if (recibe3 == 0){
  	digitalWrite(led8, HIGH);
  	delay(100);
  	digitalWrite(led8, LOW);
    delay(100); 
  	digitalWrite(led7, HIGH);
  	delay(100);
  	digitalWrite(led7, LOW);
    delay(100);     
  	digitalWrite(led1, HIGH);
  	delay(100);
  	digitalWrite(led1, LOW);
    delay(100); 
    digitalWrite(led2,HIGH); 
    delay(100); 
    digitalWrite(led2,LOW); 
    delay(100); 
  }
  else if (recibe4 == 0){
    digitalWrite(led1, HIGH);
    delay(100); 
    digitalWrite(led1,LOW); 
    delay(100); 
  	digitalWrite(led2, HIGH);
    delay(100); 
    digitalWrite(led2,LOW); 
    delay(100); 		
  	digitalWrite(led3, HIGH);
    delay(100); 
  	digitalWrite(led3, LOW);
    delay(100); 
  	digitalWrite(led4, HIGH);
    delay(100); 
  	digitalWrite(led4, LOW);
    delay(100); 
  	digitalWrite(led8, HIGH);
    delay(100); 
  	digitalWrite(led8, LOW);
  	delay(100);
  }
  else if (recibe5 == 0 ){
    digitalWrite(led1,HIGH); 
    digitalWrite(led2,HIGH); 
    delay(200); 
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW); 
    delay(200); 
  }
  
    
  
}