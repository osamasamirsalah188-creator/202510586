#include "LibraryBook.h"
#include <iostream>
using namespace std;

LibraryBook::LibraryBook() : bookID(0), title(""), author(""), borrowerName(""),
    daysBorrowed(0), borrowStatus(false) {}

LibraryBook::LibraryBook(int id, string t, string a) : bookID(id), title(t), author(a),
    borrowerName(""), daysBorrowed(0), borrowStatus(false) {}

LibraryBook::~LibraryBook() {
    cout << "Book object with ID " << bookID << " destroyed." << endl;
}

// Getters
int LibraryBook::getBookID() const { return bookID; }
string LibraryBook::getTitle() const { return title; }
string LibraryBook::getAuthor() const { return author; }
string LibraryBook::getBorrowerName() const { return borrowerName; }
int LibraryBook::getDaysBorrowed() const { return daysBorrowed; }
bool LibraryBook::isBorrowed() const { return borrowStatus; }

// Setters
void LibraryBook::setBorrowerName(string name) { borrowerName = name; }
void LibraryBook::setDaysBorrowed(int days) { daysBorrowed = days; }
void LibraryBook::setBorrowStatus(bool status) { borrowStatus = status; }

// Methods
void LibraryBook::borrowBook(string borrower, int days) {
    if (!borrowStatus) {
        borrowerName = borrower;
        daysBorrowed = days;
        borrowStatus = true;
        cout << "Book borrowed successfully!" << endl;
    } else {
        cout << "Book already borrowed!" << endl;
    }
}

void LibraryBook::returnBook() {
    borrowerName = "";
    daysBorrowed = 0;
    borrowStatus = false;
    cout << "Book returned successfully!" << endl;
}

bool LibraryBook::isOverdue(int maxDays) const {
    return borrowStatus && daysBorrowed > maxDays;
}

int LibraryBook::calculateFine(int maxDays, int finePerDay) const {
    if (isOverdue(maxDays)) {
        return (daysBorrowed - maxDays) * finePerDay;
    }
    return 0;
}
