/*
Write a program that asks a user to specify how many integers she wishes to input, then stores the integers input by the user into a dynamic array. For example, the following is an example of the input

4 1 2 3 4
where the first integer 4 specifies the number of the integers that will be stored in the array.

After receiving the input from the user, the program prints the array.

1 2 3 4
Remember to release memory at the end of the program.
*/

#include <iostream>
using namespace std;

int main () 
{   
	int size,i;   
	int *arr_p;   
	
	//Acquire array size from keyboard
	cin >> size;
	
	//Create new dynamic array and store its address in p
	arr_p = new int[size];
	
	if (arr_p == nullptr)     
		cout << "Error: memory could not be allocated";   
	else  
	{    
		//Fill array with user input
		for (i = 0; i < size; i++) {
		   cin >> arr_p[i];
		}
	}  
	
	// output the array
	for (i = 0; i < size; i++) {
		   cout << arr_p[i] << " ";
	}
	cout << endl;
	//Delete array
	delete [] arr_p;
   return 0; 
}
