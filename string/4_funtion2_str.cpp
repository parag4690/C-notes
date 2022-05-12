#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[20]="good";
    char s2[10]=" morning";
    char s3[30]=" half hai";


    strcat(s1,s2); // s2 ko s1 k
    
    cout<<s1<<endl;
    
    strncat(s1,s3,4);  // ek space ko bhi count kr rha h

    cout<<s1<<endl;
    
    return 0;
}