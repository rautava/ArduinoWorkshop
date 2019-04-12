int rLed = 3;
int gLed = 5;
int bLed = 6;
int cycleTimeMs = 500;

void setup()
{
  pinMode(rLed, OUTPUT);
  pinMode(bLed, OUTPUT);
}

void loop()
{
  long t = millis() % cycleTimeMs;
  boolean isFirstHalf = (t < cycleTimeMs / 2);
  digitalWrite(rLed, isFirstHalf);
  digitalWrite(bLed, !isFirstHalf);
}
