/*
  AltBlink
  Turns LEDs on for one second, then off for one second, repeatedly.

  This example required 2 LEDs and 2 resistors.

  This example code is in the public domain.

  modified 23 June 2015
  by Jack Bennett
 */
 
int GREEN = 13;
int RED = 12;
int SPEED = 1000;

void flip(int pin){
    digitalWrite(pin, ! digitalRead(pin));
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);

  digitalWrite(RED, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  flip(GREEN);
  flip(RED);
  delay(SPEED); // wait here for a time
}


