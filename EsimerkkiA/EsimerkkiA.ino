int ledPin = 3;           // LED-pinni (PWM-lähtö)
float cycleTimeMs = 3000; // Pulssin sykli

void setup()
{
}

void loop()
{
  float t = millis() / cycleTimeMs * PI;
  float value = 255 * (1 - abs(sin(t)));
  analogWrite(ledPin, value);
}
