#include <vector>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
        vector<int> temp;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                temp.push_back(nums[i]);
            }
        }

        temp.push_back(nums.back());

        nums = temp;

        return nums.size();
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << removeDuplicates(nums) << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}