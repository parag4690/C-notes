#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int r=0;
template<class T>
void check( T p , T q)
{
    if(p==q){
        cout<<"yes"<<endl;
        r=0;
    }
   
    
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
  
    int n,c=0; 
    int max=n/2;
    cin>>n;
    char s[n];
    string s2,s3;
   
    
    
    cin>>s;
     s3=s;
   // s2=s;
    sort(s,s+n);
    s2=s;
    cout<<s<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
   c=0;
    check(s2,s3);
  //  cout<<r<<endl;
    if(r>0){
        //r=0;
       for(int i=0; i<n-i; i++){
            int temp=s3[i];
            s3[i]=s3[n-1-i];
            s3[n-1-i]=temp;
		
            check(s2,s3);
         //  cout<<r<<endl;
            if(r==0){
                c==0;
                break;
            }
            
            
            
        }
      //  break;
        
    }
    if(s3!=s2){
        cout<<"NO"<<endl;
    }
   
    }   
    
    
    //cout<<s2<<endl;
}