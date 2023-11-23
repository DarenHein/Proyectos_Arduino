int buzzerPin = 7 ; 

void setup() {
  // put your setup code here, to run once:
  // call the song function with digital pin
  pinMode(buzzerPin,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(313);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(680);
  noTone(buzzerPin);

  tone(buzzerPin, 1109);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(159);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(984);
  noTone(buzzerPin);
}