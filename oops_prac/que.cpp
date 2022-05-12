#include <iostream>
using namespace std;
class rect
{
    private:
    int length;
    int breadth;
    public:
    rect(int l=0,int b=0){
        setlength(l);
        setbreadth(b);     
    }
    //copy constructor
    // it make a copy of rectangle
    rect(rect & rectangle){
        length=rectangle.length;
        breadth=rectangle.breadth;
    }
    int setlength(int len=0){
        if(len>=0){
          length=len;}
        else{
          cout<<"length can not be negative";
          length=0;
        }
         return length;
    }
    int setbreadth(int br=0){
        if(br>=0){
            breadth=br;

        }
        else{
            cout<<"breadth can not be negative";
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
    int issquare(){
        if(length==breadth){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int l,b;
    cout<<"enter length=";
    cin>>l;
    cout<<"enter breadth=";
    cin>>b;
    rect r(l,b);
    cout<<"length of rectangl is "<<r.getbreadth()<<endl;
    cout<<"breadth of rectangle is "<<r.getbreadth()<<endl;
    cout<<"it is square "<<r.issquare()<<endl;
    cout<<"area of square"<<r.area()<<endl;
    cout<<endl<<endl;
    // copy constructor
    
    rect r2(r); // this will have same value as 
    cout<<"area of copy "<<r2.area()<<endl;
    }
    // copy constructor
    ;

    return 0;

}