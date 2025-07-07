//
// Created by Isaac Kilis on 7/7/2025.
//

#include "Example3.h"
#include <iostream>

using namespace std;

class Test {
    static int count;
    int id;
    public:
        Test() {
            count++;
            id = count;
            cout << "Constructing object number " << id << endl;
            if (id == 4) {
                throw id;
            }
        }

        ~Test() {
            cout << "Destructing object number " << id << endl;
        }
};

int Test::count = 0;

int main() {
    try {
        Test array[5];
    } catch (int i) {
        cout << "Caught " << i << endl;
    }
    return 0;
}

/*
Output:
Constructing object number 1
Constructing object number 2
Constructing object number 3
Constructing object number 4
Destructing object number 3
Destructing object number 2
Destructing object number 1
Caught 4
*/