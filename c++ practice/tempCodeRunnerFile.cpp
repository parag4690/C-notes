#include <iostream>
using namespace std;
int main(){
    /// min nikal ke krde
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    int min=a[0],sum=0;
    for(int i=0; i<n; i++){
        if(a[i]<=min){
            min=a[i];
        }    
    }
    for(int i=0; i<n; i++){
        if(a[i]!=min){
           sum=sum+a[i];
        }
    }
    cout<<sum<<endl;
    
}