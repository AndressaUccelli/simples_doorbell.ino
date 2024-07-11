// C++ code
//

int buzzer = 9;
int bPin = 13;
int estadoB = 0;


void setup()
{
  pinMode(bPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  
  estadoB = digitalRead(bPin);
  if (estadoB == HIGH){
	tone(buzzer, 330);
  	delay(100);
    noTone(buzzer);
    
  }	

  else{
  	noTone(buzzer);
  }	

}