void setup() {
  Serial.begin(9600);
}

String message;

void loop() {
  message = Serial.readString();

  Serial.println(message);
}
