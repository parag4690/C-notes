#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="how are you";

    cout<<str.find("y")<<endl;
    cout<<str.find('ds')<<endl; // this is not prestent in this but compiler assume this is outside the index so we have to give condition

    cout<<str.rfind('o')<<endl; // find from right side

    return 0;
}