const int led = 3; 
const int pin = 2;
int contador = 0; 
bool estado=false;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin), fcontador, CHANGE);
}

void loop(){

}

void fcontador(){
  if(estado==false)
  {
    estado=true;
  }
  else{
    estado=false;
  }
  digitalWrite(led, estado);
}
