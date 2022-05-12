#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int length=0,int breadth=0){
        this->length=length;
        this->breadth=breadth;
        setlenght(length);
        setbreadht(breadth);
    }
    int setlenght(int l=0){
        length=l;
       // breadth=b;
       return length;
    }
    int setbreadht(int b=0){
        breadth=b;
        return breadth;
    }
    int getlenght(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
class cuboid:public rectangle
{
  private:
  int height;
  public:
  cuboid(int l=0,int b=0,int h=0){
      height=h;
      setlenght(l);
      setbreadht(b);
      setheight(h);
  }
  int setheight(int h=0){
      height=h;
      return height;
  }
  int getheight(){
      return height;
  }
  int volume(){
     return getlenght()*getbreadth()*getheight();
  }
};
int main(){
    cuboid c(3,4,5);
    cout<<c.volume()<<endl;
    rectangle r(3,4);
    cout<<r.area()<<endl;
}