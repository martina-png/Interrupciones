const int echoPin = 6;
const int triggerPin = 3; 
float Distancia;
long Tiempo;
const int pin = 2;

void setup(){
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(pin), pir, RISING);
}

void loop(){
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  Tiempo = (pulseIn(echoPin, HIGH)/2);
  
  Distancia = float(Tiempo * 0.0343);
  Serial.print("La distancia medida es de ");
  Serial.print(Distancia);
  Serial.println("cm");
}

void pir(){
  Serial.println("SENSOR ACTIVADO");
 
}
