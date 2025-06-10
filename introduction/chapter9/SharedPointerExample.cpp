//
// Created by Isaac Kilis on 10/6/2025.
//

#include "SharedPointerExample.h"
#include <iostream>
#include <memory> // For std::shared_ptr

class Gadget {
    public:
        Gadget(std::string name) : name_(name) {
            std::cout << "Gadget constructor: " << name_ << '\n';
        }
        ~Gadget() {
            std::cout << "Gadget destructor: " << name_ << '\n';
        }
        void use() {
            std::cout << "Using gadget: " << name_ << '\n';
        }
    private:
        std::string name_;
};

void funcA(std::shared_ptr<Gadget> g) { // This is a copy, so ref count increases
    std::cout << "  Inside funcA. Gadget ref count: " << g.use_count() << '\n';
    g->use();
} // g goes out of scope, ref count decreases

void funcB(const std::shared_ptr<Gadget>& g) { // Takes a reference, no ref count change
    std::cout << "  Inside funcB. Gadget ref count: " << g.use_count() << '\n';
    g->use();
}

int main() {
    std::cout << "Starting shared_ptr example" << '\n';
    std::shared_ptr<Gadget> g = std::make_shared<Gadget>("SuperTool"); // Ref count = 1
    std::cout << "Main: Gadget ref count after creation: " << g.use_count() << '\n';

    { // New scope
        std::shared_ptr<Gadget> anotherGadget = g; // Copy, ref count = 2
        std::cout << "Main: Gadget ref count after copy: " << g.use_count() << '\n';
        funcA(anotherGadget); // Passes by value (copy), ref count becomes 3 temporarily, then 2
        std::cout << "Main: Gadget ref count after funcA: " << g.use_count() << '\n';
    } // anotherGadget goes out of scope, ref count = 1

    funcB(g); // Passed by reference, so ref count remains 1
    std::cout << "Main: Gadget ref count after funcB: " << g.use_count() << '\n';
    // When g goes out of scope, the ref count becomes 0, and the Gadget object is deleted.
    std::cout << "Finished shared_ptr example." << std::endl;
    return 0;
} // g's destructor is called here