#include <iostream>
using namespace std;
int main(){
    ///data type: strings int double long double long long bolean char
    int a = 3;
    string str = "Hello World";
    float b = 3.5000;
    double c = 3.53447899;
    long double d = 3.534324342424;
    long long e = 33424.333;
    bool f = false;
    char g = 'A';
    cout<<"int : "<<a<<endl;
    cout<<"float : "<<b<<endl;
    cout<<"double : "<<sizeof(c)<<endl;
    cout<<"long double : "<<sizeof(d)<<endl;
    cout<<"long long : "<<sizeof(e)<<endl;
    cout<<"bool : "<<f<<endl;
    cout<<"char : "<<g<<endl;
    return 0;
}