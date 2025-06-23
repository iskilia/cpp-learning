//
// Created by Isaac Kilis on 23/6/2025.
//

#include "RelationalOperatorExample.h"
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

        bool operator<(const Distance &other) {
            if (feet < other.feet) {
                return true;
            }
            if (feet == other.feet && inches < other.inches) {
                return true;
            }
            return false;
        }
};

int main() {
    Distance D1(11, 10), D2(-5, 11);
    if (D1 < D2) {
        cout << "D1 is less than D2" << endl;
    } else {
        cout << "D1 is greater than D2" << endl;
    }
    return 0;
}