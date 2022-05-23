#include <iostream>
using namespace std;

int main(){
    int n,max=-999,p=-1;
    cin>>n;
    int s;
    cin>>s;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<s; i++){
        
        
       for(int j=0; j<n; j++){
           if(a[j]!=p){
               if(a[i]>=max){
                   max=a[i];
               }
           }
       }
       cout<<max<<endl;
       p=max;
    }
  
}