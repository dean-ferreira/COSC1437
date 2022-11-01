#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct vector2D {
    float x;
    float y;
};

void RotateVector(vector2D &v);
void NormalizeVector(vector2D &v);
void ReflectVector(vector2D &v);

int main() {
    vector2D userVect;
    int option {};
    cin >> userVect.x >> userVect.y >> option;

    switch (option) {
        case 1:
            RotateVector(userVect);
            break;
        case 2:
            NormalizeVector(userVect);
            break;
        case 3:
            ReflectVector(userVect);
            break;
    }

    cout << fixed << setprecision(2);
    cout << "The output vector is " << "<" << userVect.x << ", " << userVect.y << ">" << endl;
    return 0;
}

void RotateVector(vector2D &v) {
    float temp {};
    temp = v.x;
    v.x = v.y * -1.0;
    v.y = temp;
}

void NormalizeVector(vector2D &v) {
    float length = sqrt((v.x * v.x) + (v.y * v.y));

    if (length == 0) {
        v.x = 0.0;
        v.y = 0.0;
    }
    else {
        v.x /= length;
        v.y /= length;
    }
}

void ReflectVector(vector2D &v) {
    v.x = v.x + v.y;
    v.y = v.x - v.y;
    v.x = v.x - v.y;
}