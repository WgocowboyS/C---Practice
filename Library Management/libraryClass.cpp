#include "bookClass.h"
#include "patronClass.h"
#include "libraryClass.h"
#include <string>
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
    int index = 0;
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