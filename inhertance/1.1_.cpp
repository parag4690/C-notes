#include <iostream>
using namespace std;
class base
{
    public:
    int a;
    void display(){
        cout<<"display of base"<<a<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"show of derived"<<endl;
    }
};
int main(){
    derived d;
    d.display();// inheritant from base class
    d.show();
    d.a=10;
    cout<<d.a<<endl;
}