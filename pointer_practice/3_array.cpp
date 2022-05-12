#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *d,*e;
    d=&a;
    e=&b;
    cout<<*d+*e<<endl;
}