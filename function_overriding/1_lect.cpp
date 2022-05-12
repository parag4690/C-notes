#include <iostream>
using  namespace std;
class parent
{
    public:
    void display(){
        cout<<"parent"<<endl;
    }
};
class child:public parent
{
  public:
  void display(){
      cout<<"child"<<endl;
  }
  void display(int x){
      cout<<x<<endl;
  }
};
int main(){
    parent p;
    p.display();
    child c;
    c.display();
    c.display(5);
    p.display();
   // p.display(4);

}