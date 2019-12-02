// Session 2
  int LET_THERE_BE_LIGHT = 11 ;
  int brightness = A0;

void setup() {
  // put your setup code here, to run once
pinMode(LET_THERE_BE_LIGHT,OUTPUT);
pinMode(brightness, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
int get_brightness = analogRead(brightness);

analogWrite(LET_THERE_BE_LIGHT, get_brightness);

delay(1000);
}
