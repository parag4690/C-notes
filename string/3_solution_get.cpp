#include <iostream>
using namespace std;
int main(){
    char s[100];
    char s2[100];

    cout<<"enter your name=";
    cin.get(s,100);

    cout<<"welcome "<<s<<endl;
    
    ///     *****     solution      ****


    cin.ignore(); // it will remove the extra charactdrs

    cout<<" enter your college name ";
    cin.get(s2,100);

    cout<<"welcome "<<s2<<endl;

    return 0;
}