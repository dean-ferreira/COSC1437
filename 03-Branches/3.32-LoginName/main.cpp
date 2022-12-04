/*
Write a program that creates a login name for a user, given the user's first name, last name, and a four-digit integer as input. Output the login name, which is made up of the first five letters of the last name, followed by the first letter of the first name, and then the last two digits of the number (use the % operator). If the last name has less than five letters, then use all letters of the last name.

Hint: Use the to_string() function to convert numerical data to a string.

Ex: If the input is:

Michael Jordan 1991
the output is:

Your login name: JordaM91
Ex: If the input is:

Kanye West 2024
the output is:

Your login name: WestK24
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;

	cin >> first >> last >> number;
	
	login.append(last.substr(0, 5) + first.at(0) + to_string(number % 100));
	
	cout << "Your login name: " << login << endl;
	
	return 0;
}