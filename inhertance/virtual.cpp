// phle sare construcotr then bottom to top

#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base consturctor "<<endl;
    }
    virtual ~base(){
        cout<<"base deconstructor "<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"derived consturctor "<<endl;
    }
    ~derived(){
        cout<<"derived deconsturnctor "<<endl;
    }
};
int main(){
   
    base *p=new derived(); //  derived deconstrutor not working due to early binding solution use virtural deconstrutor in base class 
   
   
   
    delete p; // virtual k karn sare deconstructor work krege early binding // memory leakage hori thi jise vo derived ka desturctor call hi ni krega
    
}