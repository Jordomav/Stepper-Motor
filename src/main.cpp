#include <Arduino.h>
#include <Stepper.h>

int numberOfSteps = 520;

Stepper myStepper(numberOfSteps, 8, 10, 9, 11);

void setup() {
    myStepper.setSpeed(20);
}

void loop() {
    myStepper.step(numberOfSteps);
    delay(600);
}