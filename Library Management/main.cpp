#include <iostream>
#include <vector>
#include "bookClass.h"
#include "patronClass.h"

using namespace std;

int main()
{
    vector <book> empty;
    book bookTemp("Book A", "John H", "Fiction", false, 1234);
    empty.push_back(bookTemp);
    patron temp("John H",1234, empty);

    cout << temp.getId() << endl;

    return 0;
}