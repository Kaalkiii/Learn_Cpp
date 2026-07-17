#include <iostream>
using namespace std;

void BinS(int arr[], int target, int start, int end)
{
    
    if (start > end)
    {
        cout << "Target not found";
        return;
    }

    int mid = (start + end) / 2;

    if (target == arr[mid])
    {
        cout << "Found the target at index " << mid;
        return;
    }
    else if (target < arr[mid])
    {
        BinS(arr, target, start, mid - 1);
    }
    else
    {
        BinS(arr, target, mid + 1, end);
    }
}

int main()
{
    int target = 23;
    int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                   16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

    int arraysize = sizeof(arr) / sizeof(arr[0]);

    BinS(arr, target, 0, arraysize - 1);

    return 0;
}