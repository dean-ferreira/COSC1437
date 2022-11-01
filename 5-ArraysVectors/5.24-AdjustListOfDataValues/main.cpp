/*
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This adjustment can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by dividing all values by the largest value. The input begins with an integer indicating the number of floating-point values that follow.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

5 30.0 50.0 10.0 100.0 65.0
the program will output:

0.30 0.50 0.10 1.00 0.65 
The 5 indicates that there are five floating-point values in the list, namely 30.0, 50.0, 10.0, 100.0, and 65.0. 100.0 is the largest value in the list, so each value is divided by 100.0.

For coding simplicity, follow every output value by a space, including the last one. You can also safely assume the number of input values will be less than or equal to 10.
*/

 #include <iostream>
 #include <vector>
 #include <iomanip>

 int main() {
    int numValues {};
    std::cin >> numValues;
    std::vector<double> values;

    double newValue {};
    for (int i = 0; i < numValues; i++) {
        std::cin >> newValue;
        values.push_back(newValue);
    }

    double largestValue {};
    for (int i = 0; i < numValues; i++) {
        if (i == 0) {
            largestValue = values.at(0);
        }
        else if (values.at(i) > largestValue) {
            largestValue = values.at(i);
        }
    }

    for (int i = 0; i < numValues; i++) {
        values.at(i) = values.at(i) / largestValue;
    }

    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < numValues; i++) {
        std::cout << values.at(i) << " ";
    }

    return 0;
 }