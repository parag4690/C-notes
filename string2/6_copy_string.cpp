#include <iostream>
#include <cstring>
using namespace std;
#include <string>
int main(){
    string s="welcome";

    char str[10];
    char str2[10];
    s.copy(str,s.length());
   str[s.length()]='\0';
    cout<<str<<endl;

   s.copy(str2, 3);  // it will give some error
   str2[3]='\0';
   cout<<str2<<endl; // because there is no null point 



    return 0;
}