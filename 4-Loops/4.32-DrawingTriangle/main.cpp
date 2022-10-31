/*
    This program will output a right triangle based on user specified height triangleHeight and symbol triangleChar.

    (1) The given program outputs a fixed-height triangle using a * character.
        Modify the given program to output a right triangle that instead uses the user-specified triangleChar character.

    (2) Modify the program to use a nested loop to output a right triangle of height triangleHeight.
        The first line will have one user-specified character, such as % or *.
        Each subsequent line will have one additional user-specified character until the number in the triangle's base reaches triangleHeight.
        Output spaces before each user-specified character, excluding the line last, so that the right edge of the triangle is aligned.

*/

#include <iostream>

int main() {
    char triangleChar {};
    int triangleHeight {};

    std::cout << "Enter a character:" << std::endl;
    std::cin >> triangleChar;

    std::cout << "Enter triangle height:" << std::endl;
    std::cin >> triangleHeight;
    std::cout << std::endl;

    for (size_t i {0}; i < triangleHeight; i++) {

        for (size_t j = (triangleHeight - 1) - i; j > 0; j--) {
            std::cout << " ";
        }

        for (size_t k {0}; k < i + 1; k++) {
            std::cout << triangleChar;
        }

        std::cout << std::endl;
    }

    return 0;
}