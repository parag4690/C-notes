#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t; 
    for(int j=0; j<t; j++){
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0;i<n; i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                break;
            }
            
        }
        for(int i=0; i<n; i++){
            cout<<a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]>a[i+1]){
                cout<<"NO"<<endl;
                c++;
                break;
            }
        }
        if(c!=1){
            cout<<"YES"<<endl;
        }
    }
}