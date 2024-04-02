#ifndef COOLER_SPEED_STRATEGY_H
#define COOLER_SPEED_STRATEGY_H

class CoolerSpeedStrategy {
public:
    virtual ~CoolerSpeedStrategy() {}
    virtual int speedCalculator(float humidity) = 0;
};

#endif