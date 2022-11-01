/*
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. That list is followed by two more integers representing lower and upper bounds of a range. Your program should output all integers from the list that are within that range (inclusive of the bounds). For coding simplicity, follow each output integer by a comma, even the last one. The output ends with a newline. You can safely assume that the number of entered integers is always less than or equal to 10.

Ex: If the input is:

5 25 51 0 200 33
0 50
then the program will output:

25,0,33,
(the bounds are 0-50, so 51 and 200 are out of range and thus not output).
*/

#include <iostream>
#include <vector>

int main() {
    int numValues {};
    int lowerBound {};
    int upperBound {};
    std::cin >> numValues;
    std::vector<int> values;

    int newValue {};
    for (int i = 0; i < numValues; i++) {
        std::cin >> newValue;
        values.push_back(newValue);
    }

    std::cin >> lowerBound;
    std::cin >> upperBound;

    for (int i = 0; i < numValues; i++) {
        if (lowerBound <= values.at(i) && values.at(i) <= upperBound) {
            std::cout << values.at(i) << ",";
        }
    }

    std::cout << std::endl;
    
    return 0;
}