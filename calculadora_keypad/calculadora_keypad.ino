#include <Keypad.h>
const byte Filas =  4 ; 
const byte Columnas = 4 ; 

char keys [Filas][Columnas] {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'X','0','.','/'}
};

byte filapines [Filas] = {2,3,4,5}; 
byte Columnpines [Columnas] = {6,7,8,9}; 

Keypad teclado = Keypad(makeKeymap(keys),filapines,Columnpines,Filas,Columnas); 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  char tecla = teclado.getKey(); 

  if (tecla != NO_KEY){
    Serial.println(tecla); 
  }

}

