#include <Arduino.h>
#include "state.h"

const int buttonPin = 2;
int buttonState = 0;
int lastButtonState = 0;

void state_init() {
    Serial.begin(9600);
    pinMode(buttonPin,INPUT);


}

void state_loop() {

}