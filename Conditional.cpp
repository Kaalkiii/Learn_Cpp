#include <iostream>
using namespace std;
// int main(){
//     // contitional statement
//     int age;
//     cout<<"enter your age: ";
//     cin>>age;
//     if(age >= 18) {
//         cout<<"you are an adult"<<endl;
//     }
//     else{
//         cout<<"your still an kid"<<endl;
//     }
// }

int main(){
    // int a; int b; int c;
    // cout<<"enter your A number: ";
    // cin>>a;
    // cout<<"enter your B number: ";
    // cin>>b;
    // cout<<"enter your C number: ";
    // cin>>c;

//nested if else statement
    // if (a >= b) {
    //     if (a >= c) {
    //         cout << "A is the greatest." << endl;
    //     } else {
    //         cout << "C is the greatest." << endl;
    //     }
    // } else {
    //     if (b >= c) {
    //         cout << "B is the greatest." << endl;
    //     } else {
    //         cout << "C is the greatest." << endl;
    //     }
    // }


//Else if ladder statement
    // if (a > b && a > c) {
    //     cout << "A is greater than B and C" << endl;
    // } 
    // else if (b > a && b > c) {
    //     cout << "B is greater than A and C" << endl;
    // }
    // else if (a == b && a > c) {
    //     cout << "A and b is greater than c" << endl;
    // } 
    // else if (b == c && b > a) {
    //     cout << "B and C is greater than A" << endl;
    // }
    // else if (c == a && c > b) {
    //     cout << "A and C is greater than B" << endl;
    // }
    // else if (a == b && a == c) {
    //     cout << "All numbers are equal" << endl;
    // }
    // else {
    //     cout << "C is greater than A and B" << endl;
    // }




// string DRIVING_STATUS; int age;
// cout<<"enter your age: ";
// cin>>age;
//     if (age>=18){
//         cout<<"inter your driving status: ";
//         cout<<"(T)rue or (F)alse: ";
//         cin>>DRIVING_STATUS;
//         if (DRIVING_STATUS == "T" || DRIVING_STATUS == "t") {
//             cout<<"you can drive"<<endl;
//         }
//         else if (DRIVING_STATUS == "F" || DRIVING_STATUS == "f") {
//             cout<<"you can't drive"<<endl;
//         }
//         else{
//             cout<<"Try again"<<endl;
//         }
//     }
//     else{
//         cout<<"you are not eligible to drive"<<endl;
//     }


int week;int b;
b = 10;
cout<<"enter your Week Number: ";
cin>>week;
switch (week){
    case 1 :
    cout<<"monday"<<endl;
    break;
    case 2 :
    cout<<"tuesday"<<endl;
    break;
    case 3 :
    cout<<"wednesday"<<endl;
    break;
    case 4:
    cout<<"thursday"<<endl;
    break;
    case 5:
    cout<<"friday"<<endl;
    break;
    case 6 :
    cout<<"saturday"<<endl;
    break;
    case 7 :
    cout<<"sunday"<<endl;
    break;
    default:
    cout<<week<<"does not exist"<< b <<endl;
    break;
}
}