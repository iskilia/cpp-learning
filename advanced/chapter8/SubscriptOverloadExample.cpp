//
// Created by Isaac Kilis on 23/6/2025.
//

#include "SubscriptOverloadExample.h"
#include <iostream>
using namespace std;

const int SIZE = 10;

class SafeArray {
    private:
        int arr[SIZE];
    public:
        SafeArray() {
            for (int i = 0; i < SIZE; i++) {
                arr[i] = i;
            }
        }

        int &operator[](int index) {
            if (index < 0 || index >= SIZE) {
                cout << "index out of bounds" << endl;
                return arr[0];
            }
            return arr[index];
        }
};

int main() {
    SafeArray sa;
    cout << sa[0] << endl;
    cout << sa[11] << endl;
    cout << sa[-1] << endl;
    cout << sa[5] << endl;
    return 0;
}
