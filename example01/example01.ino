#include "LowPower.h"

// https://github.com/daniel4wong/arduino-uno-r3
// https://diyi0t.com/arduino-uno-tutorial/
// https://github.com/rocketscream/Low-Power

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  // Example: Read sensor, data logging, data transmission.

  // Enter power down state for 8 s with ADC and BOD module disabled
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);  
}
