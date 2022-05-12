// valid email adders===

// 1) character
// 2) numbers
// 3) "__" " . "   only these two are valid in email no other special character





#include <iostream>
using namespace std;
#include <string>
int main(){
    int a=1;
    string s="paragsharma12340_.@gmail.com";
    int i=(int)s.find('@');
    string uname=s.substr(0,i);
  //  cout<<i;
    for(int j=0; j<i; j++){
        if(uname[j]>=65 && uname[j]<=90 || uname[j]>=97 && uname[j]<=122 || uname[j]=='_' || uname[j]=='.' || uname[j]>='1' && uname[j]<='9'|| uname[j]=='0' ){
         //cout<<'f'<<endl;
         continue;
        }
        else{
            a=0;
            break;
        }
    }
    if(a==1){
        cout<<"valid email"<<endl;
    }
    else{
        cout<<"invalid email"<<endl;
    }
}