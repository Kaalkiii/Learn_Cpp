#include <iostream>
using namespace std;
class mother{
public:
    int a = 4;
    int pri(){
        return b;
    }
private: 
    int b = 5;
};

int main(){
    mother obj;
    cout<<obj.pri()<<endl;
}