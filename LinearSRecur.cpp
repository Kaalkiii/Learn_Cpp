#include <iostream>
using namespace std;

int Linear_search(int arr[], int size, int target, int index) {
    if (index == size) {
        return -1;
    }
    else if(arr[index] == target){
        return index;
    }
    return Linear_search(arr, size, target, index+1);
}

int main() {
    int arrrr[6] = {1, 2, 3, 4, 5, 6};
    int target = 3;
    int arrsize = sizeof(arrrr) / sizeof(arrrr[0]);

    int result = Linear_search(arrrr, arrsize, target, 0);

    if (result != -1) {
        cout << "The Target Value is at [" << result << "]";
    } else {
        cout << "Target not found";
    }

    return 0;
}