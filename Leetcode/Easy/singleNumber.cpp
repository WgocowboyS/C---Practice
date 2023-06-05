#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int singleNumber(vector<int> &nums)
{
    vector<int>::iterator it;
    vector<int>::iterator firstOccurance;
    int v = nums[0];
    cout << *nums.end() << endl;
    //we can use find iterator to figure this out
    for(int i = 0; i < nums.size(); i++){
        firstOccurance = find(nums.begin(), nums.end(), nums[i]);
        it = find(firstOccurance+1, nums.end(), nums[i]);
       // cout <<"VALUE " <<  *it << endl;
        if(it == nums.end()){
            cout << "NUMS I " << nums[i] << endl;
            v = nums[i];
        }
    }
    //also could use XOR operations, since everything XOR with itself would be 0, so 
    //would weed out to the single number eventually
    return v;
}

int main()
{

  //  vector<int> nums = {4, 1, 2, 1, 2};
   // vector<int> nums = {1};
    vector<int> nums = {1,3,1,-1,3};
    cout << singleNumber(nums) << endl;

    return 0;
}