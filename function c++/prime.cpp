#include <iostream>
using namespace std;
int  prime(int n){
    int d;
    for(int i=2; i<n; i++){
       if(n%i==0){
          // return "false";  apn ese nhi kr skte
          return false;
       }
       else{
           return true;
       }
    }
}
int main(){
    bool ans;  // ans is in 0 ans 1
    int a;
    cin>>a;
    ans=prime(a);
    cout<<ans;
    return 0;
}