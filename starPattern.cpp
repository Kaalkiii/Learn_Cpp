#include <iostream>
using namespace std;

int main(){
    cout<<"enter the number";
    int rangee;
    cin>>rangee;
    for (int i = 0; i<rangee; i ++){
        cout<<endl;
        for (int j = 0; j<rangee; j++){
            cout<<"*";
        }
    }
    cout<<endl;
}