int redPin = 13;
int bluePin = 12;
int greenPin = 11;
int whitePin = 10;

int waitTime = 1000;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(whitePin, OUTPUT);
}

void loop()
{
  // Count to 15 using the LEDS.

  // 0
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 1
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 2
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 3
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 4
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 5
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 6
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 7
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 8
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 9
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 10
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 11
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 12
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 13
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);

  // 14
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, LOW);
  delay(waitTime);

  // 15
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(whitePin, HIGH);
  delay(waitTime);
}