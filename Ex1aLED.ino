#define LED_AZUL 3
#define LED_VERDE 4
#define LED_VERM 5

void setup(){
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

}

void loop(){
  
    digitalWrite(3, HIGH);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	delay(1000);
  
    digitalWrite(4, HIGH);
  	digitalWrite(3, LOW);
    digitalWrite(5, LOW);
	delay(1000);
  
    digitalWrite(5, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  	delay(1000);
}