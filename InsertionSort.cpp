#include <iostream>

using namespace std;

void InsertionSort(int arr[], int sizearr) {
    int i, j;

    for (i = 1; i < sizearr; i++) {
        int curr_idx = arr[i];
        j = i;

        while (j > 0 && curr_idx < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = curr_idx;
    }

    for (int i = 0; i < sizearr; i++) {
        cout << "[" << arr[i] << "],";
    }
}

int main() {
    int arr[5] = {5, 3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, size);

    return 0;
}
