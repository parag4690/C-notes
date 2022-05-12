#include <iostream>
using namespace std;
class rectangle
{
    private: // encaptulaion 
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
int main(){
    


}