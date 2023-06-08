#include <iostream>
using namespace std;

int *bubbleSort(int arr[], int size)
{

    int *array = new int[size];
    array = arr;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // then we swap the two
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}

int binarySort(int arr[], int size, int target){
    int* low = arr;
    int* high = arr+size-1;

    while(low <= high){
        int* mid = low + ((high-low)/2);
        if(target < *mid){
            high = mid-1;
        }else if (target > *mid){
            low = mid+1;
        }else{
            return mid-arr;
        }
    }
    return -1; //not found
}

int main()
{
    int arr[5] = {1, 2, 5, 6, 3};

    // sizeof get # of bytes of object/var
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int *newArr = bubbleSort(arr, size);

    for (int i = 0; i < 5; i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;

     cout << binarySort(newArr,5,4);

    delete[] newArr;

}