// dados para LCD:
// lcd.setCursor(0, 0); --> coloca o cursor na (coluna 0, linha 0)

#include <LiquidCrystal.h>
#define IR 9
#define led 10

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
  
void setup()
{ 
  Serial.begin(9600);
  lcd.begin(16, 2); //inicia lcd
  pinMode(led, OUTPUT);
  pinMode(IR, INPUT);
  lcd.setCursor(0, 0);
}

void loop()
{ 
  bool sinal;
  sinal = digitalRead(IR);
  
  if(sinal == 0){
  
    lcd.print("Objeto nao");
    lcd.setCursor(0,1);
    lcd.print("detectado         ");
   
    digitalWrite(led, LOW);
  }
  else if(sinal == 1){

    lcd.print("Objeto");
    lcd.setCursor(0,1);  
    lcd.print("detectado       ");
    
    digitalWrite(led, HIGH);
  }
  
} 