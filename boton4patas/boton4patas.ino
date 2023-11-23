// boton de 4 patas en arduino
int pinBoton = 9; // pin del boton 
int recibe ; // varuabale que recibe el dato 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinBoton,INPUT); // modo recibe 
  digitalWrite(pinBoton,HIGH); // iniciamos el pin en 5 v desde el inciao para que 
  // siempre este en 1 = 5v 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(pinBoton); // suempre esrara en 1 pero al precionarlos cambiara a 0 
  Serial.println(recibe); // muestra en el monitor loq ue llega de la placa 
  delay(1000); //tiempo de retraso de 1 segundo 

}
