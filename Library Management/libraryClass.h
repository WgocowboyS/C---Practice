#ifndef LIBRARYCLASS_H
#define LIBRARYCLASS_H

#include "patronClass.h"
#include "bookClass.h"
#include <string>
#include <vector>

using namespace std;

class library{
    //declare private variables
    private:
    vector <book> allLibraryBooks;
    vector <patron> allPatrons;

    //public 
    public:
    //constructor
    library();

    //get functions
    vector <book> getLibraryBooks();
    vector <patron> getAllPatrons();

    //sets
    void addBook(book bookToAdd);
    void removeBook(book bookToRemove);
    void addPatron(patron patronToAdd);
    void removePatron(patron patronToRemove);
    void checkOutBook(book bookToCheckout, patron patronWhoChecksOut);
    void returnBook (book bookToReturn, patron patronWhoReturns);

};

#endif