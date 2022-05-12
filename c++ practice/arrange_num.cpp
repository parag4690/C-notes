#include <iostream>
using namespace std;
int main(){
    int n,count=1,countt=0;
    cin>>n;
    int a[n];
    if(n%2==0){
    for(int j=0; j<n/2; j++){
        cout<<2*j+1<<endl;
    }
    for(int j=n/2; j<n; j++){
        cout<<n-2*countt<<endl;
        countt++;
    }
    }
    else{
        for(int j=0; j<(n+1)/2; j++){
            cout<<2*j+1<<endl;
        }
        for(int j=(n+1)/2; j<n; j++){
            cout<<(n-1)-2*countt<<endl;
            countt++;
        }
    }

}
