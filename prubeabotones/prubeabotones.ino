int b1 = A0 ; 
int b2 = A1; 
int b3 = A2; 
int b4 = A3; 
int b5 = A4 ; 
int recibe ; 
int recibe2 ; 
int recibe3 ; 
int recibe4 ; 
int recibe5 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(b3,HIGH);
  digitalWrite(b4,HIGH);
  digitalWrite(b5,HIGH);
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(b1); 
  recibe2 = digitalRead(b2); 
  recibe3 = digitalRead(b3); 
  recibe4 = digitalRead(b4); 
  recibe5 = digitalRead(b5); 
  Serial.println("boton1 "); 
  Serial.println(recibe); 
  Serial.println("boton2 "); 
  Serial.println(recibe2);
  Serial.println("boton3 ");
  Serial.println(recibe3); 
  Serial.println("boton4 "); 
  Serial.println(recibe4);
  Serial.println("boton5 "); 
  Serial.println(recibe5);
  
  
  
  delay(2000); 
}
