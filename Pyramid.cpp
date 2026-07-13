#include <iostream>
using namespace std;

int main(){
    int Num_Pyramid;
    cout<<"enter the Bases of Pyramid: ";
    cin>>Num_Pyramid;
    for(int x = 1; x<=Num_Pyramid; x++){
        for(int y=1;y<=x;y++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// INVERTED PYRAMID PATTERN

// int main()
// {
//     int n = 5;

//     // looping rows
//     for (int i = n; i > 0; i--) {
//         for (int j = 1; j <= n; j++) // looping columns
//         {
//             if (j <= i) {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }