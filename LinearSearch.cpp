#include <iostream>

using namespace std;

void Linear_search(int arr[],int size ,int target){
    bool status = false;int i;
    
    for(i=0; i<size ; ++i){
        if(arr[i]==target){
            status =true;
            break;
        }
    }
    if(status == true){
        cout<<"The Target Value is at ["<<i<<"]"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
}

int main() {
    int arrrr[30] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int target;
    cout<<"enter the number you want to find : ";
    cin>>target;
    int arrsize = sizeof(arrrr)/sizeof(arrrr[0]);
    Linear_search(arrrr,arrsize, target);
    return 0;
}