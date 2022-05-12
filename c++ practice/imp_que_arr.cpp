#include <iostream>
using namespace std;  
int main(){
    int n;
    cin>>n;
    int a[n];
 //   int a[6]={2,1,1,1,2,3};
 for(int i=0; i<n; i++){
     cin>>a[i];
 }
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
           if(a[i]==a[j]){
               count++;
             //  cout<<a[i];
           }
        }
       for(int k=0; k<n; k++ ){
            if(count>1){
                count--;
                break;
            }
            else{
                cout<<a[i];
                break;
            }
       }
    }
    
}