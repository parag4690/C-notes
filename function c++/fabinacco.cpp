#include <iostream>
using namespace std;
bool check(int n){
   int i=0,j=1,z;
   for(;i<n;){
       z=i+j;
       i=j;
       j=z;
   }
   if(n==z){
       return true;
   }
   else{
       return false;
   }
}
int main(){
    cout<<check(13);
    return 0;
}