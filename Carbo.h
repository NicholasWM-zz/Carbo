#ifndef Carbo_h
#define Carbo_h 
#include "Arduino.h"
class Carbo
{
    public:
        Carbo(int pin);
        void revert();
        void echoState()
    private:
        int _state;
        int _pin;
}
#endif