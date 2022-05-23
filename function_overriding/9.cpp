#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count(int *a , int n , int j){
     int c=0; 
     for(int i=0; i<n; i++){
         if(a[i]==j){
             c++;
         }
     }
     return c;
}
int main(){
    int n,c=0,sum=0;
    cin>>n;
    int d=n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;
    sort(a,a+n);
    for(int j=n-1; j>=0; j--){
        int cut=count(a,n,a[j]);
        j=j-cut+1;
        c++;
        if(c==s){
            cout<<a[j]<<endl;
            break;
        }

    }
}