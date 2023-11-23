int pinled = 27 ; // solo poner el numero del pinD12 , D13 etc 

void setup() {
  // put your setup code here, to run once:
  pinMode(pinled,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinled,HIGH); 
}
