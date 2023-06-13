#define LED_AZUL 3
#define LED_VERDE 4
#define LED_VERM 5
#define analogPIN A5
void setup(){
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

}

void loop(){
  int val = analogRead(A5);
  val = map(val, 20, 358, -40, 125);
  
  if(val<10){
    digitalWrite(3, HIGH);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);}
  
  if((val>=10) && (val<30)){
    digitalWrite(4, HIGH);
  	digitalWrite(3, LOW);
    digitalWrite(5, LOW);}
  
  if(val>=30){
    digitalWrite(5, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);}
}