#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,d,e;
        cin>>n;
        e=n;
        int count=0,a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(j!=k){
                    d=a[j]+a[k];
                    if(d%2==0){
                        a[j]=d;
                        count++;
                       cout<<count<<"  ";
                        n=n-1;
                      //  cout<<count<<endl;
                        break;
                    }
                }
            }
        }
        cout<<e-count<<endl;
    }
}