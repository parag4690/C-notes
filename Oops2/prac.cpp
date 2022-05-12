#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    int setlength(int l){
        if(l>=0){
        length = l;
        }
        else{
            cout<<"lenght can't be negative "<<endl;
            length = 0;
        }
        return length;
    }
    int setbreadth(int b){
        if(b>=0){
        breadth = b;
        }
        else{
            cout<<"breadth can't be negative "<<endl;
            breadth = 0;
        }
        return breadth;
    }
    int area(){
       return length*breadth;
    }
    bool issquare(){
        if(length==breadth){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    int n,n1;
    cin>>n>>n1;
     rectangle r;
     r.setbreadth(n1);
     r.setlength(n);
     cout<<r.area()<<endl;
     cout<<r.issquare()<<endl;
}