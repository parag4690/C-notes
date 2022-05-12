// if only capatital then change


#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
            cout<<s[i]<<endl;

        }
    }
    cout<<s<<endl;
}