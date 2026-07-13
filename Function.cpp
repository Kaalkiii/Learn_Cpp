#include <iostream>
using namespace std;

int addition(int a , int b){
    return a + b;
}
int subtract(int a , int b){
    return a - b;
}
int multiple(int a , int b){
    return a*b;
}
int divide(int a , int b){
    return a/b;
}


int Calc(int oppertation , int a, int b){ 
    switch(oppertation){
        case 1:
        cout<<addition(a,b);
        break;
        case 2:
        cout<<subtract(a,b);
        case 3:
        cout<<multiple(a,b);
        case 4 :
        cout<<divide,(a,b);
        default:
        cout<<"OOPS, Try Again!";
    }
    return 0;

}
int main(){
    int a; int b; int Opration;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"which Opperation You want To Perform:"<<endl;
    cout<<"Addition-1"<<endl;
    cout<<"subtract-2"<<endl;
    cout<<"Multiple-3"<<endl;
    cout<<"Divide-4"<<endl;
    cin>>Opration;
    Calc(Opration, a ,b);
    cout<<endl;
}

// 3terms in recurstion
// base case
// recursive call
// Backtracking