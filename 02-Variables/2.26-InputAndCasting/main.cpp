/*
(1) Prompt the user to input an integer, a double, a character, and a string, storing each into separate variables. Then, output those four values on a single line separated by a space. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy

(2) Extend to also output in reverse. (1 pt)

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy
Howdy z 3.77 99

(3) Extend to cast the double to an integer, and output that integer. (2 pts)

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy
Howdy z 3.77 99
3.77 cast to an integer is 3
*/

#include <iostream>
#include <string> // Supports use of "string" data type
using namespace std;

int main()
{
    int userInt;
    double userDouble;
    // FIXME: Define char and string variables
    char userChar;
    string userString;

    cout << "Enter integer:" << endl;
    cin >> userInt;

    // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
    cout << "Enter double:" << endl;
    cin >> userDouble;
    cout << "Enter character:" << endl;
    cin >> userChar;
    cout << "Enter string:" << endl;
    cin >> userString;

    cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
    // FIXME (2): Output the four values in reverse
    cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;

    // FIXME (3): Cast the double to an integer, and output that integer
    cout << userDouble << " cast to an integer is " << static_cast<int>(userDouble) << endl;
    return 0;
}