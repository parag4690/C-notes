#include <iostream>
using namespace std;
int main(){
    int n,sum=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    int mean=sum/n;

    if(sum%n==0){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int mean2=(a[i]+a[j])/2;
            if((mean2==mean)){
               c++;
               
            }

        } 
    }
    cout<<c<<endl;

    }
    else {
        cout<<0<<endl;
    }
}