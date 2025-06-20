//
// Created by Isaac Kilis on 20/6/2025.
//

#include "CppClassExample.h"
#include <iostream>

class Triangle {
    public:
        double length;
        double width;
        double height;
};

int main() {
    Triangle triangle1;
    Triangle triangle2;

    double volume = 0.0;
    triangle1.length = 2.0;
    triangle1.width = 2.0;
    triangle1.height = 2.0;

    triangle2.length = 3.0;
    triangle2.width = 3.0;
    triangle2.height = 3.0;

    volume = triangle1.width * triangle1.height * triangle1.length;
    std::cout << "Volume of triangle 1: " << volume << std::endl;

    volume = triangle2.width * triangle2.height * triangle2.length;
    std::cout << "Volume of triangle 2: " << volume << std::endl;
    return 0;
}