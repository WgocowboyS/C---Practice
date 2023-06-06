#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(string s)
{
    string a;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            a += tolower(s[i]);
    }
    // s = tolower(s);
    for (int i = 0; i < a.size() / 2; i++)
    {
        if (a[i] != a[a.size() - i - 1])
            return false;
    }

    return true;
}

int main()
{

    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}