#include <vector>
#include <iostream>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    // records the rotation amount for each num
    int smallerRotations = k % nums.size();
    cout << "Smaller Rotations: " << smallerRotations << endl;
    vector<int> copyArray;
    int startAndStop = nums.size() - smallerRotations;

    //start at smaller rotations - size end
    for(int i = startAndStop; i < nums.size(); i++){
        copyArray.push_back(nums[i]);
    }

    for(int i = 0; i <  startAndStop; i++){
        copyArray.push_back(nums[i]);
    }
    nums = copyArray;
}

int main()
{
   vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    //vector<int>nums = {-1,-100,3,99}; 2
    int k = 3;
    cout << "Nums before rotate: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Rotations: " << k << endl;

    rotate(nums, k);
    cout << "After rotation: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}