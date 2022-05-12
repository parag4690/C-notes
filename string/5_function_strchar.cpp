#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[20]="programming";
    char s2[20]="programming";

    cout<<strchr(s1,'r')<<endl; // single quots  and   1st occurance of g from lest side

    cout<<strrchr(s2,'r')<<endl; // 1st occurance of char from right side
}