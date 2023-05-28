
#ifndef BOOKCLASS_H
#define BOOKCLASS_H

#include <string>

/*
 title, author, genre, status (checked in/checked out), and id. 
 Provide public methods for accessing and 
 modifying these fields (getters and setters).
*/
using namespace std;

class book
{
    private:
    string title;
    string author;
    string genre;
    bool checkedOut;
    int id;

    public:
    //constructor
    book (string title, string author, string genre, bool checkedOut, int id);

    //getter functions
    string getTitle();
    string getAuthor();
    string getGenre();
    bool getStatus();
    int getId();

    //set functions
    void setStatus(bool Status);


};

#endif