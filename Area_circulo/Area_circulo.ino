float num;
int relax = 500;
String mensaje = "Ingresa el radio para el área del círculo: ";
String mensaje2 = "El área del círculo es -> ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(mensaje);
  
  while (Serial.available() == 0) {
  }
  
  num = Serial.parseFloat();
  float area = 3.1416 * (num * num);
  Serial.print(mensaje2);
  Serial.println(area);
}
