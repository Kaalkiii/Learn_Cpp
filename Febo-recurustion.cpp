#include <iostream>
using namespace std;
int febbo(int n){
 
    if(n <= 1){
        return n ;
    }
    else{

        return febbo(n-1)+febbo(n-2);
    
}
}

int main(){
    int terms ; 
    cout<<"enter the terms - "; 
    cin>>terms ; 
    for(int i =0 ; i<=terms;i++){
        cout<<febbo(i)<<", ";
    }
    return 0 ;
}