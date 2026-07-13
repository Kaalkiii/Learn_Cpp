#include <iostream>
using namespace std;
int main(){
cout<<"enter I value:";
int i;
cin>>i;
int fact = 1 ; 
for (int j = 1; j<=i;j++){

    fact=j*fact; 


}
cout<<fact<<endl ;  
}