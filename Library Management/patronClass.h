#ifndef PATRONCLASS_H
#define PATRONCLASS_H

#include "bookClass.h"
#include <string>
#include <vector>
using namespace std;

class patron{

//private data variables
    private:
    string name;
    int id;
    vector <book> checkedOutBooks;
    
//public data variables
    public:
    //constructor
    patron(string name, int id, vector <book> checkedOutBooks);

    //get functions
    string getName();
    int getId();
    vector<book> getCheckedOutBooks();

    //set functions
    void checkOutBook(book bookToCheckOut);
    void returnBook(book bookToCheckOut);
};

#endif PATRONCLASS_H
