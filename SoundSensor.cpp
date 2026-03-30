#include "SoundSensor.h"
#include <Arduino.h>

SoundSensor::SoundSensor(int sensorPin) {
    pin = sensorPin;
}

void SoundSensor::begin() {
    pinMode(pin, INPUT);
}

int SoundSensor::getSoundLevel() {
    return analogRead(pin);
}

// ADD THIS
bool SoundSensor::isLoud(int threshold) {
    return getSoundLevel() > threshold;
}
