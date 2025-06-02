//
// Created by Isaac Kilis on 2/6/2025.
//

#include "difference_in_primitive_types.h"
#include <iostream>

int main() {
    // Sends the Integer 5 and then the characters of \n to stdout
    std::cout << 5 << '\n';

    // Sends the string containing the digit 5. What is on the console is the same as above.
    std::cout << "5\n";

    // Code won't compile below since the number is too large for the computer memory. You will get an
    // error like:
    // error: integer literal is too large to be represented in any integer typ
    std::cout << -900000000000000000000000 << '\n';
}
