#include "Arduino.h"
#include "Carbo.h"

Carbo::Carbo(int pin){
    Serial.begin(9600);
    Serial.println("Carbo BEGINS");
    pinMode(pin,OUTPUT);
    _pin = pin;
    _state = digitalRead(_pin);
}

void Carbo::revert(){
    digitalWrite(_pin,!_state);
    _state = !_state;
}
void Carbo::echoState(){
    Serial.println("State: ", _pin, " = ", _state);
}