#ifndef FRACTION_H
#define FRACTION_H
#include <ostream>

using namespace std;

class Fraction{
public:
    Fraction();
    Fraction(int numerator, int denominator);
    int GetNumerator();
    int GetDenominator();

    Fraction operator+(const Fraction &rhs);
    Fraction operator+(int rhs);
    Fraction operator-(const Fraction &rhs);
    Fraction operator-(int rhs);
    Fraction operator*(const Fraction &rhs);
    Fraction operator*(int rhs);
    Fraction& operator++();
    Fraction operator++(int);

    friend ostream& operator<<(ostream& out, const Fraction& fraction);
    friend bool operator==(const Fraction& lhs, const Fraction& rhs);

private:
    int num, denom;
};

#endif