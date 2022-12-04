/*
A variable like userNum can store a value like an integer. Extend the given program as indicated.

Output the user's input. (2 pts)
Output the input squared and cubed. Hint: Compute squared as userNum * userNum. (2 pts)
Get a second user input into userNum2, and output the sum and product. (1 pt)

Note: This zyLab outputs a newline after each user-input prompt.
For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

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
using namespace std;

int main() {
   int userNum;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << userNum * userNum << endl;
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   
   int anotherNum;
   cout << "Enter another integer:" << endl;
   cin >> anotherNum;

   cout << userNum << " + " << anotherNum << " is " << userNum + anotherNum << endl;
   cout << userNum << " * " << anotherNum << " is " << userNum * anotherNum << endl;
   return 0;
}