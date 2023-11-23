int pinLed = 7 ; 
int pinAnalogo = A0; 
int relax = 1000; 
float v ; 
float v2 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed,OUTPUT); 
  pinMode(pinAnalogo,INPUT); 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  v = analogRead(pinAnalogo); 
  v2 = (5*v)/1023; 
  Serial.println(v2); 
  if (v2 >= 5){
    digitalWrite(pinLed,HIGH); 
    Serial.println("Supera o es igual a los 5 voltios");
  }
  else {
    digitalWrite(pinLed,LOW); 
  }
  delay(relax); 

}
