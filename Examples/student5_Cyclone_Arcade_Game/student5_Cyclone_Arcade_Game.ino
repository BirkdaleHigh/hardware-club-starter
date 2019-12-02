// Session 2
int ledPin = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}
void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(50);
  digitalWrite(ledPin, LOW);
  delay(50);
  digitalWrite(ledPin2, HIGH);
  delay(50);
  digitalWrite(ledPin2, LOW);
  delay(50);
  digitalWrite(ledPin3, HIGH);
  delay(50);
  digitalWrite(ledPin3, LOW);
  delay(50);
  digitalWrite(ledPin4, HIGH);
  delay(50);
  digitalWrite(ledPin4, LOW);
  delay(50);
}
