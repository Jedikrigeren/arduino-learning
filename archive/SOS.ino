int redPin = 13;

void setup()
{
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop()
{
  blink(3, 100);
  blink(3, 500);
  blink(3, 100);
  delay(1000);
}

void blink(int timesBlinked, int delayMS)
{
  for (size_t i = 0; i < timesBlinked; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(delayMS);
    digitalWrite(redPin, LOW);
    delay(delayMS);
  }
}