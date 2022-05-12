// it is created at the end of class  
// and called at the end of program

#include <iostream>
using namespace std;
class test
{
    public:
    test(){
        cout<<"test created"<<endl;
    }
    ~test(){
        cout<<"test destroyed"<<endl;
    }
};
int main(){
    test t;
}