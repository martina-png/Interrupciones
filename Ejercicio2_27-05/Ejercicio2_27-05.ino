unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;
int pin = 2;

void setup() {
Serial.begin(9600);
attachInterrupt(digitalPinToInterrupt(pin), pulsador, CHANGE);

}
void loop() {

}

void pulsador() {
tiempo1 = millis();
if ((tiempo1 - tiempo2) > 2000)
{
tiempo2 = tiempo1;
Serial.println("Interrupcion Activada");
}
}
