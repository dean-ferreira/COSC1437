/*
Write a program that reads a sequence of scores from a file and outputs the highest score. File name is input by the user (using cin >>).

getHighscore()
The program uses a function getHighscore() to read the input from file and determine the highest score. This function will take the filename as input. This function may throw two exceptions (depending on the situations):

FileIOError, if the file can not be opened
EmptyFileError, if the file includes no scores
Both exceptions must be defined as separate classes. These two classes can be empty or inherit from existing exception class, like run_time error class.

You can assume that, if a file includes scores, they are all positive integers and separated by spaces, thus you can use >> to read one integer at a time.

main()
In the main() function, use try-catch exception handling mechanism to catch the above two possible exceptions. If a FileIOError exception is caught, output the following message

Could not open the scores file.
If an EmptyFileError exception is caught, output the following message

The file is empty.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Add exception classes
class FileIOError {};
class EmptyFileError {};

// Define getHighscore function
int getHighscore(string fileName) {
    int number = -1;
    int highScore = -1;
    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        throw FileIOError();
    }
    while (inputFile >> number) {
        if (number > highScore) {
            highScore = number;
        }
    }

    if (highScore == -1) {
        throw EmptyFileError();
    }

    return highScore;
}

int main() {
    string filename;
    cin >> filename;

    try {
        int highscore = getHighscore(filename);
        cout << "The high score is " << highscore << endl;
    }
    catch (FileIOError ex) {
        cout << "Could not open the scores file.\n";
    }
    catch (EmptyFileError ex) {
        cout << "The file is empty.\n";
    }
    return 0;
}