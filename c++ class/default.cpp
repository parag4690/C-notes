#include <iostream>
using namespace std;
void fun(int x,int y,int k=1, int i=2){
    int z=x+y+k+i;
    cout<<z;
}
int main(){
    int a=10; int b=5;
    int c=12;
    fun(a,b,c);
}