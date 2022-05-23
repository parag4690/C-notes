#include <iostream>
using namespace std;
class base
{
    public:
    void fun(){ // read ni krepayga or ye bss parent me lgta hai ,, we called this late binding , runtime binding
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
   // base *p=new derived();
   // p->fun(); // here if i dont use virtual then base will print

    // 2nd method 
    
    derived obj;
    base *p=&obj;
    obj.fun();

}

// overloading vs overriding  --
// overloading -> same function but can have diffreren parametres
// overriding -> everything is same  