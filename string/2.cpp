#include <iostream>
using namespace std;
int main(){
    char s[20];
    char a[200];
    char b[100];
    cout<<"enter your name ";
    cin>>s; // this will only print first word which will you write
    cout<<"welcome "<<s<<endl;

    // how to write more than 1 words

    cin.get(a,200);
    cout<<"2nd  "<<a<<endl;


    // get line function
    cin.getline(b,100);
    cout<<"3rd "<<b<<endl; // both are same
    



    return 0;
}