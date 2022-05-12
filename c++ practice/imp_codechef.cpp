#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,d,e,count=0;
        cin>>n;
        e=n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<e; j++){
            for(int k=0; k<n; k++){
                if(j!=k){
                   d=a[j]+a[k];
                   if(d%2==0 && a[k]!=-1 && a[j]!=-1){
                     //  cout<<d<<endl;
                   //  count++;
                       a[j]=d;
                       a[k]=-1;
                       break;
                   } 
                }
            }
        }
        for(int j=0; j<n; j++){
            if(a[j]!=-1){
            cout<<a[j]<<endl;
            count++;
            }
        }
       cout<<count<<endl;
    }
}