// string to intiger

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[10]="235";
    char s2[10]="24.45";

    long int x=strtol(s1,NULL,10); // 10 is base vo binary vala
    float y=strtof(s2,NULL);

    cout<<x<<endl<<y<<endl;
    cout<<x+10<<endl;  // number can added confirmed
    

}