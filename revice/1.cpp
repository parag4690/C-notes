#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        char s[n]; // sort krne k liye char use kro kyuki usme lenght decide ni hote
        string s2;
        cin>>s;
        s2=s;
       	sort(s, s + n);
        for(int j=0; j<n/2; j++){
            if(s2[j]>s2[n-j-1]){
                swap(s2[j] , s2[n-j-1]);
            }
        }
        if(s2==s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      

    }
}