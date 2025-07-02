//
// Created by Isaac Kilis on 2/7/2025.
//

#include "ParameterisedConstructorExample.h"
#include <iostream>

using namespace std;

class Point{
    public:
        Point(int a, int b) {
            this -> a = a;
            this -> b = b;
        }
        int getA() const {
            return a;
        }
        int getB() const {
            return b;
        }

    private:
        int a;
        int b;
};

int main(void) {
    Point p(10, 15); // Or can be re-written as Point p = Point(10, 15);
    cout << "p.x= " << p.getA() << ", p.y= " << p.getB() <<endl;
    return 0;
}