//
// Created by Isaac Kilis on 19/6/2025.
//

#include "StructExample.h"
#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    int book_id;
    char book_title[50];
    char genre[50];
    char author[100];
};

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

    cout << "Book 1 id: " << book1.book_id << endl;
    cout << "Book 1 title: " << book1.book_title << endl;
    cout << "Book 1 genre: " << book1.genre <<endl;
    cout << "Book 1 author: " << book1.author <<endl;
    cout << "Book 2 id: " << book2.book_id <<endl;
    cout << "Book 2 title: " << book2.book_title << endl;
    cout << "Book 2 genre: " << book2.genre <<endl;
    cout << "Book 2 author: " << book2.author <<endl;
    return 0;
}