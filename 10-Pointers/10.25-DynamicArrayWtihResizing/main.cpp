/*
A template is already provided for you to create a class called DynamicArray. This class has 3 private attribute:

- int *arr: dynamically allocated integer array
- int length: gives actual number of elements in the array
- int size: give maximum number of elements the array can hold
You need to complete the following:

DynamicArray(): Default constructor: set length=0; size =1; allocate memory for arr
DynamicArray(int s): set size =s, length=0; allocate memory for arr
getLength(): return length of array
getElement(int pos): return element at position pos
getSize(): return size of the array
addElement(int val): add new element to array. If array is full, you need to double the size of the array before adding the new element. Always remember to update the length of the array.
*/

#include <iostream>

//include header
#include "DynamicArray.h"

using namespace std;

int main()
{
    int numElements {5};
    DynamicArray dArray(numElements);
    for(int i = 0; i < numElements; i++) {
        dArray.addElement(i * 2);
    }
    cout << dArray.getLength() << " " << dArray.getSize() << endl;
    for(int i = 0; i < dArray.getLength(); i++) {
        cout << dArray.getElement(i) << " ";
    }
    cout << endl;
    dArray.addElement(10);
    cout << dArray.getLength() << " " << dArray.getSize() << endl;
    for(int i = 0; i < dArray.getLength(); i++) {
        cout << dArray.getElement(i) << " ";
    }
    return 0;
}