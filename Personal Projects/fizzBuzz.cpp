#include <iostream>

using namespace std;

int main()
{

    int fizz = 0;
    int buzz = 0;
    int els = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            fizz++;
            buzz++;
            cout << "fizzbuzz" << endl;
        }
        else if (i % 2 == 0)
        {
            fizz++;
            cout << "fizz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "buzz" << endl;
            buzz++;
        }
        else
        {
            els++;
            cout << i << endl;
        }
    }
    cout << fizz << endl;
    cout << buzz << endl;
    cout << els << endl;
}