#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist() {
    artistName = "unknown";
    birthYear = -1;
    deathYear = -1;
}

// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string _artistName, int _birthYear, int _deathYear) {
    artistName = _artistName;
    birthYear = _birthYear;
    deathYear = _deathYear;
}

// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const { return artistName; }
int Artist::GetBirthYear() const { return birthYear; }
int Artist::GetDeathYear() const { return deathYear; }

// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
void Artist::PrintInfo() const {
    cout << "Artist: " << GetName() << " (";
    if (GetBirthYear() > -1 && GetDeathYear() > -1) {
        cout << GetBirthYear() << " to " << GetDeathYear() << ")";
    }
    else if (GetBirthYear() > -1 && GetDeathYear() == -1) {
        cout << GetBirthYear() << " to present)";
    }
    else {
        cout << "unknown)";
    }
    cout << endl;
}