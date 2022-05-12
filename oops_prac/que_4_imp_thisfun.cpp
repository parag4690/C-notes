#include <iostream>
using namespace std;
class rectangle
{
  private:
  int length;
  int breadth;
  public:
  rectangle(int length,int breadth){ // i dont want to give other variable
      // how to differenciate these
      // by using this pointer
    // i want to store constrers's lenght in private lenght
       
      this->length=length;  // this wala private vala h
      this->breadth=breadth;
  }  
  int area(){
      return length*breadth;
  }
};
int main(){
    rectangle r(5,10);
    cout<<r.area()<<endl;

}