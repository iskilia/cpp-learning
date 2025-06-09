//
// Created by Isaac Kilis on 9/6/2025.
//

#include "SimpleFileExample.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void print_vector(const std::vector<int>& vec) {
    std::cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}

void save_vector(const std::string& filename, const std::vector<int>& vec) {
    // Open file for writing
    std::ofstream out(filename);
    if (out.good()) { // Make sure that the file was opened properly
        int n = vec.size();
        for (int i = 0; i < n; i++) {
            out << vec[i] << ' ';
        }
        out << '\n';
    } else {
        std::cerr << "Error opening file for writing:" << filename << '\n';
    }
}

void load_vector(const std::string& filename, std::vector<int>& vec) {
    std::ifstream in(filename);
    if (in.good()) {
        vec.clear();
        int value;
        while (in >> value) {
            vec.push_back(value);
        }
    } else {
        std::cerr << "Error opening file for reading:" << filename << '\n';
    }
}

int main() {
    std::vector<int> vec;
    bool done = false;
    char command;
    while (!done) {
        std::cout << "I)nsert <item> P)rint " << "S)ave <filename> L)oad <filename> " << "E)rase Q)uit: ";
        std::cin >> command;
        int value;
        std::string filename;
        switch (command) {
            case 'i':
            case 'I':
                std::cin >> value;
                vec.push_back(value);
                break;
            case 'p':
            case 'P':
                print_vector(vec);
                break;
            case 'l':
            case 'L':
                std::cin >> filename;
                load_vector(filename, vec);
                break;
            case 's':
            case 'S':
                std::cin >> filename;
                save_vector(filename, vec);
                break;
            case 'e':
            case 'E':
                vec.clear();
                break;
            case 'q':
            case 'Q':
                done = true;
                break;
        }
    }
    return 0;
}