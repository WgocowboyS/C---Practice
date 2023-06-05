#include <vector>
#include <iostream>

using namespace std;

void reverseString(vector<char>& s){

    for(int i = 0; i < s.size()/2; i++){
        char a;
        char b;

        a = s[i];
        b = s[s.size()-i-1];
        cout << "A: " << a << endl;
        cout << "B:" << b << endl;

        //swap here (could use swap from algorithm)
       s[i] = b;
       s[s.size()-i-1] = a;
    }
    
}

int main(){

    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    cout << "String: ";
    for(int i = 0; i < s.size(); i++){
        cout << " " << s[i];
    }

    return 0;
}