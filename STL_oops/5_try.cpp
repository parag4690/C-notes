#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    cout<<endl;
    n=6;
    a[n-1]=14;
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
}