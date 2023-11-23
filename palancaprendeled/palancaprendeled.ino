// prender 4 led con joystick 
int pinx = A0 ; 
int piny = A1 ; 
int pinb = 11 ; 
int recibex ; 
int recibey ; 
int recibeb ; 
int led1 = 9 ; 
int led2 = 8 ; 
int led3 = 7 ; 
int led4 = 6 ; 
int relax = 1000; 
void setup() {
  // put your setup code here, to run once:
  pinMode(pinx,INPUT); 
  pinMode(piny, INPUT); 
  pinMode(pinb,INPUT); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  digitalWrite(pinb,1); 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  recibex = analogRead(pinx); 
  recibey = analogRead(piny); 
  recibeb = analogRead(pinb); 
  Serial.println(recibex);
  Serial.println(recibey);
  Serial.println(recibeb);
  if (recibex == 0 ){
    digitalWrite(led1,HIGH); 
    digitalWrite(led2,LOW); 
    digitalWrite(led3,LOW); 
    digitalWrite(led4,LOW); 
  }
  else if (recibex == 1023){
    digitalWrite(led1,LOW); 
    digitalWrite(led2,HIGH); 
    digitalWrite(led3,LOW); 
    digitalWrite(led4,LOW); 
  }
  else if (recibey == 0 ){
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW); 
    digitalWrite(led3,HIGH); 
    digitalWrite(led4,LOW); 
  }
  else if (recibey == 1023){
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW); 
    digitalWrite(led3,LOW); 
    digitalWrite(led4,HIGH); 
  }
  else if (recibeb == 0){
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW); 
    digitalWrite(led3,LOW); 
    digitalWrite(led4,LOW); 
  }

}
