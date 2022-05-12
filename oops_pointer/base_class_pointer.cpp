#include <iostream>
using namespace std;
class base
{
public:
void fun1(){
    cout<<"fun1 of base"<<endl;
}

};
class derived:public base
{
    public:
    void fun2()
    {
        cout<<"fun2 of derived "<<endl;
    }
};
int main(){
    derived d;
    base *ptr=&d;
    ptr->fun1();
    ptr->fun2(); // not present in base here base is as object
    // these are different
    d.fun1();
    d.fun2();

}