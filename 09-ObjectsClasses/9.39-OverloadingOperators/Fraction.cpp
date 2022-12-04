#include "Fraction.h"

Fraction::Fraction() {
    num = 1;
    denom = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    num = numerator;
    denom = denominator;
}

int Fraction::GetNumerator() { return num; }
int Fraction::GetDenominator() { return denom; }

Fraction Fraction::operator+(const Fraction &rhs) {
    Fraction combinedFraction(this->GetNumerator() + rhs.num, this->GetDenominator() + rhs.denom);
    return combinedFraction;
}

Fraction Fraction::operator+(int rhs) {
    this->num += (rhs * this->denom);
    return *this;
}

Fraction Fraction::operator-(const Fraction &rhs) {
    Fraction combinedFraction(this->GetNumerator() - rhs.num, this->GetDenominator() - rhs.denom);
    return combinedFraction;
}

Fraction Fraction::operator-(int rhs) {
    this->num -= (rhs * this->denom);
    return *this;
}

Fraction Fraction::operator*(const Fraction &rhs) {
    Fraction combinedFraction(this->GetNumerator() * rhs.num, this->GetDenominator() * rhs.denom);
    return combinedFraction;
}

Fraction Fraction::operator*(int rhs) {
    this->num *= rhs;
    return *this;
}