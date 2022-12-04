#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument
{
    // TODO: Declare private data members: numStrings, numFrets
private:
    string numStrings;
    string numFrets;

public:
    // TODO: Declare mutator functions -
    //      SetNumOfStrings(), SetNumOfFrets()
    void SetNumOfStrings(string _s);
    void SetNumOfFrets(string _f);

    // TODO: Declare accessor functions -
    //      GetNumOfStrings(), GetNumOfFrets()
    string GetNumOfStrings();
    string GetNumOfFrets();
};

#endif