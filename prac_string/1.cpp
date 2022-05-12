#include <iostream>
#include <string>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=0; i<t; i++){
       int n;
       double a,b,count=0,count1=0;
       cin>>n>>a>>b;
       int p[n];
       for(int j=0; j<n; j++){
           cin>>p[j];
       }
       for(int j=0; j<n; j++){
           if(p[j]==a){
               count++;
           }
           if(p[j]==b){
               count1++;
           }
       }
       cout<<double((count/n)*(count1/n))<<endl;

   }
    
}