#include <iostream>

using namespace std;

struct RGBColor {
    int red;
    int green;
    int blue;
};

int average(RGBColor colorArr[], const int size, const string whichChannel);

int main() {
    int numRGB {};
    cin >> numRGB;
    RGBColor collection [10];

    for (int i = 0; i < numRGB; i++) {
        cin >> collection[i].red;
        cin >> collection[i].green;
        cin >> collection[i].blue;
    }

    cout << "Average color: (" << average(collection, numRGB, "red") << ", " << average(collection, numRGB, "green") << ", " << average(collection, numRGB, "blue") << ")" << endl;

    return 0;
}

int average(RGBColor colorArr[], const int size, const string whichChannel) {
    int sum {};
    if (whichChannel == "red") {
        for (int i = 0; i < size; i++) {
            sum += colorArr[i].red;
        }
    }
    else if (whichChannel == "green") {
        for (int i = 0; i < size; i++) {
            sum += colorArr[i].green;
        }
    }
    else if (whichChannel == "blue") {
        for (int i = 0; i < size; i++) {
            sum += colorArr[i].blue;
        }
    }

    return sum / size;
}