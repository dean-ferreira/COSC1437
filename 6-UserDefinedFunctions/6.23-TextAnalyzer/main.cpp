/*
(1) Prompt the user to enter a string of their choosing. Output the string. (1 pt)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.
(2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. We encourage you to use a for loop in this function. (2 pts)

(3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)

(4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 46
String with no whitespace: Theonlythingwehavetofearisfearitself.
*/

#include <iostream>
#include <string>

using namespace std;

int GetNumOfCharacters(std::string &str);
std::string OutputWithoutWhitespace(std::string &str);

int main() {
    // (1) Prompt the user to enter a string of their choosing. Output the string. (1 pt)
    std::string userString {};
    std::cout << "Enter a sentence or phrase:" << std::endl;
    std::getline(std::cin, userString);
    std::cout << std::endl;
    std::cout << "You entered: " << userString << std::endl;
    std::cout << std::endl;

    // (3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)
    std::cout << "Number of characters: " << GetNumOfCharacters(userString) << std::endl;

    // (4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)
    std::cout << "String with no whitespace: " << OutputWithoutWhitespace(userString) << std::endl;

    return 0;
}

// (2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. We encourage you to use a for loop in this function. (2 pts)
int GetNumOfCharacters(std::string &str) {
    return str.length();
}

std::string OutputWithoutWhitespace(std::string &str) {
    for (int i = 0; i < GetNumOfCharacters(str); i++) {
        if (std::isspace(str.at(i))) {
            str.erase(i, 1);
        }
    }

    return str;
}