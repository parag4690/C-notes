#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="today";
    string::iterator it;

    for(it=str.begin(); it!=str.end(); it++){
    //    cout<<*it; // lowercase
        *it=*it-32;  // uper case
        cout<<*it;
    }
    cout<<str;
    cout<<endl;

    return 0;
}