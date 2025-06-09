//
// Created by Isaac Kilis on 9/6/2025.
//

#include "StringMethods.h"
#include <string>
#include <iostream>

using std::string;

void printIfStringIsEmpty(const string w) {
    if (w.empty()) {
        std::cout << "word is empty" << '\n';
    } else {
        std::cout << "word is not empty" << '\n';
    }
}

int main() {
    string word = "frank";

    std::cout << word << '\n';

    printIfStringIsEmpty(word);

    word.clear();

    printIfStringIsEmpty(word);

    word = "high"; // Re-assign word to value high

    word += "-quality";

    // Print out the word, first and last character of the word
    std::cout << word << word[0] << word[word.length()-1] << '\n';
    // Prints out the substring from the second index onwards for 5 characters
    std::cout << word.substr(2, 5);

    string first = "ABC", last = "XYZ";
    // Splice two strings with + operator
    std::cout << first + last << '\n';
    //
    std::cout << "Compare " << first << " and ABC: ";
    if (first == "ABC")
        std::cout << "equal\n";
    else
        std::cout << "not equal\n";
    std::cout << "Compare " << first << " and XYZ: ";
    if (first == "XYZ")
        std::cout << "equal\n";
    else
        std::cout << "not equal\n";

    return 0;
}