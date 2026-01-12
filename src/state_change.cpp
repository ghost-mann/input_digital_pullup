#include <Arduino.h>
#include "state.h"

const int buttonPin = 2;
int detectionState = 0;
int buttonState = 0;
int lastButtonState = 0;

void state_init() {
    Serial.begin(9600);
    pinMode(buttonPin,INPUT);

}

void state_loop() {
    buttonState = digitalRead(buttonPin);
    if (buttonState != lastButtonState) {
         if (buttonState == HIGH) {
            detectionState=(detectionState+1)%2;
            Serial.println(detectionState);
         }
         delay(50);
    }
    lastButtonState = buttonState;

}