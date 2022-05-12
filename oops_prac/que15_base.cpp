#include <iostream>
using namespace std;
class base
{
    public:
    void fun1(){
        cout<<"base1"<<endl;
    }
    void fun2(){
        cout<<"base2"<<endl;
    }
    void fun3(){
        cout<<"base3"<<endl;
    }
};
class derived:public base{
  public:
  void fun4(){
      cout<<"derived1"<<endl;
  }
  void fun5(){
      cout<<"derived2"<<endl;
  }
};
int main(){
    base *p;
    p=new derived();
    p->fun1();
    p->fun2();
    p->fun3();
   // p->fun4(); not acceble
}