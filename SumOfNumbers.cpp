#include <iostream>
using namespace std;
int main(){
int i; int output = 0;
cout<<"enter I value:";
cin>>i;
for(int num = 0; num<=i; num++ ){
    output = num+output;
} 
cout<<output<<endl;
}