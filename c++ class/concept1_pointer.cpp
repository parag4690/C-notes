#include  <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int (*p)[5]; // size byter(4) * 5 // ek byte 20 mtlb  increment by 20 
    int *p1;
    p1=a;  // addres of 1 
    p=&a; // addres of 1 
    cout<<++p1<<endl; // addres of 2/ index=1  //////////////////////////////
    cout<<++p<<endl; // addres of 5 / index =4
  //  cout<<*p<<endl; wrong 

}