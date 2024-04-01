#include "LinearStrategy.h"
#include <Arduino.h>

int LinearStrategy::speedCalculator(float humidity) {
    if (humidity >= 50) {
        Serial.print("Humedad mayor al 50...");
        return (int)(humidity + 150);
    } else {
        Serial.print("Humedad menor a 50...");
        return (int)(humidity + 50);
    }
}