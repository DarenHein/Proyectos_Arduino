// sensor infrarojo 
int sensor = 4 ; 
int recibe ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(sensor,INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  recibe = digitalRead(sensor); 
  if (recibe == HIGH){
    Serial.println(" "); 
  }
  else {
    Serial.println("A salido de la linea negra"); 

  }
  delay(100); 
}
