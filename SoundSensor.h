#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H

class SoundSensor {
private:
    int pin;

public:
    SoundSensor(int sensorPin);
    void begin();
    int getSoundLevel();
    bool isLoud(int threshold);  // ADD THIS
};

#endif
