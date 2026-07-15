#include <iostream>

using namespace std;
void BinS(int arr[], int target, int size){
    int start = 0;
    int end = size-1;
    while (start < end)
    {
        int mid =(start+end)/2;

        if (target == arr[mid]){
            cout<<"found the target att"<<mid;
            break;
        }
        else if (target < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;        
        }

    }
    cout<<"loop end";
    
}


    int main()
    {
        int target = 23;
        int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
        int arraysize = sizeof(arr) / sizeof(arr[0]);
        BinS(arr,target,arraysize);
    }