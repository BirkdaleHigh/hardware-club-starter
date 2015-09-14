int A = 13;
int B = 12;
int C = 11;
int D = 10;
int drive = 500;
int pause = 5000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(drive
  );
  
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  delay(pause);
}
