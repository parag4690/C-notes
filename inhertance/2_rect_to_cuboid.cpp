#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l=0, int b=0){
        length=l;
        breadth=b;
    }
    int setlength(int l){
        if(l>=0){
            length=l;
        }
        else{
            length=0;
        }
        return length;
    }
    int setbreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
        }
        return breadth;
    }
    int getlength(){
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
    cuboid(int h=0){
        height=h;
    }
    int getheight(){return height;}
    void setheight(int h){
        height=h;
    }
    int volume(){
      //  return length*breadth*height; private me asse ni hoga
      // solution == use func
      return getlength()*getbreadth()*getheight();
    }
};
int main(){
    cuboid c(5); // l=0,b=0
    // set lenght in cuboid
    c.setlength(10);
    c.setbreadth(7);
    cout<<c.volume()<<endl;
}