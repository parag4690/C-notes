#include <iostream>
using namespace std;
int main(){
    int a=10,b=0,c=0;
    try
    {
        if(b==0){
            throw 101; // 101 is nothing just for throw and catch (e will be catch )

        }
        else{
            c=a/b;
            cout<<c;
        }
    }
    catch(int e)
    {
        cout<<"devision by zero "<<"error code "<<e;
    }
    
}