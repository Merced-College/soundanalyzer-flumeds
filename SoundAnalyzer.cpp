#include "SoundAnalyzer.h"

SoundAnalyzer::SoundAnalyzer(int quiet, int medium) {
    quietThreshold = quiet;
    mediumThreshold = medium;
}

std::string SoundAnalyzer::classifySound(int soundLevel) {
    if (soundLevel < quietThreshold) {
        return "Quiet";
    } else if (soundLevel < mediumThreshold) {
        return "Medium";
    } else {
        return "Loud";
    }
}
