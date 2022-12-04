/*
Dynamic variables can also be arrays. Dynamic arrays are much more flexible than static arrays, because it is not necessary to know their size before running the program. The size of the array can be declared at runtime. Dynamic arrays use pointers to store their address, just like dynamic variables;

double *myarr;
int size; 

cin >> size;

myarr = new double[size];
You can then use myarr just as a regular array (you don't even need the * to access its content - more on this in class). Just remember to delete the array when you are no longer using it, especially since arrays are much better at taking up space in the heap than single variables.

delete [] myarr;
Now, write a program that asks a user to specify how many numbers he wishes to write, then stores the values input by the user into a dynamic array.

How many numbers will you enter? 4
1 2 3 4
Finally, it prints the array.

The array you entered is
1 2 3 4
*/

#include <iostream>
using namespace std;

int main () 
{   
	int size,i;   
	int *p;   
	
	//Acquire array size from keyboard
	cin >> size;
	
	
	//Create new dynamic array and store its address in p
	p = new int [size];
	
	if (p == NULL)     
		cout << "Error: memory could not be allocated";   
	else  
	{    
		//Fill array with user input
		for (i = 0; i < size; i++) {
		   cin >> p[i];
		}
	}  
	
	for (i=0; i<size; i++)
	   cout << p[i] << " ";
	cout << endl;
	
	//Delete array
	delete [] p;
return 0; 
}
