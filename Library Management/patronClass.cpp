#include "patronClass.h"
#include "bookClass.h"
#include <vector>
#include <string>

using namespace std;

// constructor

patron::patron(string name, int id, vector<book> checkedOutBooks)
    : name(name),
      id(id),
      checkedOutBooks(checkedOutBooks)
{
    // main body of code
}

// getter functions
string patron::getName()
{
    return name;
}

int patron::getId()
{
    return id;
}

vector<book> patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

// setter functions

// pushes the checked out book to the end of a vector
void patron::checkOutBook(book bookToCheckOut)
{
    checkedOutBooks.push_back(bookToCheckOut);
}

void patron::returnBook(book bookToReturn)
{
    int index = 0;
    for (int i = 0; i < checkedOutBooks.size(); i++)
    {
        if (checkedOutBooks[i].getId() == bookToReturn.getId())
            index = i;
    }
    // erase removes the element at the given location
    checkedOutBooks.erase(checkedOutBooks.begin() + index);
}