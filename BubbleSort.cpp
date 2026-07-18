#include <iostream>

using namespace std;

int Bubble_sort(int arr[],int size_arr){
    int i; int j;
    bool iswapped = false;
    for(i=0;i<size_arr; i++){
        cout<<i;
        for(j=0; j<size_arr-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                iswapped = true;
                }
        }
        if(iswapped != true){
            break;
        }
    }
    //Print Array
    for(int i=0; i<size_arr; i ++){
        cout<<"["<<arr[i]<<"],";
    }
    return 0;
}


int main() {
    int arr[4] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr,size);
    return 0;
}