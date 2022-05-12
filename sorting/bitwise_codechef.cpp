#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int b,d=1;
        cin>>b;
        for(int i=0; i<=b; i++){
            if(i%2==0){
                d=d^i;
            }
            else if(i%2!=0){
                d=d&i;
            }
        }
        cout<<"ans="<<d<<endl;
    }
}