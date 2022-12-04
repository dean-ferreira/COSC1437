#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
   //complete
   length = 0;
   size = 1;
   arr = new int [size];
}

DynamicArray::DynamicArray(int s)
{
   //complete
   length = 0;
   size = s;
   arr = new int [size];
}

void DynamicArray::addElement(int val)
{ 
    if(length == size/*check if array if full*/) {
       //create a temporary dynamic array
       int *tempArray = new int [length];
       
       //copy element from arr to temporary array
       for (int i = 0; i < length; i++) {
         tempArray[i] = arr[i];
       }

      //delete arr
      delete [] arr;
      
      //double size of array
      size *= 2;
      
      //allocate new memory for arr
      arr = new int [size];

      //copy elements from temporary array to arr
      for (int i = 0; i < length; i++) {
         arr[i] = tempArray[i];
      }
      
      //delete temporary array
      delete [] tempArray;
    }
    
    //add new element to array and update length
    arr[length] = val;
    length += 1; 
}

int DynamicArray::getLength()
{
   //compelte
   return length;
}

int DynamicArray::getElement(int pos)
{
   //complete
   return arr[pos];
}

int DynamicArray::getSize()
{ 
   //complete
   return size;
}

DynamicArray::~DynamicArray() { delete [] arr;}


