//
// Created by Isaac Kilis on 5/6/2025.
//

#include "staticExample.h"
#include <iostream>
#include <iomanip>

int count() {
    static int count = 0;
    return ++count;
}

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << count() << '\n';
    }
    return count();
}