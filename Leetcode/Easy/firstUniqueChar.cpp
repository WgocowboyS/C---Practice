#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstUniqChar(string s)
{

    string::iterator firstIT;
    string::iterator secondIT;
    int index = 0;
    vector<char> acceptedChars;

    for (firstIT = s.begin(); firstIT != s.end(); firstIT++)
    //   for (int i = 0; i4 < s.size(); i++)
    {
        secondIT = find(firstIT+1, s.end(), *firstIT);
        if(secondIT != s.end()){
            cout << "Found a copy: " << *secondIT << endl;
            //we found a copy
            acceptedChars.push_back(*secondIT);
        }else{
            cout << "Found not copy or end of string" << *secondIT << endl;
            //we didnt find a copy
            //checkt to see if  not in acceptedChars (then we return that index)
            if(find(acceptedChars.begin(),acceptedChars.end(),*firstIT) == acceptedChars.end())
                return index;
        }
        index++;
    }

    return -1;
}

int main()
{

    //string s = "loveleetcode";
     //string s = "aabb";
     string s = "aadadaad";
    cout << "First:\n"
         << firstUniqChar(s) << endl;

    return 0;
}