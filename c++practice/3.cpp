#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int l=0; l<t; l++){
  int n,x;
  cin>>n>>x;
 int a[n],count=0;
 
 a[0]=x;
    char s[n+1];
    cin>>s;
  //  cout<<s<<endl;
   
    for(int j=0; j<n; j++){
        cout<<s[j]<<endl;
       // a[0]=x;
        if(s[j]=='r'){
            x=x+1;
            a[j+1]=x;
        }
        else{
            x=x-1;
            a[j+1]=x;
        }
    }
    for(int j=0; j<n+1; j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n+1; i++){
        count++;
        for(int j=i+1; j<n+1; j++){
           // count++;
            if(a[i]==a[j]){
             count--;
             break;
            }
        }
    }
    cout<<count<<endl;
    }
}