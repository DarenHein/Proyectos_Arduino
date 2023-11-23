// escritura digital en arduino 
int led = 9 ; 
int descanso = 500; 
int brillo = 0;
int brillo2 = 125;
int brillo3 = 255; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led,brillo); 
delay(descanso); 
analogWrite(led,brillo2); 
delay(descanso); 
analogWrite(led,brillo3); 
delay(descanso); 
}
