int led_rojo = 7;
int led_amarillo = 6; 
int led_verde = 5; 
const int pin = 2; 
int contador = 0; 

void setup(){
  pinMode (led_rojo, OUTPUT);
  pinMode (led_amarillo, OUTPUT);
  pinMode (led_verde, OUTPUT);
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin), fcontador, CHANGE);
}

void loop(){
  digitalWrite(led_rojo, HIGH); 
  delay(3000);
  digitalWrite(led_rojo, LOW);
  digitalWrite(led_amarillo, HIGH);
  delay(2000);
  digitalWrite(led_amarillo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(3000);
  digitalWrite(led_verde, LOW); 
}

void fcontador(){
  digitalWrite(led_rojo, HIGH);
  digitalWrite(led_amarillo, HIGH); 
  digitalWrite(led_verde, HIGH);
  delay(5000);
}
