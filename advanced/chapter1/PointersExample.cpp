//
// Created by Isaac Kilis on 15/6/2025.
//

#include "PointersExample.h"
#include <iostream>

using namespace std;

int main() {
    int var = 20;
    int *int_ptr;

    int_ptr = &var; // Set int_ptr to the memory address of var
    cout << "Value of var: " << var << endl;
    cout << "Address of var (stored in int_ptr): " << int_ptr << endl;
    cout << "Accessing value of int_ptr using * operator: " << *int_ptr << endl;
    return 0;
}
