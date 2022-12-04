#include <iostream>

using namespace std;

string GetPhoneNumber(string names[], string phoneNumbers[], int size, string contactName) {
    
}

int main() {
    int numValues {};
    string names[10], phoneNumbers[10];
    string searchName {}, phoneNumber{};

    cin >> numValues;

    for (int i = 0; i < numValues; i++) {
        cin >> names[i] >> phoneNumbers[i];
    }

    cin >> searchName;

    phoneNumber = GetPhoneNumber(names, phoneNumbers, numValues, searchName);
    cout << phoneNumber << endl;
    return 0;
}