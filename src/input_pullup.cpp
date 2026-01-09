#include <Arduino.h>
#include "state.h"

int ButtonState = 0;
int pullup_buttonPin = 2;

void pullup_init() {
    Serial.begin(9600);
    pinMode(2,INPUT_PULLUP);
}

void pullup_loop() {
    int ButtonState = digitalRead(pullup_buttonPin);
    Serial.println(ButtonState);
    delay(1);
    
}