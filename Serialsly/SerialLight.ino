void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  float light = analogRead(A0);

  int level = map(light, 300, 900, 0, 255);

  level = constrain(level, 0 ,255);

  Serial.print("Raw: ");
  Serial.print(light);
  Serial.print(" Level: ");
  Serial.println(level);
  
  delay(10);

  analogWrite(3, level);
}
