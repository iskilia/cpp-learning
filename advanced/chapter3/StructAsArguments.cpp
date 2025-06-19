//
// Created by Isaac Kilis on 19/6/2025.
//

#include "StructAsArguments.h"
#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    int book_id;
    char book_title[50];
    char genre[50];
    char author[100];
};

void printBook(struct Books book) {
    cout << "Book ID: " << book.book_id << endl;
    cout << "Book Title: "<< book.book_title << endl;
    cout << "Book Genre: " << book.genre << endl;
    cout << "Book Author: " << book.author << endl;
}

int main() {
    struct Books book1;
    struct Books book2;

    book1.book_id = 120000;
    strcpy(book1.book_title, "Harry Potter and the Philosopher’s Stone");
    strcpy(book1.genre, "Fiction");
    strcpy(book1.author, "JK Rowling");

    book2.book_id = 130000;
    strcpy(book2.book_title, "Harry Potter and the Philosopher’s Stone");
    strcpy(book2.genre, "Fiction");
    strcpy(book2.author, "JK Rowling");

    printBook(book1);
    printBook(book2);
    return 0;
}