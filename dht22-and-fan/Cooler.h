#ifndef COOLER_H
#define COOLER_H

#include "CoolerSpeedStrategy.h"
#include <Arduino.h>

class Cooler {
private:
    byte pin;
    CoolerSpeedStrategy* strategy;
public:
    Cooler(byte pin, CoolerSpeedStrategy* strategy);
    void init();
    void setStrategy(CoolerSpeedStrategy* newStrategy);
    void adjustSpeed(float humidity);
};

#endif