// display 7 segmentos 
// cuenta regresiva de de 0 a 9 
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
 /*
  digitalWrite(led,HIGH); 
  digitalWrite(led2,HIGH); 
  digitalWrite(led3,HIGH); // parte baja del led  
  digitalWrite(led4,HIGH); // punto decimal 
  digitalWrite(led5,HIGH); // en medio 
  digitalWrite(led6,LOW); // parte alta del led 
  digitalWrite(led7,LOW); 
  digitalWrite(led8,LOW); 
 */
 //0
 digitalWrite(led,LOW); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5, LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,HIGH); 
  delay(1000); 
  // apagafo 
  digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000);
// 1   
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH);
 delay(1000); 
 // apagado 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 //2 
 digitalWrite(led,LOW); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,LOW); 
 delay(1000); 
 // pausa 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 //3 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); // no 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,LOW); 
 delay(1000); 
 // PAUSA 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
// 4 
digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,LOW);
 delay(1000); 
 // psua 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 //5
  digitalWrite(led,HIGH); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,LOW);
 delay(1000); 
 // psua 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 // 6 
  digitalWrite(led,LOW); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,LOW);
 delay(1000); 
 // psua 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 // 7 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,HIGH);
 delay(1000); 
 // apagado 
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000); 
 // 8 
 digitalWrite(led,LOW); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5, LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,LOW); 
  delay(1000); 
  // apagafo 
  digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000);
 // 9
 digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,LOW); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,LOW); 
 digitalWrite(led6,LOW); 
 digitalWrite(led7,LOW); 
 digitalWrite(led8,LOW);
 
  delay(1000); 
  // apagafo 
  digitalWrite(led,HIGH); 
 digitalWrite(led2,HIGH); 
 digitalWrite(led3,HIGH); 
 digitalWrite(led4,HIGH); 
 digitalWrite(led5,HIGH); 
 digitalWrite(led6,HIGH); 
 digitalWrite(led7,HIGH); 
 digitalWrite(led8,HIGH); 
 delay(1000);


}
