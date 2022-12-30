// https://www.youtube.com/watch?v=rTuKKVcYeMg
int redPin = 10;

void setup()
{
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop()
{
  blink(1, 1000);
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