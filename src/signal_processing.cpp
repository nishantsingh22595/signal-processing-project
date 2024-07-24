#include "signal_processing.h"
#include <Aquila/Filter/LowPassFilter.h>  // Example header, adjust based on actual library

Aquila::SoundFile applyLowPassFilter(const Aquila::SoundFile& input) {
    Aquila::LowPassFilter filter(5000);  // Example cutoff frequency
    Aquila::SoundFile output = filter.process(input);
    return output;
}
