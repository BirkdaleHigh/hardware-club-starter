void setup() {
  Serial.begin(9600);
}

String message;

void loop() {
  while(Serial.available() > 0){
    message = Serial.readString();
  }

  if(message == "Hello"){
    Serial.println("Greetings.");
    message = "";
  }

  if(message != ""){
    Serial.println(message);
    message = "";
  }
}
