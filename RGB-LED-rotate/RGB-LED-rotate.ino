int rLed = 3;
int gLed = 5;
int bLed = 6;
float cycleTimeMs = 6000; // Pulssin sykli

void setup()
{
}

void loop()
{
  float t = millis() / cycleTimeMs * PI;
  float phase2 = (2.0 * PI) / 3.0;
  float phase3 = (4.0 * PI) / 3.0;
  float value1 = 255 * (1 - abs(sin(t)));
  float value2 = 255 * (1 - abs(sin(t + phase2)));
  float value3 = 255 * (1 - abs(sin(t + phase3)));
  analogWrite(rLed, value1);
  analogWrite(gLed, value2);
  analogWrite(bLed, value3);
}
