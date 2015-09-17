# BigTrak Rover Jr.

Make your own brains the to BigTrak Rover with a simple LED array and microcontroller.

## Parts

- Controller (arduino in this case)
- x4 LEDs
- x4 matching resistors (560ohm)
- Some wires and connectors or soldering supplies.
- Something to insulate the wires from each other. Tape or surplus over sized wire you can strip. (Old electrical cable in this case)

## How

The BigTrak Rover is controlled by 4 light-sensitive diodes in a row. Exposing these to light in a specific order controls which motors are powered and the direction. Duration is controlled by the time the diode is lit. 

The app works by holding a phone in a specific place that lights the screen in a specific order for the diodes.

This project will replace the phone.

We need something to hold 4 LEDs in place in front of the diodes and also to press down on the power switch at the base of the phone clamp.

## Control

Now we know how the rover works we need to create our prototype to prove the idea. So we need 4 LEDs wired up to you controller now, perfect time to get the breadboard out. 

The logic we need do make the LEDs display is as [seen from the working out](logic_chart.jpg) photo.

Cleaned up looks like;

|1|2|3|4||
|:---:|:---:|:---:|:---:|---|
||x|x||**forward**|
|||x|x|**left**|
|x|x|||**right**|
|x|||x|**reverse**\*|

\* The bigtrak app they give you for your phone doesn't actually have reverse. We found this by experimenting. 

## Measurements

Corrugated card the thicker the better to clamp down. 65mm width by 40mm* hight.
Place the tip of the LEDs 20mm up from the bottom of the card relative to the clamp.
Space the LED tips 12.5mm apart starting 15mm from one edge of the board.

\* This is a minimum height for the top of the clamp to reach the bottom power switches.

We should end up with something that looks a bit like; ![this picture](brain.v1.jpg)

I hope yours tuns out neater. The LED legs were insulated after taking this picture. Make sure yours can't short out when moved around.
