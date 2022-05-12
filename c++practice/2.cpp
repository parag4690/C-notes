#include <iostream>
#include <cstring>
using namespace std;
int main(){
  // int n;
//  cin>>n;
 int a[2],count=0;
 int x=0;
 //cin>>x;
 a[0]=x;
    char s[3];
    cin.getline(s,3);
    cout<<s<<endl;
   
    for(int j=0; j<2; j++){
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
    for(int j=0; j<3; j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        count++;
        for(int j=i+1; j<3; j++){
           // count++;
            if(a[i]==a[j]){
             count--;
            }
        }
    }
    cout<<"count ="<<count<<endl;
}