#include <Servo.h>
#define dedo1 3
#define dedo2 5
#define dedo3 6
#define dedo4 9
#define dedo5 10

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
  
int fazermovimento(int angulo1, int angulo2, int angulo3, int angulo4, int angulo5){
  servo1.write(angulo1);
  servo2.write(angulo2);
  servo3.write(angulo3);
  servo4.write(angulo4);
  servo5.write(angulo5);
}

void setup()
{
  servo1.attach(dedo1);
  servo2.attach(dedo2);
  servo3.attach(dedo3);
  servo4.attach(dedo4);
  servo5.attach(dedo5);
}
void loop()
{
  //É DO ROCK
  fazermovimento(0, 0, 180, 180, 0);
  delay(5000);
  
  //"Maozinha eu nao te ensinei a ser sem educação!!
  fazermovimento(180, 180, 0, 180, 180);
  delay(5000);
}
  
