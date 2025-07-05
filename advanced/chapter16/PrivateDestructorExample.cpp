//
// Created by Isaac Kilis on 5/7/2025.
//

#include "PrivateDestructorExample.h"
#include <iostream>

using namespace std;

class Test {
    private:
        ~Test() {
            cout << "Test deleted" << endl;
        }
        friend void destructTest(Test *);
};

// Only this function can destruct objects of Test
void destructTest(Test * ptr) {
    delete ptr;
}

int main() {
    Test* ptr = new Test;
    destructTest(ptr);
    return 0;
}