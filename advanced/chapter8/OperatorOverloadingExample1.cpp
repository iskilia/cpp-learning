//
// Created by Isaac Kilis on 23/6/2025.
//

#include "OperatorOverloadingExample1.h"
#include <iostream>

using namespace std;

class Triangle {
    public:
        double getArea(void) {
            return 0.5 * length * breadth * height;
        }

        double getLength() {
            return length;
        }

        double getHeight() {
            return height;
        }

        double getBreadth() {
            return breadth;
        }

        void setLength(double l) {
            length = l;
        }

        void setBreadth(double b) {
            breadth = b;
        }

        void setHeight(double h) {
            height = h;
        }

        Triangle operator+(const Triangle &b) {
            Triangle t;
            t.setLength(this->length + b.length);
            t.setHeight(this->height + b.height);
            t.setBreadth(this->breadth + b.breadth);
            return t;
        }
    private:
        double length, breadth, height;
};

int main(void) {
    Triangle t1, t2, t3;
    t1.setLength(3.0);
    t1.setHeight(2.0);
    t1.setBreadth(2.0);

    t2.setLength(3.0);
    t2.setHeight(4.0);
    t2.setBreadth(5.0);

    cout << "t1 area is " << t1.getArea() << endl;
    cout << "t2 area is " << t2.getArea() << endl;

    t3 = t1 + t2;
    cout << "t3 area is " << t3.getArea() << endl;
    return 0;
}