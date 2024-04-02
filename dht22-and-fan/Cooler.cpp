#include "Cooler.h"
#include <Arduino.h>

Cooler::Cooler(byte pin, CoolerSpeedStrategy* strategy) : pin(pin), strategy(strategy) {
    init();
}

void Cooler::init() {
    pinMode(pin, OUTPUT); // Inicializamos PIN correcto a output
}

void Cooler::setStrategy(CoolerSpeedStrategy* newStrategy) {
    strategy = newStrategy;
}

void Cooler::adjustSpeed(float humidity) {
    int speed = strategy->speedCalculator(humidity);
    analogWrite(pin, speed);
}