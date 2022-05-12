#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    try{
        if(t==0){
            throw "bad internet connection";
        }
        else{
            cout<<"good internet "<<endl;
        }
    } 
    catch(char error){ 
        cout<<error<<endl; // not called 
    }
    catch(...){
        cout<<"bad connection"<<endl;
    }
    return 0;
}