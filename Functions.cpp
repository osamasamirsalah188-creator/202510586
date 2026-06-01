#include "LibraryBook.h"
#include <iostream>
#include <vector>
using namespace std;

extern vector<LibraryBook> library; // declared in main.cpp

void addBook() {
    int id;
    string title, author;
    cout << "Enter Book ID: ";
    cin >> id;
    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);

    LibraryBook newBook(id, title, author);
    library.push_back(newBook);
    cout << "Book added successfully!" << endl;
}

void displayBooks() {
    for (auto &book : library) {
        cout << "ID: " << book.getBookID() << ", Title: " << book.getTitle()
             << ", Author: " << book.getAuthor()
             << ", Status: " << (book.isBorrowed() ? "Borrowed" : "Available") << endl;
    }
}


