// max 0f 2 no using pointer

#include <iostream>
using namespace std;
int  main(){
    int a,b;
    cin>>a>>b;
    int *d,*f;
    d=&a;
    f=&b;
    if(*d>*f){
        cout<<"max no is "<<*d<<endl;
    }
    else{
        cout<<"max no is "<<*f<<endl;
    }
}