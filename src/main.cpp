#include "signal_processing.h"
#include <iostream>

int main() {
    // Load audio files
    // Assuming a function to load audio exists in Aquila library
    Aquila::SoundFile audio1("data/audio1.wav");
    Aquila::SoundFile audio2("data/audio2.wav");

    if (!audio1.isValid() || !audio2.isValid()) {
        std::cerr << "Error loading audio files!" << std::endl;
        return -1;
    }

    // Apply signal processing functions
    Aquila::SoundFile processedAudio1 = applyLowPassFilter(audio1);
    Aquila::SoundFile processedAudio2 = applyLowPassFilter(audio2);

    // Save results
    processedAudio1.save("results/processed_audio1.wav");
    processedAudio2.save("results/processed_audio2.wav");

    return 0;
}
