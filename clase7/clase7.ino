int pin = A0; 
float v ; 
float v2 ; 
int relax = 1000; 

void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT); 
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  v = analogRead(pin); 
  v2 = (5*v)/1023; 
  Serial.println(v2); 
  delay(relax); 

}
