#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="today";
    string::reverse_iterator it;
    // we can use simple for loop for this

    for(it=str.rbegin(); it!=str.rend(); it++){
    //    cout<<*it; // lowercase
        *it=*it-32;  // uper case
        cout<<*it;
    }
    cout<<endl;
    cout<<str;
    cout<<endl;

    return 0;
}