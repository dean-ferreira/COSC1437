/*
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90. Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

Ex: If the input is:

90
the output is:

I-90 is primary, going east/west.
Ex: If the input is:

290
the output is:

I-290 is auxiliary, serving I-90, going east/west.
Ex: If the input is:

0
the output is:

0 is not a valid interstate highway number. 
Ex: If the input is:

200
the output is:

200 is not a valid interstate highway number. 
*/

#include <iostream>
#include <string>

using namespace std;

string primary_hw(int hw) {
    string direction {};
    if (hw % 2 == 0) {
        direction = "east/west";
    }
    else {
        direction = "north/south";
    }
    
    return direction;
};

int main(int argc, const char * argv[]) {
    
    int hwNum {};
    cin >> hwNum;
    
    if (hwNum < 1 || hwNum > 999) {
        cout << hwNum << " is not a valid interstate highway number." << endl;
    }
    else if (hwNum >= 1 && hwNum <= 99) {
        cout << "I-" << hwNum << " is primary, going " << primary_hw(hwNum) << "." << endl;
    }
    else if (hwNum >= 101 && hwNum <= 999) {
        if (hwNum % 100 == 0) {
            cout << hwNum << " is not a valid interstate highway number." << endl;
        }
        else {
            int primaryHW = hwNum % 100;
            cout << "I-" << hwNum << " is auxiliary, serving I-" << primaryHW << ", going " << primary_hw(primaryHW) << "." << endl;
        }
    }
    return 0;
}
