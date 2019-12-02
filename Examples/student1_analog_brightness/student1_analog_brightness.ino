// Session 2
int light1 = 3;
int brightness = A0;
void setup() {
  // put your setup code here, to run once:
pinMode(light1, OUTPUT);
pinMode(brightness, INPUT);
Serial.begin(115200);

Serial.println("before, after");
}

void loop() {
  // put your main code here, to run repeatedly:
int get_brightness = analogRead(brightness);
int new_brightness = map(get_brightness, 0, 1000, 0, 255);
analogWrite(light1, new_brightness);

Serial.print(get_brightness);
Serial.print(",");
Serial.println(new_brightness);
}
