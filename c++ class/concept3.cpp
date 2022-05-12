#include <iostream>
using namespace std;
void fun(int x,int y,int i=1){  // i=1 tb hoga jb c vala parameter na derkha ho
    int d;
    d=x+y+i;
    cout<<d;
}
int main(){
    int a=10,b=2,c=4;
    fun(a,b,c);
}