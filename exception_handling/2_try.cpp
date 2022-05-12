#include <iostream>
using namespace std;
int main(){
    int x=10 , y=0, z; // 10/0 is error;
    try
    {
        /* code */
        if (y==0){
            throw 1101;
        }
        else{
            cout<<x/y<<endl;
        }
    }
    catch(int e)
    {
        cout<<"division by zero"<<" error code "<<e<<endl;
    }
    cout<<"bye"<<endl;
    
}