#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[]="hello";
    cout<<strlen(s)<<endl;
    char a[]="hello world"; // include space also
    cout<<strlen(s)<<endl;

    char *b ; // with pointers

    cout<<"enter a string ";
    cin.getline(s,100);  // esse hoga 

    cout<<"length "<<strlen(b)<<endl;
}