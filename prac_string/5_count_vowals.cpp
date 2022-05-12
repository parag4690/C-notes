#include <iostream>
#include <string>
using namespace std;
int main(){
    int vowals=0,cons=0,space=0;
    string s;
    getline(cin,s);
    for(int i=0; s[i]!='\0'; i++){
          if(s[i]==' '){
              space++; 
          }
          else if(s[i]=='a' || s[i]=='A' || s[i]=='e'){
              vowals++;
          }
          else{
              cons++;
          }
    }
              cout<<space<<" "<<vowals<<" "<<cons<<endl;

}