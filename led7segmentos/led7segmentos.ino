// display 7 segmentos 
int led = 2 ; 
int led2 = 3 ; 
int led3 = 4 ; 
int led4 = 5 ; 
int led5 = 6 ; 
int led6 = 7 ; 
int led7 = 8 ; 
int led8 = 9 ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); 
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT); 
  pinMode(led4,OUTPUT); 
  pinMode(led5,OUTPUT); 
  pinMode(led6,OUTPUT); 
  pinMode(led7,OUTPUT); 
  pinMode(led8,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH); 
  digitalWrite(led2,HIGH); 
  digitalWrite(led3,HIGH); // parte baja del led  
  digitalWrite(led4,HIGH); // punto decimal 
  digitalWrite(led5,HIGH); // en medio 
  digitalWrite(led6,LOW); // parte alta del led 
  digitalWrite(led7,LOW); 
  digitalWrite(led8,LOW); 

}
