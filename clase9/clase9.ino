// lector de datos por teclado 
int num ; // variable comun 
String mensaje = "Ingresa un numero "; // mensaje en pantalla 
String mensaje2 = "tu numero es "; // mensaje dos en pantalla 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // iniciamos el motinor serial 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(mensaje); // imprimimos el primer mensaje en pantalla 
  while(Serial.available() == 0){ // esperamos que ingrese un numero esto es infinito 

  }
  num = Serial.parseInt(); // trasnfromamos la cadena en int 
  Serial.print(mensaje2); // imprimimos el segundo mensaje 
  Serial.println(num); // imprimirmos el numero que nos llego 

}
