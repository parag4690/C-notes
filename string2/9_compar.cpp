#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="hello";
    string str2="world"; // 1) hello

    cout<<str.compare(str2)<<endl;    // 0 both are zero
    return 0;

}