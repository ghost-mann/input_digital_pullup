#include <Arduino.h>
#include "state.h"

int pullup_buttonPin = 2;

void pullup_init() {
    Serial.begin(9600);
    pinMode(pullup_buttonPin,INPUT);
}

void pullup_loop() {

}