//
// Created by Isaac Kilis on 2/7/2025.
//

#ifndef COPYCONSTRUCTORASPRIVATE_H
#define COPYCONSTRUCTORASPRIVATE_H

#include <stddef.h>

class String {
    private:
        char * s;
        int size;
    public:
        String(const char * str = NULL);
        ~String(); // Destructor
        void print() const; // Function to print string
        void change(const char * str); // Function to change string
};



#endif //COPYCONSTRUCTORASPRIVATE_H
