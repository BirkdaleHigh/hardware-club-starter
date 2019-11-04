int top = 2;
int bottom = 8;

void setup(){
    pinMode(   top, OUTPUT);
    pinMode(bottom, OUTPUT);

    // testing pin, not used in loop.
    pinMode(13, OUTPUT);
    digitalWrite(13, 1);
}

void loop(){
    digitalWrite(top, 1);
    digitalWrite(bottom, 0);

    delay(2000);

    digitalWrite(top, 0);
    digitalWrite(bottom, 1);

    delay(2000);
}

// Here's some things to think about;
// What order do things happen in the code?
// What gets repeated?

