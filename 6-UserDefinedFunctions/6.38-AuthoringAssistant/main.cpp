#include <iostream>
#include <string>

using namespace std;

void PrintMenu();
void ExecuteMenu(char choice, string text);

int main() {
    string str {};
    cout << "Enter a sample text:" << endl;
    getline(cin, str);
    cout << endl;
    cout << "You entered: " << str << endl;

    char choice {};
    do {
        PrintMenu();
        cin >> choice;
        switch (choice) {
        case 'c':
        case 'w':
        case 'f':
        case 'r':
        case 's':
            ExecuteMenu(choice, str);
            break;
    }

    } while (choice != 'q');
    return 0;
}

void PrintMenu() {
    cout << endl;
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
    cout << "Choose an option:" << endl;
}

void ExecuteMenu(char choice, string text) {
    switch (choice) {
        case 'c':
            break;
        case 'w':
            break;
        case 'f':
            break;
        case 'r':
            break;
        case 's':
            break;
        case 'q':
            break;
    }
}