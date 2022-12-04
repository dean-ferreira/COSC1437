/*
Complete the implementation of the Fraction class to provide the functionality declared in the Fraction header. The main function in main.cpp includes calls to all these methods, and editing is disable for this file.
*/

#include <iostream>
#include <fstream>
#include "Fraction.h"

using namespace std;

void PrintEquality(const Fraction& first, const Fraction& second){
    if(first == second){
        cout << first << " == " << second << endl;
    }
    else{
        cout << first << " != " << second << endl;
    }
}

int main(){
    Fraction a(1,2), b(2,3), c(2,4), d(0,4), e(0,3);
    int f = 3;
    
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " + " << f << " = " << a+f << endl;
    cout << b << " - " << a << " = " << b-a << endl;
    cout << a << " - " << f << " = " << a-f << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " * " << f << " = " << a*f << endl;

    PrintEquality(a, c);
    PrintEquality(a, d);
    PrintEquality(d, e);
    
    cout << "Before: " << a++ << " After:" << a << endl;
    cout << "Before: " << ++b << " After:" << b << endl;
    
    return 0;
}