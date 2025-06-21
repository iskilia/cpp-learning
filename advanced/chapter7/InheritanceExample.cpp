//
// Created by Isaac Kilis on 21/6/2025.
//

#include "InheritanceExample.h"
#include <iostream>

// Base Class
class Shape {
    public:
        void setWidth(int width) {
            this->width = width;
        }
        void setHeight(int height) {
            this->height = height;
        }
    protected:
        int width;
        int height;
};

// Derived class
class Rectangle : public Shape {
    public:
        int getArea() {
            return width * height;
        }
};

int main() {
    Rectangle r;
    r.setWidth(5);
    r.setHeight(10);
    std::cout << r.getArea() << std::endl;
    return 0;
}