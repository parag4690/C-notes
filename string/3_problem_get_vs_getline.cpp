#include <iostream>
using namespace std;
int main(){
    char s[100];
    char s2[100];

    cout<<"enter your name ";
  //  cin.get(s,100);
  cin.getline(s,100);
    cout<<"welcome "<<s<<endl;

    cout<<"enter your Name again ";
  //  cin.get(s2,100);   // this is not get input due to get
   cin.getline(s2,100);
    cout<<"welcome "<<s2<<endl;


    // get function dont read enter key
    // ans ==  name is taken by this first get function
    // and  this second get is taken by second function
    // that's why get has problem with second function
    //  solution 



    //  1) use getline
    //  2) use cin.ignore()
// it will ignore any extra remaing character after reading first string

   // next   3_solution


    return 0;
}