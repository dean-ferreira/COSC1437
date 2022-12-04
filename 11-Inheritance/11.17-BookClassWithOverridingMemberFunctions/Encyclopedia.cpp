#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string _edition) {
    edition = _edition;
}

void Encyclopedia::SetNumVolumes(int _num) {
    numVolumes = _num;
}

string Encyclopedia::GetEdition() {
    return edition;
}

int Encyclopedia::GetNumVolumes() {
    return numVolumes;
}

void Encyclopedia::PrintInfo() {
    Book::PrintInfo();
    cout << "   Edition: " << GetEdition() << endl;
    cout << "   Number of Volumes: " << GetNumVolumes() << endl;
}