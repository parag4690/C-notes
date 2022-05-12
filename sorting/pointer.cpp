#include <iostream>
using namespace std;
int fun(int *x,int *d,int b,int a){
    *x=b;
    *d=a;
    return *x;
}
int main(){
    int a=20;
    int b=10;
    int *c=&a;
    int *d=&b;
    fun(c,d,b,a);
    cout<<a<<endl;
    cout<<b<<endl;
}