#include <iostream>
#include <string>

using namespace std;

/* Define your functions here */ 
string IntToReverseBinary(int integerValue) {
    string binaryString {};
    while (integerValue > 0) {
        binaryString.append(to_string(integerValue % 2));
        integerValue /= 2;
    }

    return binaryString;
}

string StringReverse(string userString) {
    string binString {};
    for (int i = userString.length() - 1; i >= 0; i--) {
        binString += userString.at(i);
    }

    return binString;
}

int main() {
   /* Type your code here. 
      Your code must call IntToReverseBinary() to get
      the binary string of an integer in a reverse order.
      Then call StringReverse() to reverse the string 
      returned from IntToReverseBinary().*/
      int userInt {};
      cin >> userInt;
      string reversedBinString = IntToReverseBinary(userInt);
      string binString = StringReverse(reversedBinString);
      cout << binString << endl;
   return 0;
}
