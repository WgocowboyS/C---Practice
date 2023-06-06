#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

float multiplication(int num1, int num2)
{
    return num1 * num2;
}

float division(int num1, int num2)
{
    return num1 / (num2 * 1.0);
}

int *convertStringToInt(string &s)
{
    stringstream ss(s);
    int *nums = new int[2];
    int index = 0;
    // while we can read froms string
    while (ss >> nums[index])
    {
        index++;
    }
    return nums;
}

int *getNumbers(string operation)
{
    int *n;
    string s;
    cout << "Enter two numbers to " << operation << ": ";
    cin.ignore();
    getline(cin, s);
    cout << operation << ":  " << s << endl;
    n = convertStringToInt(s);
    return n;
}

int main()
{
    int *n;
    int choice = 0;
    int a = 0, b = 0;
    string op;
    do
    {
        cout << "Enter a number decision 1 (addition), 2 (subtraction), 3 (multiplication), 4 (division), 0 (quit): ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            op = (choice == 1 ? "add" : choice == 2 ? "subtract"
                                         : choice == 3   ? "multiply"
                                                         : "divide");
            n = getNumbers(op);

            if (choice == 1)
                cout << "Answer: " << addition(n[0], n[1]) << endl;

            else if (choice == 2)
                cout << "Answer: " << subtraction(n[0], n[1]) << endl;

            else if (choice == 3)
                cout << "Answer: " << multiplication(n[0], n[1]) << endl;

            else if (choice == 4)
                cout << "Answer: " << division(n[0], n[1]) << endl;

            delete[] n;
        }else
        cout << "Exiting " << endl;
    } while (choice != 0);

    return 0;
}