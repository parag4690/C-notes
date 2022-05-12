#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){  // 22852
        int n,k,count=0;
        cin>>n>>k;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
            if(a[j]>k){
                count++;
            }
        }
        cout<<count<<endl;
        }
    
    return 0;
}

