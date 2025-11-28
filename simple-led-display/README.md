#MOVED

https://codeberg.org/jankwik/retro_simple_led_display

### Simple LED display

A very simple example of how an LED display may be used to display the speed of a (retro) PC. At the moment it is so simple that it only displays a fixed speed (133 MHz, which just happens to be the speed of one of my DOS machines). 

The required hardware is as follows:

* An Arduino board. I use Nanos, since they are cheap and take up very little space.

* A TM1651-compatible LED display - like the ones used on Goteks.

Most of the hard work is done by the GotekLEDC68-project by Derek Cooper ([GitHub - coopzone-dc/GotekLEDC68: This is an arduino library for using re-purposed LEDC68 3 digit LED displays from GoTek Drives](https://github.com/coopzone-dc/GotekLEDC68)) , from which I have lent the TM1651.h/.cpp-files - and left them completely unchanged. 

### Future enhancements

The schema file "LCD display and turbo button" lays out a few extensions that I currently do not need for my machine - since the AOpen motherboard I use (an AP53) does not use the turbo header for anything. 

It's really basic (and NOT tested!!): The turbo switch connected to **D6** can be either a toggle switch or a momentary one. Code in loop() - which has not been written - will poll the pin and - depending on the type of switch - toggle the turbo state. 

The circuit out of pin **D8** is meant to drive the turbo header on the motherboard. I planned on using a TLP521 optic coupler - to electrically isolate the Arduino from any potentially sensitive (retro-)equipment, and since I just happen to have a few of them - but a transistor of some kind should work as well. Experimenting a bit, I found that using a 2K resistor and 5V input, drove the collector-emitter resistance of the transistor in the TLP521 down to 200 ohms or so, but that should probably be calculated and/or adapted to the actual usage.
