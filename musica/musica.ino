int buzzerPin = 9;  // Debes cambiar el número del pin según cómo tengas conectado el buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Notas musicales en Hz
  int notas[] = {261, 261, 293, 329, 261, 0, 261, 293, 329, 261, 0, 329, 349, 392, 329, 261};
  // Duración en milisegundos de cada nota
  int duraciones[] = {200, 200, 200, 400, 200, 200, 200, 400, 200, 200, 400, 200, 200, 400, 200, 600};

  for (int i = 0; i < 16; i++) {
    if (notas[i] != 0) {
      tone(buzzerPin, notas[i], duraciones[i]);
    } else {
      noTone(buzzerPin);
    }
    delay(duraciones[i] * 1.2);  // Agrega un pequeño espacio entre las notas
  }
}
