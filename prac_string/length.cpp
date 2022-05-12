#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0; s[i]!='\0'; i++){
      count++;
    }
    cout<<"length of string is "<<count<<endl;
}