#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>
using namespace std;

class LibraryBook {
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool borrowStatus; // true = borrowed, false = available

public:
    // Constructors
    LibraryBook();
    LibraryBook(int id, string t, string a);

    // Destructor
    ~LibraryBook();

    // Getters & Setters
    int getBookID() const;
    string getTitle() const;
    string getAuthor() const;
    string getBorrowerName() const;
    int getDaysBorrowed() const;
    bool isBorrowed() const;

    void setBorrowerName(string name);
    void setDaysBorrowed(int days);
    void setBorrowStatus(bool status);

    // Methods
    void borrowBook(string borrower, int days);
    void returnBook();
    bool isOverdue(int maxDays) const;
    int calculateFine(int maxDays, int finePerDay) const;
};

#endif
