int rLed = 3;
int gLed = 5;
int bLed = 6;
int cycleTimeMs = 500; // Pulssin sykli
int halfCycleTimeMs = cycleTimeMs / 2;

void setup()
{
  pinMode(rLed, OUTPUT);
  pinMode(bLed, OUTPUT);
}

void loop()
{
  long t = millis();
  boolean isFirstHalf = (t % cycleTimeMs < halfCycleTimeMs);
  digitalWrite(rLed, isFirstHalf);
  digitalWrite(bLed, !isFirstHalf);
}
