#ifndef SOUNDANALYZER_H
#define SOUNDANALYZER_H

#include <string>

class SoundAnalyzer {
private:
    int quietThreshold;
    int mediumThreshold;

public:
    SoundAnalyzer(int quiet, int medium);
    std::string classifySound(int soundLevel);
};

#endif
