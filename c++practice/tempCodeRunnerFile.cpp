#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int n,c=0,c1=0,c2=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]<=a[i+1]){
                c++;
            }
            else{
                c1++;
            }
        }
        cout<<c<<c1<<endl;
        if(c==n || c1==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}