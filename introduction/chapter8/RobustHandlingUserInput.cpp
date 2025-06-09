//
// Created by Isaac Kilis on 9/6/2025.
//

#include "RobustHandlingUserInput.h"
#include <iostream>
#include <limits>

int main() {
    int a;
    std::cout << "Enter a number: ";
    while(!(std::cin >> a)) {
        // Report error and re-prompt
        std::cout << "Bad entry, please try again: ";
        std::cin.clear(); // Clear the input stream of the error state
        // Empty the keyboard buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };
    std::cout << "You entered: " << a << std::endl;
    return 0;
}