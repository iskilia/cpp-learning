//
// Created by Isaac Kilis on 5/6/2025.
//

#include "toUpperExample.h"
#include <iostream>
#include <cctype>

int main() {
    for (char c = 'a'; c <= 'z'; c++) {
        char upper = toupper(c); // toupper returns an int so you need to cast it to a char
        std::cout << upper << '\n';
    }
    return 0;
}
