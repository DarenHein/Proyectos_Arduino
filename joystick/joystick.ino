// conectar un joystick con arduino 
// gnd = tierra 
// 5 v 
// pin eje x 
// pin eje y 
// pin buton 
int xpin = A0 ;
int ypin= A1 ; 
int recibex ; 
int recibey ; 
int recibeb ; 
int boton = 9 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(xpin,INPUT); 
  pinMode(ypin,INPUT); 
  pinMode(boton,INPUT); 
  Serial.begin(9600); 
  digitalWrite(boton,HIGH); 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibex = analogRead(xpin); 
  recibey = analogRead(ypin); 
  recibeb = digitalRead(boton); 
  Serial.print("X = ");
  Serial.print(recibex); 
  Serial.println(" ");
  Serial.print(". y = ");
  Serial.print(recibey); 
  Serial.println(" ");
  Serial.print(". boton = "); 
  Serial.println(recibeb); 
  delay(2000); 


}
