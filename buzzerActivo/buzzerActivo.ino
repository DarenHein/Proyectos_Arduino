// buzzer activo uso con pin digital 
int buzzer = 4 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer,HIGH); 
}
