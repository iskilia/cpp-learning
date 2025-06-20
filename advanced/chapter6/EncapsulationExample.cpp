//
// Created by Isaac Kilis on 20/6/2025.
//

#include "EncapsulationExample.h"
#include <iostream>

using namespace std;

class Adder {
    public:
        // Constructor
        Adder(int i = 0) {
            total = i;
        }

        // interface to the outside world
        void addNum(int num) {
            total += num;
        }

        // interface to the outside world
        int getTotal() {
            return total;
        }
    private:
        int total;
};

int main() {
    Adder a;
    a.addNum(10);
    cout << a.getTotal() << endl;
    a.addNum(20);
    cout << a.getTotal() << endl;
    return 0;
}