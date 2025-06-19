//
// Created by Isaac Kilis on 19/6/2025.
//

#include "StructPointersExample.h"
#include <memory>
#include <iostream>
#include <cstring>

struct Books {
    int book_id;
    char book_title[50];
    char genre[50];
    char author[100];
};

void printBook(struct Books * book) {
    std::cout << "Book ID: " << book->book_id << std::endl;
    std::cout << "Book Title: "<< book->book_title << std::endl;
    std::cout << "Book Genre: " << book->genre << std::endl;
    std::cout << "Book Author: " << book->author << std::endl;
}

int main() {
    struct Books book1;
    struct Books book2;
    std::unique_ptr<Books> book3 = std::make_unique<Books>();

    book1.book_id = 120000;
    std::strcpy(book1.book_title, "Harry Potter and the Philosopher’s Stone");
    std::strcpy(book1.genre, "Fiction");
    std::strcpy(book1.author, "JK Rowling");

    book2.book_id = 130000;
    std::strcpy(book2.book_title, "Harry Potter and the Philosopher’s Stone");
    std::strcpy(book2.genre, "Fiction");
    std::strcpy(book2.author, "JK Rowling");

    book3->book_id = 140000;
    std::strcpy(book3->book_title, "Harry Potter and the Philosopher’s Stone");
    std::strcpy(book3->genre, "Fiction");
    std::strcpy(book3->author, "JK Rowling");

    printBook(&book1);
    printBook(&book2);
    printBook(book3.get());
    return 0;
}