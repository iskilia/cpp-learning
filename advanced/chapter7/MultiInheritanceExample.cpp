//
// Created by Isaac Kilis on 21/6/2025.
//

#include "MultiInheritanceExample.h"
#include <iostream>

using namespace std;

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

// Base Class 2
class PaintCost {
    public:
        int getCost(int area) {
            return area * 70;
        }
};

// Derived Class
class Rectangle : public Shape, public PaintCost {
    public:
        int getArea() {
            return width * height;
        }
};

int main() {
    int area;
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(10);

    area = rect.getArea();

    cout << area << endl;
    cout << rect.getCost(area) << endl;
    return 0;
}