//
// Created by Isaac Kilis on 5/7/2025.
//

#include "DestructorExample.h"
#include <iostream>
#include <cstring> // For strlen and strcpy
class String {
    private:
        char* s;
        int size;
    public:
        // Constructor
        String(const char* str = nullptr) { // Added const and nullptr default
            if (str) {
                size = std::strlen(str);
                s = new char[size + 1];
                std::strcpy(s, str);
                std::cout << "Constructor called for: " << s << std::endl;
            } else {
                s = nullptr;
                size = 0;
                std::cout << "Default constructor called." << std::endl;
            }
        }

        // Destructor
        ~String() {
            if (s) { // Check if s is not nullptr before deleting
                std::cout << "Destructor called for: " << s << std::endl;
                delete[] s;
                s = nullptr; // Good practice to nullify after delete
            } else {
                std::cout << "Destructor called for empty string." << std::endl;
            }
        }

        void print() { std::cout << s << std::endl; }
};

int main() {
    String str1("Hello"); // Constructor called
    String str2("World"); // Constructor called

    // When main ends, str1 and str2 go out of scope,
    // their destructors will be called automatically.
    return 0;
}