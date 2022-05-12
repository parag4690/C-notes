#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[20]="hello";
    char b[20]="parag";
    cout<<strchr(a,'l')<<endl;
    cout<<strrchr(a,'l')<<endl;
    cout<<strcmp(a,b)<<endl;
}