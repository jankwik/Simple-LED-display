#include <Arduino.h>
#include "TM1651.h"

TM1651* tm1651;

void setup() {
  tm1651 = new TM1651(3, 2);
  tm1651->displayInteger(133);
}

void loop() {
  // put your main code here, to run repeatedly:
}