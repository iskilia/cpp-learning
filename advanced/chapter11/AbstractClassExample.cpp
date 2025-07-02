//
// Created by Isaac Kilis on 2/7/2025.
//

#include "AbstractClassExample.h"
#include <iostream>

using namespace std;

// Base Class
class Shape {
    public:
        // pure virtual function for the framework
        virtual int getArea() = 0;
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

// Derived class
class Triangle : public Shape {
public:
    int getArea() {
        return (width * height) / 2;
    }
};

int main(void) {
    Rectangle r;
    Triangle t;
    r.setWidth(5);
    r.setHeight(5);
    cout << "Total Rectangle Area: " << r.getArea() << endl;

    t.setWidth(5);
    t.setHeight(5);
    cout << "Total Triangle Area: " << t.getArea() << endl;
    return 0;
}