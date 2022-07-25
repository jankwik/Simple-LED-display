#include <Arduino.h>
#include "TM1651.h"

TM1651* tm1651;

#define CLOCK_PIN   3
#define DATA_PIN    5

void setup() {
  tm1651 = new TM1651(CLOCK_PIN, DATA_PIN);
  tm1651->displayClear();
  tm1651->displaySet();
  tm1651->displayInteger(133);
}

void loop() {
  delay(500);
}