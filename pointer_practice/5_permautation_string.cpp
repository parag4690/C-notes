#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,p=1;
    cin>>n;
    for(int i=1; i<=n; i++){
      p=p*i;
    }
    cout<<p<<endl;
    string s,d,e;
    cin>>s;
    d=s;
   // cout<<s[1]<<endl;
    for(int i=0; i<n ; i++){
           s=d;
           char temp = s[0];
           s[0]=s[i];
        //  cout<<i<<endl;
           s[i]=temp;
          cout<<s<<endl;
           for(int k=1; k<n-1; k++){
                   e=s;
                   char temp = s[k];
                   s[k]=s[k+1];
                   s[k+1]=temp;
                   cout<<s<<endl;
               
            // cout<<s<<endl;
           
         //  cout<<s<<endl;
           
           
               
       }
      // cout<<s<<endl;
    }
}