//
// Created by Isaac Kilis on 10/6/2025.
//
#include "LinkedListExample.h"
#include <iostream>

LinkedListExample::LinkedListExample() {
    head = nullptr;
    tail = nullptr;
    len = 0;
}

LinkedListExample::~LinkedListExample() {
    this->clear();
}

void LinkedListExample::insert(int data) {
    if (head == nullptr) {
        head = new Node(data, nullptr);
        tail = head;
    } else {
        tail->next = new Node(data, nullptr);
        tail = tail->next;
    }
    len++;
}


void LinkedListExample::print() const {
    std::cout << len << '\n';
    for (Node *cursor = head; cursor != nullptr; cursor = cursor->next) {
        std::cout << cursor->data << ", ";
    }
    std::cout << '\n';
}

int LinkedListExample::length() const {
    return len;
}

void LinkedListExample::clear() {
    if (head != nullptr) {
        Node *cursor = head;
        while (cursor != nullptr) {
            Node *next = cursor->next;
            delete cursor;
            cursor = next;
        }
        head = nullptr;
        tail = nullptr;
        len = 0;
    }
}