#include <Servo.h>

Servo servo;

int angservo;

void setup()
{
  Serial.begin(9600);
  servo.attach(10);
  angservo = 90;
  servo.write(angservo);
}


void loop()
{
    String comando;
  	comando = Serial.readString();
   
  	int auxiliar=0;
    
  	if(comando == "hor"){
      for(auxiliar = 0; auxiliar<=180; auxiliar++){
        if(angservo + auxiliar <180){
      	servo.write(angservo + auxiliar);
        
          delay(100);}
        else{break;}
      }
    }
    
    else if(comando == "ant"){
      for(auxiliar = 0; auxiliar<=180; auxiliar++){
        if(angservo - auxiliar > 0){
        servo.write(angservo - auxiliar);
       
          delay(100); }
        else{break;}
      }
    }
  	
  else{
    angservo = 90;
    servo.write(angservo);
    delay(100);
  }
}
   
