#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"non-param base"<<endl;
    }
    base(int x){cout<<"param of base "<<x<<endl;}
};
class derived:public base
{
    public:
    derived(){cout<<"non-param derived"<<endl;}
    derived(int y){cout<<"param of derived "<<y<<endl;}
    derived (int x,int y):base(x) // so that it can use its parameters
    {
        cout<<"param of derived "<<y<<endl;

    }
};
int main(){
    derived d(10,30); // calling
    //cout<<d<<endl; // esko pta thodi na h ki konsa execute kre to ye parent vala phle krta hai
    // d(10);

}