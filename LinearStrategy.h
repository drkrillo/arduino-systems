#ifndef LINEAR_STRATEGY_H
#define LINEAR_STRATEGY_H

#include "CoolerSpeedStrategy.h"

class LinearStrategy : public CoolerSpeedStrategy {
public:
    int speedCalculator(float humidity) override;
};

#endif