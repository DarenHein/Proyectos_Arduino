// ciclo while eb arduino 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0 ; 
  while(i<10){ // el ciclo acabara hasta que i sea mayor a 10 
    Serial.println(i); 
    i = i + 1 ; 
  }

}
