// Session 2
void setup(){
  // put your setup code here, to run once:
pinMode(11,OUTPUT);

pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11, 1);
delay(1000);
digitalWrite(11, 0);
delay(1000);


analogWrite(11, 255);
delay(1000);
}
