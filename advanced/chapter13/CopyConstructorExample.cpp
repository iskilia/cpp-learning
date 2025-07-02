//
// Created by Isaac Kilis on 2/7/2025.
//

#include "CopyConstructorExample.h"
#include <iostream>

using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int x, int y) : x(x), y(y) {}
        // Copy Constructor
        Point (const Point &p2) {
            x = p2.x;
            y = p2.y;
        }
        int getX() const { return x; }
        int getY() const { return y; }
};

int main(void) {
    Point p1 = Point(1, 2);
    Point p2 = p1; // Copy Constructor is called here
    cout << p1.getX() << " " << p1.getY() << endl;
    cout << p2.getX() << " " << p2.getY() << endl;
    return 0;
}