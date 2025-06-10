//
// Created by Isaac Kilis on 10/6/2025.
//

#include "WeakPointerExample.h"
#include <iostream>
#include <memory> // For std::shared_ptr and std::weak_ptr

class Resource {
    public:
        Resource(std::string id) : id_(id) {
            std::cout << "Resource constructor: " << id_ << '\n';
        }
        ~Resource() {
            std::cout << "Resource destructor: " << id_ << '\n';
        }
        void use() {
            std::cout << "Using resource: " << id_ << '\n';
        }
    private:
        std::string id_;
};

int main() {
    std::cout << "Starting weak_ptr example:" << '\n';
    std::shared_ptr<Resource> sharedRes = std::make_shared<Resource>("MainResource");
    std::cout << "Shared resource ref count: " << sharedRes.use_count() << '\n';

    std::weak_ptr<Resource> weakRes = sharedRes; // weakRes observes sharedRes, doesn't increase ref count
    std::cout << "Weak resource is observing. Shared resource ref count: " << sharedRes.use_count() << '\n';

    if (auto lockedRes = weakRes.lock()) { // Try to get a shared_ptr from weak_ptr
        std::cout << "Resource is still alive. Accessing via locked_ptr:" << '\n';
        lockedRes->use();
    } else {
        std::cout << "Resource is no longer alive." << '\n';
    }

    sharedRes.reset(); // Explicitly release ownership from sharedRes, ref count becomes 0
    std::cout << "Shared resource has been reset. Shared resource ref count: " << sharedRes.use_count() << '\n';

    if (auto lockedRes = weakRes.lock()) { // Try again to get a shared_ptr
        std::cout << "Resource is still alive. Accessing via locked_ptr:" << '\n';
        lockedRes->use();
    } else {
        std::cout << "Resource is no longer alive." << '\n'; // This will be printed
    }

    std::cout << "Finished weak_ptr example." << '\n';
    return 0;
}