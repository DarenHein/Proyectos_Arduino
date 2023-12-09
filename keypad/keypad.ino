
#include <Keypad.h> // utilizamos la libreria 

const byte ROWS = 4; // filas 
const byte COLS = 4; // columnas 

char keys[ROWS][COLS] = { // definir los botones 
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; // definimos los pines de las filas 
byte colPins[COLS] = {6, 7, 8, 9}; // definimos los pines de las columnas 

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();

  if (key != NO_KEY) {
    // Se ha pulsado una tecla
    Serial.println(key);
  }
}
