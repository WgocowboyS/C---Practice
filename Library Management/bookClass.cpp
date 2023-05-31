#include "bookClass.h"
#include <iostream>

using namespace std;

// constructor
book::book(string title, string author, string genre, bool checkedOut, int id)
    : title(title),
      author(author),
      genre(genre),
      checkedOut(checkedOut),
      id(id)
{
    // body of constructor (optional)
}

// getter functions
string book::getTitle()
{
    return title;
}

string book::getAuthor()
{
    return author;
}

string book::getGenre()
{
    return genre;
}

bool book::getStatus()
{
    return checkedOut;
}

int book::getId()
{
    return id;
}

// setter functions
void book::setStatus(bool Status)
{
    checkedOut = Status;
}

void book::printBook()
{
    cout << "Title: " << title << "\tAuthor: " << author
         << "\tGenre: " << genre << "\t Checked Out: " << checkedOut << "\t"
         << "Book ID: " << id << endl;
}