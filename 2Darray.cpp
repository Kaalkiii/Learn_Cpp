#include <iostream>
using namespace std;
int main(){
int r ; int c;
cout<<"enter the row size: ";
cin>>r;
cout<<"enter the column size: ";
cin>>c;
int a[r][c];
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<"ENTER THE VALUE FOR ["<<i<<"]["<<j<<"]";
        cin>>a[i][j];
    }
}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<a[i][j]<<", ";
    }
    cout<<endl;
}
}