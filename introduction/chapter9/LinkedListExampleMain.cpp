//
// Created by Isaac Kilis on 10/6/2025.
//

#include "LinkedListExample.h"
#include <iostream>

int main() {
    /*
    Node x4(3, nullptr), // Make the last node
        x3(0, &x4), // Make the next to last node and link to last node x2(5, &x3), // Make the second node and link to third node
        x1(13, &x2); // Make the first node and link to second node
    // Print the linked list built from the Node objects
    for (Node *cursor = &x1; cursor != nullptr; cursor = cursor->next)
        std::cout << cursor->data << ' ';
    std::cout << '\n';
    */
    LinkedListExample ll = LinkedListExample();
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.print();
    ll.clear();
    ll.print();
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.print();
    return 0;
}
