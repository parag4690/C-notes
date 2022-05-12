#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    int min=a[0],sum=0;
    for(int i=0; i<n; i++){
        if(a[i]<=min){
            min=a[i];
        }    
    }
   /* for(int i=0; i<n; i++){
        if(a[i]!=min ){
           sum=sum+a[i];
        }
    }
    if(sum==0){
        int sem=0;
        for(int i=0; i<n-1; i++){
          sem=sem+a[i];
        }
        cout<<sem<<endl;
    }
    else{
    cout<<sum<<endl;
    }   */

    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    cout<<sum-min<<endl;
    }
}