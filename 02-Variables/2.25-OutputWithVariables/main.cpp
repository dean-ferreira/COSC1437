/*
A variable like userNum can store a value like an integer. Extend the given program to print userNum values as indicated.

(1) Output the user's input. (2 pts)

Enter integer:
4
You entered: 4

(2) Extend to output the input squared and cubed. Hint: Compute squared as userNum * userNum. (2 pts)

Enter integer:
4
You entered: 4
4 squared is 16 
And 4 cubed is 64!! 

(3) Extend to get a second user input into userNum2. Output sum and product. (1 pt)

Enter integer:
4
You entered: 4
4 squared is 16 
And 4 cubed is 64!!
Enter another integer:
5
4 + 5 is 9
4 * 5 is 20
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
   int userNum;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << pow(userNum, 2) << endl;
   cout << "And " << userNum << " cubed is " << pow(userNum, 3) << "!!" << endl;
   cout << "Enter another integer:" << endl;
   int num {};
   cin >> num;
   cout << userNum << " + " << num << " is " << userNum + num << endl;
   cout << userNum << " * " << num << " is " << userNum * num << endl;

   return 0;
}