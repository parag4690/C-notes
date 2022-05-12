#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[20]="hello";
    char s2[20]="hello";
    char s3[20]="Hello";
    char s4[20]="hellO";
    char s5[20]="ilder";

    cout<<strcmp(s1,s2)<<endl; // small h k karn
    cout<<strcmp(s1,s3)<<endl;  // s1>s2 +ve result differce
    cout<<strcmp(s1,s4)<<endl;  // s1>s2 due to capital 0
    cout<<strcmp(s1,s5)<<endl;
}