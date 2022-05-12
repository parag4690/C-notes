#include <iostream>
using namespace std;
class base
{
    public:
    virtual void fun(){
        cout<<"base"<<endl;
    }
};
class derived:public base{
    public:
    void fun(){
        cout<<"derived"<<endl;
    }
};
int main(){
    base *p=new derived();
    p->fun(); // here if i dont use virtual then base will print

}