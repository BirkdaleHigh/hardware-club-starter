// This example uses my pre=made PCB from the RobotController.
//     Without that, you need 4 LEDs (and resistors)
// In addition, a Light Sensor and 220Ohm resistor (red,red,red,Gold)


// 4 LED pins, far left to tight.
byte ll = 3;
byte l = 5;
byte r = 6;
byte rr = 9;

// one light sensor pin
byte light_in = A0;

// Brightness level to use when readling the light
int brightness = 0;

void setup()
{
    // prepare the correct output type.
    pinMode(rr, OUTPUT);
    pinMode(r, OUTPUT);
    pinMode(ll, OUTPUT);
    pinMode(l, OUTPUT);

    // and of course, the input type.
    pinMode(light_in, INPUT);

    // Start up a connection to the computer that we will use in the loop.
    // Once we use this, after uploading to the board open the Serial Monitor from the menu
    Serial.begin(115200); // Montior the same speed(baud rate) set here
}

void loop()
{
    int light_value = analogRead(light_in);

    // Note this just uses print, puts some text on a line.
    Serial.print("Light input: ");
    // Note this uses println which puts text on a line, then sends a new line at the end. Sends our value.
    Serial.println(light_value);

    int glow = map(light_value, 0, 1024, 0, 255);

    Serial.print("Glow Value: ");
    Serial.println(glow);

    analogWrite(ll, glow);



    // Change with each loop to make the LEDs pulse
    analogWrite(l, brightness);
    analogWrite(r, brightness);
    analogWrite(rr, brightness);

    if (brightness < 255)
    {
        brightness += 1;
    }
    else
    {
        brightness = 1;
    }
    delay(150);
}
