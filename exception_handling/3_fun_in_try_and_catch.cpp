#include <iostream>
using namespace std;
int division(int a,int b){
    if(b==0){
        throw 10.1;
    }
    else{
        return a/b;
    }
}
int main(){
    int x=10 , y=0 , z;
    try{
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(double e){
        cout<<"divison by zero "<<"error code "<<e<<endl;
    }
}