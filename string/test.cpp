// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[20];
    cin.getline(s,20);
    cout<<s<<endl;
    char s2[30];
    cin.getline(s2,30);
    cout<<s2<<endl;
    strcat(s,s2); // s k andr s2
    cout<<"new string "<<s<<endl;
    


    return 0;
}