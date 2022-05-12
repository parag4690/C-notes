#include <iostream>
#include <string>
using namespace std;
int main(){
    string email="john123@gmail.com";
    int i=(int)email.find('@'); // find func
    string uname=email.substr(0,i); // 
    cout<<uname<<endl;
}