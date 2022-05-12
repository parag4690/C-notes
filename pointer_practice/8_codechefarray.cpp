#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
    int n,e=0,o=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0 || a[i]==0){
            e++;
        }
        else{
            o++;
        }
    }
   // cout<<e<<" "<<o<<endl;
    if(e==n || o==n ){
        cout<<0<<endl;
    }
    else if(o%2!=0){
       cout<<e<<endl;
    }
    else{
        cout<<min(e,o/2)<<endl;
    }
    
    }  
}