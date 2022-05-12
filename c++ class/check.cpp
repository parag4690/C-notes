#include <iostream>
using namespace std;
int main(){
    int a[3]={1,2,3};
    int *p=a; // declare
    cout<<p<<endl;
    for(int i=0;i<3; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<3; j++){
        cout<<p+j<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<*(p+i)<<" ";
    }
}