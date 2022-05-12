// main me hm ek se jyda parameter de skte ho vo phle 2 value uthalega

#include <iostream>
using namespace std;
void fun(int x,int y,const int k=1,const int i=2){  // const mean through out the func k will be 1, only in fuc
   int z=x+y+k+i;  
  /* int k=1;
   cout<<k;*/
   cout<<z<<endl;
}
int main(){
    int a=10;
    int b=5,c=12,d=20;
    fun(a,b,c,d);
    int k=9;
    cout<<k;
}
