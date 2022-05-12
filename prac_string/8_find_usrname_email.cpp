// find user name from email address

#include <iostream>
#include <string>
using namespace std;
int main(){
     // sharmaparag4690@gmail.com
     // before @ is what we call username

     string s;
     getline(cin,s);
     int len=(int)s.length(); // int me converst kro
     for(int i=0; s[i]!='@'; i++){
           cout<<s[i];
     }

}