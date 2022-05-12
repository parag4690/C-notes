#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int *p;
     p=&a[0];
    for(int i=0; i<n; i++){
       // p=&a[0];
        cout<<*p<<endl;
        p=p+1; // or we can use p++;
    }
}