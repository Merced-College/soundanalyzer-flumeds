#include "SoundAnalyzer.h"

// Constructor
SoundAnalyzer::SoundAnalyzer(int quiet, int medium) {
    quietThreshold = quiet;
    mediumThreshold = medium;
}

// Classify sound
std::string SoundAnalyzer::classifySound(int soundLevel) {
    if (soundLevel < quietThreshold) {
        return "Quiet";
    } else if (soundLevel < mediumThreshold) {
        return "Medium";
    } else {
        return "Loud";
    }
}
