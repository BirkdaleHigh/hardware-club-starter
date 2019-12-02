// Session 1
// Create 4 pin names in a row from far right to far left
int rr = 13;
int r = 12;
int l = 11;
int ll = 10;

// make an array of the pins to loop over in bulk actions
int pins[] = {ll, l, r, rr};

void setup()
{
    for (int count = 0; count <= 3; count += 1)
    {
        pinMode(pins[count], OUTPUT);
    }
}
// Sweep all LEDs to the right
void right_look(int speed){
    for (int count = 0; count <= 3; count += 1)
    {
        digitalWrite(pins[count], 1);
        delay(speed);
        digitalWrite(pins[count], 0);
    }
}
// Sweep all LEDs to the left
void left_look(int speed){
    for (int count = 3; count >= 0; count -= 1)
    {
        digitalWrite(pins[count], 1);
        delay(speed);
        digitalWrite(pins[count], 0);
    }
}

// Sweep all LEDs right then left like a cylon
void cylon(int speed, int pause = 0){
    right_look(speed);
    delay(pause);
    left_look(speed);
}

// turn all LEDs on for some period of time.
void all(int on = 100){
    for (int count = 0; count <= 3; count += 1)
    {
        digitalWrite(pins[count], 1);
    }
    delay(on);
    for (int count = 0; count <= 3; count += 1)
    {
        digitalWrite(pins[count], 0);
    }
}

// This is what abstraction looks like.

void loop()
{
    // high level, use our custom functions so its easy to reason the output at once
    cylon(50);
    cylon(100);
    cylon(250, 250);

    delay(500);

    // going down a level, directly use the functions that made up the earlier call
    // this way we aren't locked into the one form of presentation when we made the cylon program
    int basic_speed = 150;
    right_look(basic_speed);
    right_look(basic_speed);
    right_look(basic_speed);
    left_look(basic_speed);
    left_look(basic_speed);
    left_look(basic_speed);

    // Down to almost the lowest level (we're still using pin name variables to read what's going on)
    // Directly turn on and off specific pins
    delay(500);
    digitalWrite(ll, 1);
    digitalWrite(r, 1);
    delay(500);

    // now I want to turn the right side LED's on, note that I had to remember to turn off the left side
    digitalWrite(ll, 0);
    digitalWrite(r, 0);
    digitalWrite(rr, 1);
    digitalWrite(l, 1);
    delay(500);
    // Finaly remember to turn off the right side before carrying on and looping.
    digitalWrite(rr, 0);
    digitalWrite(l, 0);
    delay(500);


    // one last abstraction to flash all lights at once.
    all(1000);
    delay(500);
}
