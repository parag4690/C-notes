#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int a, b,c;
    cin>>a>>b;
   try {
       if (b==0){
           throw 1011;
       }
       else {
           c=a/b;
           cout<<c<<endl;
       }
   }
   catch (int error){
       cout<<"error code "<<error<<" zero can not be divide "<<endl;
   }
   } 
   return 0;
      
}