int redPin = 13;
int greenPin = 12;
int bluePin = 11;

void setup()
{
  // put your setup code here, to run once:

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{

  // red loop
  int countRed = 5;
  for (size_t i = 0; i < countRed; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);
    delay(500);
  }
  // green loop
  int countGreen = 10;
  for (size_t i = 0; i < countGreen; i++)
  {
    digitalWrite(greenPin, HIGH);
    delay(500);
    digitalWrite(greenPin, LOW);
    delay(500);
  }
  // blue loop
  int countBlue = 15;
  for (size_t i = 0; i < countBlue; i++)
  {
    digitalWrite(bluePin, HIGH);
    delay(500);
    digitalWrite(bluePin, LOW);
    delay(500);
  }
}