#include <Servo.h>
Servo myservo;

const int pin = 2;

int pos = 1;
int valor = 1;

void setup(){
 attachInterrupt(digitalPinToInterrupt(pin),boton,RISING);
 myservo.attach(11);
}

void loop(){
  pos = pos + valor;
  if(pos > 180 || pos < 0){
   valor = valor * -1; 
  }
  myservo.write(pos);
  delay(20);
}

void boton(){
  valor = valor * -1;
}
