#include <iostream>
#include <vector>
using namespace std;
int main(){
  /* int a[5];
   for(int i=0; i<5; i++){
       cin>>a[i];
   }
   for(int i=0; i<5; i++){
       cout<<a[i];
   } */
   vector<int> a;
   int n;
   cout<<"choose 0 for break="<<endl;

   
   //cin>>p;
   
   for(;n!=0;){
       //int n;
       cin>>n;
       a.push_back(n);
   }
   a.pop_back(); // for removing zero from last;

   vector<int>::iterator p;
   for(p=a.begin(); p!=a.end(); p++){
       cout<<*p<<" ";
   }
   
}