#include <iostream>
using namespace std;

int main() {
   int t=1;
 //  cin>>t; 
   for(int m=0; m<t; m++){
     int n;
   cin>>n;
     int a[n];
   for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) // muje piche ki thodi na dekhne hai
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"after sorting";
    for(int i=0; i<n; i++){
        cout<<a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        if(i!=0){
        sum=sum+a[i];}
    }
    cout<<"sum="<<sum;
   }

	return 0;
}
