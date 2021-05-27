const int pin = 2; 
int contador = 0; 

void setup(){
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin), fcontador, CHANGE);
}

void loop(){
}

void fcontador(){
  Serial.print("cambio de estado ");
}

