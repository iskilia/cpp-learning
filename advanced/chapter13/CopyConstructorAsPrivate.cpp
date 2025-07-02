//
// Created by Isaac Kilis on 2/7/2025.
//

#include "CopyConstructorAsPrivate.h"
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

int main(void) {
    String s1 = String("Hello world!");
    String s2 = s1;
    s1.print(); // Hello world!
    s2.print(); // Hello world!
    s2.change("Foo bar!");
    s1.print(); // Foo bar!
    s2.print(); // Foo bar!
    return 0;
}
/**
* ╰ ./a.out
Hello world!
Hello world!
Foo bar!
Foo bar!
a.out(11943,0x7ff85a18ef80) malloc: *** error for object 0x600002b20040: pointer being freed was not allocated
a.out(11943,0x7ff85a18ef80) malloc: *** set a breakpoint in malloc_error_break to debug
[1]    11943 abort      ./a.out
 */
