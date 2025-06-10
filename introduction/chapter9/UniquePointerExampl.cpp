//
// Created by Isaac Kilis on 10/6/2025.
//

#include "UniquePointerExampl.h"
#include <iostream>
#include <memory> // For std::unique_ptr

class MyClass {
    public:
        MyClass(int val) : value(val) {
            std::cout << "MyClass constructor: " << value << '\n';
        }
        ~MyClass() {
            std::cout << "MyClass destructor: " << value << '\n';
        }
        void doSomething() {
            std::cout << "Doing something with value: " << value << '\n';
        }
    private:
        int value;
};

void processUniquePtr() {
    // Creating a unique_ptr
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>(10);
    ptr1->doSomething(); // Accessing member functions

    // Moving ownership (ptr1 becomes null, ptr2 now owns the object)
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);

    if (ptr1) {
        std::cout << "ptr1 is valid." << '\n';
    } else {
        std::cout << "ptr1 is invalid." << '\n';
    }

    // When ptr2 goes out of scope, the MyClass object (value 10) is automatically deleted.
} // MyClass destructor for value 10 is called here

int main() {
    processUniquePtr();
    return 0;
}