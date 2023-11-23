int pinSensor = 4 ; 
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinSensor,INPUT); 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(pinSensor); 
  if (recibe == 1){
    Serial.println("blanco"); 
  }
  else {
    Serial.println("negro"); 
  }
  delay(2000); 
}
