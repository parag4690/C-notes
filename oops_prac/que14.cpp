#include <iostream>
using namespace std;
class base
{
    public:
    base(){
        cout<<"default base"<<endl;
    }
    base(int x){
        cout<<"parameter cons of base "<<endl;
    }
};
class derived:public base
{
    public:
    derived(){
        cout<<"default of derived "<<endl;
    }
    derived(int a){
        cout<<"param of derived "<<endl;
    }
    // for print both parameter
    derived (int x,int a):base(x){
        cout<<"parameter of derived "<<endl;
    }
};
int main(){
   // base b;
    derived d(20); // one base and one derived
    // i want to print both paramater;
    derived d1(20,10);
   
    
}