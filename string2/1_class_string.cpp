#include <iostream>
#include <string>
using namespace std;
int main(){
     string str="hello";
     cout<<str<<endl;

     string str1;
     cin>>str1;  // can store only single word due to this the next str is not read
     cout<<str1<<endl;
      
    cin.ignore(); // jb uper cin ho or niche getline

     string str2;
    getline(cin,str2); // until i hit new line character
   //  cin>>str2;
     cout<<str2<<endl;
     return 0;
}