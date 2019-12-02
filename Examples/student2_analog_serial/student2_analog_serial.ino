// Session 3
int light1 = 3;

int light2 = 12;

int light3 = 11;

int brightness = A0;

void setup() {
  pinMode(light1, OUTPUT);
  pinMode(brightness, INPUT);
  Serial.begin(1);
}

void loop() {
  int get_brightness = analogRead(brightness);
  Serial.print(get_brightness);
  analogWrite(light1, get_brightness);
  delay(1);

  

 digitalWrite(light1, 1);
  delay(1);
  digitalWrite(light1, 0);
  delay(1);

  digitalWrite(light2, 1);
  delay(1);
  digitalWrite(light2, 0);
  delay(1);

  digitalWrite(light3, 1);
  delay(1);
  digitalWrite(light3, 0);
  delay(1);


}
