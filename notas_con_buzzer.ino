int buz = 10 ; 
void setup()
{
  pinMode(buz,OUTPUT); 
}

void loop()
{
  // necesitamos 3 cosas 
  // el pin 
  // la nota 
  // duracion 
  tone(buz,262,200); 
  delay(500); 	
  noTone(buz);
}
/*
notas que se peuden ocuapr en arduino 
 do -> 261
 re -> 293-66
 mi -> 329.63
 fa -> 349.23 
 sol -> 392.00
 la -> 440.00
 si -> 493.68 
 do 523.25

*/