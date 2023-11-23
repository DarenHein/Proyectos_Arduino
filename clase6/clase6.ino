int analogpin = A0; // pin de lectura analogico 
int descanso = 500; 
float v ; 
float v2; 
void setup() {
  // put your setup code here, to run once:
  pinMode(analogpin,INPUT);  // ocuapamos input para la entreada de datos 
  Serial.begin(9600); // activamos el monitor que muestra lso datos 

}

void loop() {
  // put your main code here, to run repeatedly:
  v = analogRead(analogpin); // almacenamos lo que entre en una variable 
  v2 = (5*v)/1023; // formula para que salga en volts y no de 0 a 1023 
  Serial.println(v2);  // mostrar en pantalla 
  delay(descanso); // descasno que no salgan tan rapido los datos 

}
