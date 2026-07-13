#include <iostream>
using namespace std;


int main(){
    ///data type: strings int double long double long long 
    int a; int b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter another number : ";
    cin>>b;
    int c = a & b;
    int t = a | b;
    int y = a >> b;
    int z = a << b;
    int r = ~b;
    cout<<r<<endl;
    cout<<c<< endl;
    cout<<t<< endl;
    cout<<y<< endl;
    cout<<z<< endl;
    return 0;


}
