#include <iostream>
using namespace std;
class base
{
    public:
    base(){
        cout<<"base created"<<endl;
    }
    ~base(){
        cout<<"base distroyed"<<endl;
    }
};
class derived:public base
{
    public:
    derived(){
        cout<<"derived created"<<endl;
    }
    ~derived(){
        cout<<"derived distroyed"<<endl;
    }
};
int main(){
  //  base b;
    //
    derived d;
}