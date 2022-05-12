#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(--t){
    int b;
    cin>>b;
    if(b%4==0){
        cout<<b+3<<endl;
    }
    else if((b-1)%4==0){
        cout<<b<<endl;
    }
    else{
        cout<<3<<endl;
    }
    }
}