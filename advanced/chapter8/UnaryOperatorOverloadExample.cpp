//
// Created by Isaac Kilis on 23/6/2025.
//

#include "UnaryOperatorOverloadExample.h"
#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        int inches;
    public:
        Distance() {
            feet = 0;
            inches = 0;
        }

        Distance(int feet, int inches) {
            this->feet = feet;
            this->inches = inches;
        }

        void displayDistance() {
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        }

        Distance operator-() {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
};

int main() {
    Distance D1(11, 10), D2(-5, 11);
    D1.displayDistance();
    -D1;
    D1.displayDistance();
    D2.displayDistance();
    -D2;
    D2.displayDistance();
    return 0;
}