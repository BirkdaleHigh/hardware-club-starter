// Session 3
int first=13;
int second=12;
int analogthird=11;
void setup() {
pinMode(first, OUTPUT);
pinMode(second, OUTPUT);
pinMode(analogthird, OUTPUT);  
  

}

void loop() {
// analog 0 - 255
 analogWrite(first, 255);
  delay(500);            
  analogWrite(first, 45);  
  delay(500);   

 analogWrite(second, 178);
  delay(400);            
  analogWrite(second, 64);  
  delay(400);  

analogWrite(analogthird, 233);
  delay(500);            
  analogWrite(analogthird,134 );  
  delay(500);   
 
  analogWrite(analogthird, 20); 
  delay(750);
  analogWrite(analogthird, 75);
}
