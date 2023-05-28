#include "bookClass.h"
#include "patronClass.h"
#include "libraryClass.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

library::library()
{
    // nothing to do
}

// get functions
vector<book> library::getLibraryBooks()
{
    return allLibraryBooks;
}

vector<patron> library::getAllPatrons()
{
    return allPatrons;
}

// returns -1 if not present in list
patron library::getPatronById(int id)
{
    int index = -1;
    for (int i = 0; i < allPatrons.size(); i++)
    {
        if (id == allPatrons[i].getId())
            index == i;
    }

    return allPatrons[index];
}

book library::getBookById(int id)
{
    int index = -1;
    for (int i = 0; i < allLibraryBooks.size(); i++)
    {
        if (id == allLibraryBooks[i].getId())
            index == i;
    }

    return allLibraryBooks[index];
}

// set functions
void library::addBook(book bookToAdd)
{
    allLibraryBooks.push_back(bookToAdd);
}

void library::addPatron(patron patronToAdd)
{
    allPatrons.push_back(patronToAdd);
}

void library::removePatron(patron patronToRemove)
{
    int index = -1;
    for (int i = 0; i < allPatrons.size(); i++)
    {
        if (allPatrons[i].getId() == patronToRemove.getId())
            index = i;
        allPatrons.erase(allPatrons.begin() + index);
    }
}

void library::checkOutBook(book bookToCheckout, patron patronWhoChecksout)
{
    bookToCheckout.setStatus(true);
    patronWhoChecksout.checkOutBook(bookToCheckout);
}

void library::returnBook(book bookToReturn, patron patronWhoReturns)
{
    bookToReturn.setStatus(false);
    patronWhoReturns.returnBook(bookToReturn);
}

void library::printAllBooks()
{
    for (int i = 0; i < allLibraryBooks.size(); i++)
    {
        cout << "Book " << i + 1 << ":" << endl;
        allLibraryBooks[i].printBook();
    }
}

void library::printAllPatrons()
{
    for (int i = 0; i < allPatrons.size(); i++)
    {
        cout << "Patron: " << i + 1 << endl;
        allPatrons[i].printPatron();
    }
}