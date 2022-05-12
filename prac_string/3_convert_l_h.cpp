#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++){
      //  s[i]=s[i]+32;
         s[i]=s[i]+32;
        cout<<s[i]<<endl;
    }
}