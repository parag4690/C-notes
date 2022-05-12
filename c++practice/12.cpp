#include <iostream>
using namespace std;
class base
{
    public:
    base(){
        cout<<"base"<<endl;
        // constructor me call ni kra skte
    }
    base(int x){
        cout<<"base parameter "<<x<<endl;
    }
};
class derived:public base
{
  public:
  derived(){
      cout<<"derived "<<endl;
  }
  derived(int y){
      cout<<"derived paramater "<<y<<endl;
  }
  derived (int x,int y):base(x){ // calling of base(x)
      cout<<"derived paramter "<<y<<endl;
  }
};
int main(){
    derived d,d1(10),d2(10,29); // yhi se calling hogi to hme return krane ki need ni hai

    
    
}