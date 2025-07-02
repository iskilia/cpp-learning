//
// Created by Isaac Kilis on 2/7/2025.
//

#include "CopyConstructorAsPublic.h"
#include <iostream>
#include <cstring>

using namespace std;

String::String(const char * str) {
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
};

void String::change(const char * str) {
    delete []s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
};

void String::print() const {
    cout << s << endl;
}

String::~String() {
    delete []s;
}

String::String(const String& old_str) {
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
};

int main(void) {
    String s1 = String("Hello world!");
    String s2 = s1;
    s1.print(); // Hello world!
    s2.print(); // Hello world!
    s2.change("Foo bar!");
    s1.print(); // Hello world!
    s2.print(); // Foo bar!
    return 0;
}

