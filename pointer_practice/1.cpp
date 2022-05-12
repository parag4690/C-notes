#include <iostream>
using namespace std;
int main(){
    int a=100;
    int *b;
    b=&a;
    cout<<b<<endl;
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<&a<<endl;
}