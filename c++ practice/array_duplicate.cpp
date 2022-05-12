#include <iostream>
using namespace std;
int main(){
   int n=7,dup;
  // cin>>n;
   int a[n];
 ///////////////////////////      *****  sorting ******   //////////////////////////////////  
   cout<<"arr";
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   int j=1;
   for(int i=0; i<n-1; i++){
       if(a[i]>a[j]){
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           
       }
       j++;
      
   } cout<<"new";
   for(int i=0; i<n; i++){
       cout<<a[i];
   }
 //////////////////////////   **** triplet sum ***********  ///////////////////////////////////////////
 cout<<endl;
  cout<<"enter sum=";
  int sum,count=0;
  cin>>sum;
 for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
         for(int k=j+1; k<n; k++){
             if(a[i]+a[j]+a[k]==sum){
                 cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                 count++;
             }
         }
     }
 }
  cout<<"count ="<<count;
  return 0;  
}