// sensor ultrasonico programacion basica arduino 
int pintri = 12 ; 
int pinecho = 11 ; 
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pintri,OUTPUT); // el que dispara el sonido 
  pinMode(pinecho,INPUT); // el que recibe el sonido 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pintri,HIGH); // disparamos el sonido 
  delayMicroseconds(10); // abrimos por una millonesima el sensor apra disparar 
  recibe = pulseIn(pinecho,HIGH); // este es el que recibe el sonido y lo almacena en una variable 
  delay(25); // espreamos 
  digitalWrite(pintri,LOW); // apagamos el gatillo de disparo  
  Serial.println(recibe); // imprimimos lo que recibimos 
}
