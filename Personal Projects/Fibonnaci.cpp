#include <iostream>

using namespace std;

void fibIter()
{

    int goTo = 20;
    int firstNum = 0;
    int secondNum = 1;
    int temp = secondNum;
    cout << "Num 0: " << firstNum << endl;
    cout << "Num 1:  " << secondNum << endl;

    for (int i = 2; i < goTo; i++)
    {
        temp = secondNum;
        secondNum = firstNum + secondNum;
        firstNum = temp;
        cout << "Num " << i << ": " << secondNum << endl;
    }
}

int fibRecursive(int value)
{

    // base case
    if (value == 0)
    {
        cout << "In base case: " << value << endl;
        return 0;
    }
    else if (value == 1)
    {
        cout << "In base case: " << value << endl;
        return 1;
    }
    else
    {
        cout << "In recursive case: " << value << endl;
        return (fibRecursive(value - 1 ) + fibRecursive(value-2));
    }
}

int main()
{

    // fibIter();

    cout << fibRecursive(5) << endl;
}