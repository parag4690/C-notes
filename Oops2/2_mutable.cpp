#include <iostream>
using namespace std;
class constants
{
    public:
   mutable int var;  // mutable jisme value change kr ske
    constants (int l){
        var=l;
    }
    int fun(){
       // cout<<"parag"<<endl;
        return var;
    }
    

};
int main(){
 const constants x(3);
 //int a=x.fun();
 cout<<x.var<<endl; 
 x.var=2; 

cout<<x.var<<endl;                                               
cout<<x.fun()<<endl; // function me mutatble nhi hota
                     

}
// private change ni hota 
