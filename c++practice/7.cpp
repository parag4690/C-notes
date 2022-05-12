#include <iostream>
using namespace std;
class constants
{
    public:
    int var;
    constants (int l){
        var=l;
    }
    int fun(){
       // cout<<"parag"<<endl;
        return var;
    }
    

};
int main(){
 const constants x(2);
 //int a=x.fun();
 cout<<x.var<<endl; // variable print kra skte hai but fun call ni kra skte
 x.var=2; //change variable ye bhi ni hoga
// const me constructor lgta ha


 cout<<x.fun()<<endl;


}