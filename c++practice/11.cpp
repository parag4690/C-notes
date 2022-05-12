#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l=0,int b=0){
      //  length=l;
      //  breadth=b;
      // ese ni dena
      setlength(l);
      setbreadth(b);
    }
    int setlength(int l){
        if(l>=0){
          length=l;
        }
        else{
            cout<<"length can not be negative "<<endl;
            length=0;
        }
       return length; 
    }
    int setbreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            cout<<"breadth can not be negative"<<endl;
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
    cuboid(int l=0,int b=0,int h=0){
        setlength(l);
        setbreadth(b);
        setheight(h);
    }
    int setheight(int h){
        if(h>=0){
            height=h;
        }
        else{
            cout<<"height can not be negative "<<endl;
            height=0;
        }
        return height;
    }
    int getheight(){
        return height;
    }
    int volume(){
        return getheight()*getlength()*getbreadth();
    }
   
};
int main(){
    rectangle r(4,4);
    cout<<r.area()<<endl;
    
   cuboid c(4,4,4);
  
   cout<<c.volume()<<endl;
   cout<<c.getbreadth()<<endl;
   cout<<c.getlength()<<endl;
   cout<<c.getheight()<<endl;


}