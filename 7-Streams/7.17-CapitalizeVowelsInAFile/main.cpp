// File I/O

// In this exercise you are going to read a file containing text. You will capitalize all the vowels in the text and save it as a new file: output.txt.

// Sample input file would contain:

// This is a string.
// Input is:

// string1.txt
// Your output in output.txt should contain:

// ThIs Is A strIng.
// Some hints:

// Read each line from the file into a string
// Scan through the string and replace lowercase vowels with uppercase ones (use if-else or switch statement)

#include <iostream>
#include <fstream>
#include <string>

#define MAX_SIZE 100

using namespace std;

string convert(string str_in)
{
     //Complete function to capitalized all vowels
     for (int i = 0; i < str_in.size(); i++) {
        if (str_in[i] == 'a') {
            str_in[i] = 'A';
        }
        else if (str_in[i] == 'e') {
            str_in[i] = 'E';
        }
        else if (str_in[i] == 'i') {
            str_in[i] = 'I';
        }
        else if (str_in[i] == 'o') {
            str_in[i] = 'O';
        }
        else if (str_in[i] == 'u') {
            str_in[i] = 'U';
        }
     }

     return str_in;
}

int main(){

    string filename;

    //get the file name from the user
    cin >> filename;
    //create an ifstream object and open the file
    ifstream input;
    input.open(filename);
    //check whether the file is open successfully, if not, exit the program
    if (!input.is_open())
    {
        // Print an error and exit
        cerr << "File not found!" << endl;
        exit(1);
    }
    
    //open the output file
    ofstream output;
    output.open("output.txt");
    
    //Read lines from file and capitalize all vowels
    string line {};
    getline(input, line); // read first line
    while (!input.fail()) {
        output << convert(line);
        getline(input, line);
    }
    
    // //Output the converted text (hint: you may output it at the same time of reading and conversion line-by-line)
    
    
    //Close file streams
    input.close();
    output.close();

    return 0;
}
