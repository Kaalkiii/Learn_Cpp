#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> VectorVar;
    int a;
    cout << "how many elemets do you want: ";
    cin >> a;
    if (a == 0)
    {
        cout << "try again";
    }
    else
    {
        for (int i = 0; i < a; i++)
        {   int val ;
            cout<<"Enter the value at Vector["<<i<<"]";
            cin>>val; 
            VectorVar.push_back(val); 
        }
    }
    cout<<VectorVar[1];
}