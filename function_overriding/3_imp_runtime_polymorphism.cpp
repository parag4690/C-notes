#include <iostream>
using namespace std;
class car
{
    public:
   virtual void start(){
      cout<<"car started"<<endl;
    }
   virtual void stop(){
        cout<<"car stopped"<<endl;
    }

};
class innova:public car
{
  public:
  void start(){
      cout<<"innova started"<<endl;
    
  }
  void stop(){
      cout<<"innova stoped"<<endl;
  }
};
class swift:public car
{
    public:
    void start(){
        cout<<"swift started"<<endl;
    }
     void stop(){
        cout<<"swift stoped"<<endl;
    }
};
int main()
{
    car *c=new innova();
    c->start();
    car *p=new swift();
    p->start();
}
// main purpose  ==  base class pointer to derived class object and overide method
