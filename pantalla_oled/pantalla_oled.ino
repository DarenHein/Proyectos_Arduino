
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ancho 128 
#define largo 64 
#define reseteo -1

Adafruit_SSD1306 display(ancho,largo,&Wire,reseteo); 
void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC,0x3c); 
  display.clearDisplay(); 
  display.setTextSize(2); 
  display.setTextColor(SSD1306_WHITE); 
  display.setCursor(0, 0 ); 
  display.print("que mueras");
  display.println("Axel") ;
  display.display();
  delay(1000); 

}

void loop() {
  // put your main code here, to run repeatedly:

}
