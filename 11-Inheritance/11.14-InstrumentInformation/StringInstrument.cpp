#include "StringInstrument.h"

void StringInstrument::SetNumOfStrings(string _s) {
    numStrings = _s;
}

void StringInstrument::SetNumOfFrets(string _f) {
    numFrets = _f;
}

string StringInstrument::GetNumOfStrings() {
    return numStrings;
}

string StringInstrument::GetNumOfFrets() {
    return numFrets;
}