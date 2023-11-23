// prender un led con esp32 
// es practicamnete lo mismo que con un arduino uno 
int led = 2 ; // es el led d2 que tambien tiene un led integrado 

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); // inciamos el pin de froma salida de datos 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH); // prender led 
  delay(1000); // se mantendra prendido 1 seg 
  digitalWrite(led,LOW); // apagar led 
  delay(1000); // se apagara ´por 1 seg

}
