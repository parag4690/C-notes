// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[20];
    cin.getline(s,20);
  //  cout<<s<<endl;
    char s2[30];
    cin.getline(s2,30);
   // cout<<s2<<endl;
  //  strstr(s2,'h'); hm ase h nhi deskte 
    cout<<"new string "<<strstr(s2,s)<<endl;
    


    return 0;
}