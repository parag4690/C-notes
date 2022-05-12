#include <iostream>
using namespace std;
int fact(int n){
    int ans = 1; 
    for(int i=1; i<=n; i++){
        ans= ans*i;
    }
    return ans;
}   // n nhi int input
int main(){
   int a,b,c;
   cin>>a;
    cout<<fact(a)<<endl;
    return 0;
}