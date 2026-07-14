#include <iostream>
using namespace std;
int main(){
int a[5];int sizefor = sizeof(a)/sizeof(a[0]);
for(int i = 0; i<=sizefor; ++i){
    cout<<"enter the value at "<<i<<": ";
    cin>>a[i];
}
for(int i=0; i<=sizefor; i ++){
    cout<<a[i]<<","<<endl;
}
}