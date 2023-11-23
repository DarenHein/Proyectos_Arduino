// prender led con nombre con switch con ardiuno 
int ledRojo = 9 ; 
int ledVerde= 8 ; 
int ledBlanco = 7 ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(ledRojo,OUTPUT); 
  pinMode(ledVerde,OUTPUT); 
  pinMode(ledBlanco,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Escoje una de las siguientes opciones "); 
  Serial.println("1 verde"); 
  Serial.println("2 rojo" ); 
  Serial.println("3 Blanco" );
  while(Serial.available() == 0){

  }
  int num = Serial.parseInt(); 
  switch (num){
    case 1 : 
    digitalWrite(ledVerde,HIGH); 
    digitalWrite(ledRojo,LOW); 
    digitalWrite(ledBlanco,LOW); 
    break; 
    case 2 : 
    digitalWrite(ledVerde,LOW); 
    digitalWrite(ledRojo,HIGH); 
    digitalWrite(ledBlanco,LOW); 
    break; 
    case 3 : 
    digitalWrite(ledVerde,LOW); 
    digitalWrite(ledRojo,LOW); 
    digitalWrite(ledBlanco,HIGH); 
    break; 
    default : 
    digitalWrite(ledVerde,LOW); 
    digitalWrite(ledRojo,LOW); 
    digitalWrite(ledBlanco,LOW); 
    Serial.println("Opcion invalida intenta otravez"); 
    break; 
  }
  delay (500); 
}
