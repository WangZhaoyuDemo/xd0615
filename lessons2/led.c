int i = 0;
void setup()
{
  for(i = 0; i < 6; i++){
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i = 0; i < 6; i++){
  	digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
  
  for(i = 5; i > -1; i--){
  	digitalWrite(i, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}