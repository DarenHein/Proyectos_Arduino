// while con potencimetro 
int pinAnalogo = A0; 
int pinRed = 7 ;
float v ; 
float v2 ; 
int relax = 1500; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinAnalogo,INPUT); 
  pinMode(pinRed,OUTPUT); 

}
void loop() {
  // put your main code here, to run repeatedly:
  v = analogRead(pinAnalogo); 
  v2 = (v*5)/1023; 
  Serial.println(v2);
  while (v2 < 3){
    digitalWrite(pinRed,HIGH); 
  } 
  digitalWrite(pinRed,LOW); 
  delay(relax); 
}
