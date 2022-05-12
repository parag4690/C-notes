#include <iostream>
using namespace std;
void fun(int x,int y,int k=1, int i){
   int z=x+y+k+i;
   cout<<z;
}
int main(){
    int a=10; int b=1;
    int c=12;
    fun(a,b,c);

    // it will give error  


    // agr hm ek bar default parameter dedete to uske agge bhi default hone chaiye
    
}