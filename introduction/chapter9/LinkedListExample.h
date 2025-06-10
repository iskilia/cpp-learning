//
// Created by Isaac Kilis on 10/6/2025.
//

#ifndef LINKEDLISTEXAMPLE_H
#define LINKEDLISTEXAMPLE_H

class LinkedListExample {
    struct Node {
        int data;
        Node* next;

        Node(int data, Node* next) : data(data), next(next) {}
    };
    Node *head;
    Node *tail;
    int len;
public:
    LinkedListExample();
    ~LinkedListExample();
    void insert(int data);
    void print() const;
    int length() const;
    void clear();
};

#endif //LINKEDLISTEXAMPLE_H
