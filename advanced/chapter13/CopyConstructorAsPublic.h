//
// Created by Isaac Kilis on 2/7/2025.
//

#ifndef COPYCONSTRUCTORASPUBLIC_H
#define COPYCONSTRUCTORASPUBLIC_H
#include <stddef.h>


class String {
    private:
        char * s;
        int size;
    public:
        String(const char * str = NULL);
        String(const String & old_str); // Copy Constructor
        ~String(); // Destructor
        void print() const; // Function to print string
        void change(const char * str); // Function to change string
};



#endif //COPYCONSTRUCTORASPUBLIC_H
