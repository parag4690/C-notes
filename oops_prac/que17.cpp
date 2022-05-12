#include <iostream>
using namespace std;
int division(int a,int b){
    if(b==0){
        throw 1101;
    }
    else{
        return a/b;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b;
        try{
           c=division(a,b);
            cout<<c<<endl;
        }
        catch(int error){
            cout<<"error code "<<error<<endl;
        }
    }
}