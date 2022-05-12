// those classes who have pure virtual fun known as abstract class
// we cant create b we can create pointer
#include <iostream>
using namespace std;
class base
{
    public:
    virtual void fun()=0;

};
class derived:public base
{
    public:
    void fun()
    {
        cout<<"derived"<<endl;
    }
} ;
int main(){
    base *b=new derived();
    b->fun();
}