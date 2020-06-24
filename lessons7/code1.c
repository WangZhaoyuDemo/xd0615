#include<MsTimer2.h>

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
}

byte i = 0;

void loop()
{
  for(i = 0; i <= 9; i++){
  
  	digitalWrite(2,i&0x1);
 	digitalWrite(3,(i>>1)&0x1);
  	digitalWrite(4,(i>>2)&0x1);
  	digitalWrite(5,(i>>3)&0x1);
    
    delay(1000);
  }
}