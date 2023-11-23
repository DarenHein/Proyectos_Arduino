// prender un led con una fotoresistencia 

int pinAnalogo = A0; // pin que lee lo que pase por la fotoresistencia 
int leer ; // leer el dato 
int relax = 1000; // descaso 
int pinLed = 7; // pin que prendera 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinAnalogo,INPUT); // modo lectura 
  pinMode(pinLed,OUTPUT); // modo salida de datos 
  Serial.begin(9600); // iniciamos el monitor 
}

void loop() {
  // put your main code here, to run repeatedly:
  leer = analogRead(pinAnalogo); // almacenara datos que lleguen 
  Serial.println(leer); // muestar en pantalla los datos que lleguen 
  if (leer >= 20){ // si el dato que llega es mayor a 20 prende
    digitalWrite(pinLed,HIGH); // prende el led 
  }
  if(leer < 20 ){ // si el dato que llefa es menor a 20 el led se apaga 
    digitalWrite(pinLed,LOW); // apagar led 
  }
  delay(relax); // descanso de led 

}
