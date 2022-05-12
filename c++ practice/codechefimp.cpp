#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
       int n,k,max=0,d;
       cin>>n>>k;
       d=n;
       int a[n];
       for(int j=0; j<n; j++){
           cin>>a[j];
       }
    /*   for(int j=0; j<k; j++){
           max=max+a[j];
       }*/
     //  cout<<max<<endl;
       for(int j=0; j<n-k+1; j++){
           int sum=0;
          
           for(int l=j; l<k+j;l++){
               sum=sum+a[l];
                cout<<sum<<" ";
               max=sum;
              /* if(sum>=max){
                     max=sum;
                   // cout<<max<<" ";
                 }*/
                
               }
             /*  if(sum>=max){
                   max=sum;
                  // cout<<max;
               }*/

           }
       //  cout<<max<<endl;
       }
      
    }
