// we can throw any type of datatypw like string , float
// also you can throw class , also objects



#include <iostream>
using namespace std;


class myclass{

};
int division(int a,int b){
    if(b==0){
        throw myclass(); // classname()
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
    catch(myclass e){ // yha pe bi 
        cout<<"divison by zero "<<"error code "<<endl;
    }
}