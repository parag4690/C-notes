#include <iostream>
using namespace std;
inline void fun(int x,int y){  // inline tb use krge jb koe lmba kam na ho like loop na chl ri ho , add 
   int z=x+y;
   cout<<z<<endl; 
   //  macros me compiler me error check nhi hota inline me hoti hai
   
}
int main(){
    int a=10;
    int b=5;
    fun(a,b);
}