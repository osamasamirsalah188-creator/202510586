#include "LibraryBook.h"
#include "Functions.h"
#include <iostream>
#include <vector>
using namespace std;

vector<LibraryBook> library; // global vector of books

int main() {
    int choice;
    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add New Book\n2. Display All Books\n3. Borrow Book\n4. Return Book\n";
        cout << "5. Search Book by ID\n6. Display Overdue Books\n7. Calculate Total Fines\n8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: borrowBookMenu(); break;
            case 4: returnBookMenu(); break;
            case 5: searchBook(); break;
            case 6: displayOverdueBooks(); break;
            case 7: calculateTotalFines(); break;
        }
    } while(choice != 8);

    return 0;
}
