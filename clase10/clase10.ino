int numero; 
String mensaje = "Cuantas veces deseas que prenda el led -> "; 
int relax = 500; 
int pinLed = 8; 

void setup() {
  // Inicializa la comunicación serial a 9600 baudios
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);  
}

void loop() {
  // Muestra el mensaje al usuario
  Serial.print(mensaje); 
  
  // Espera hasta que esté disponible al menos un byte en el puerto serial
  while(Serial.available() == 0) {
  }
  
  // Lee el número ingresado por el usuario
  numero = Serial.parseInt(); 
  
  // Imprime el número de veces que se prenderá el LED
  Serial.print("El led prenderá -> ");
  Serial.println(numero);
  
  for (int i = 0; i < numero; i++) {
    digitalWrite(pinLed, HIGH); 
    delay(relax); 
    digitalWrite(pinLed, LOW); 
    delay(relax); 
  }
}
