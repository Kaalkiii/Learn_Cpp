#include <iostream>
using namespace std;
int main(){
int values; int nextnumber;
int num1 = 0;
int num2 = 1;
cout<<"How many values do you want: ";
cin>>values;
cout<<num1<<", ";
cout<<num2<< ", ";
for (int i = 1; i<=values; i++){
    nextnumber = num1 + num2;
    num1 =  num2;
    num2 = nextnumber;
    cout<<nextnumber<<", ";
}
}