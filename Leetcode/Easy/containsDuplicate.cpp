#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    bool val = false;
    sort(nums.begin(), nums.end()); // sorts array

    int previousIndex = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[previousIndex] == nums[i])
            val = true;
        previousIndex++;
    }

    return val;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    cout << containsDuplicate(nums) << endl;

    return 0;
}