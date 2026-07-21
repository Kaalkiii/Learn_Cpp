#include <iostream>

using namespace std;

void selection(int arr[], int n)
{
    int i;
    int j;
    for (i = 0; i < n-1; ++i)
    {
        int min_index = i;
        bool indi = false;
        for (j = i + 1; j < n; j++) // minimum finder
        {

            if (arr[j] < arr[min_index])
            {
                min_index = j;
                indi = true;
            }
        }
        if (indi == true)
        {
            swap(arr[i], arr[min_index]);
        }
    }

    // Print Array
    for (int i = 0; i < n; i++)
    {
        cout << "[" << arr[i] << "],";
    }
}

int main()
{
    int arr[] = {2, 1, 8, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection(arr, size);
}
