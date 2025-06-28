//
// Created by Isaac Kilis on 28/6/2025.
//

#include "AbstractionExample.h"
#include <iostream>

using namespace std;

class Adder {
    private:
        int total;
    public:
        Adder(int i = 0): total(i) {}
        void add(int i) {
            total += i;
        }
        int getTotal() {
            return total;
        }
};

int main() {
    Adder adder(5);
    cout << adder.getTotal() << endl;
    adder.add(5);
    cout << adder.getTotal() << endl;
    return 0;
}