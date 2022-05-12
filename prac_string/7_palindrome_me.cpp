#include <iostream>
#include <string>
using namespace std;
int main(){
    string r;
    cin>>r;
    string s=r;
    for(int i=0; i<s.length()/2; i++){ // ye eslye taki vo bad me ffir se reverse ho rha tha
        int temp = r[i];

        r[i]=r[s.length()-1-i];
        r[s.length()-1-i]=temp;
    }
 /*   for(int i=0; i<s.length(); i++){
        cout<<r[i];
    }*/
    cout<<r<<endl;
    if(r==s){
        cout<<"palindrome string"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}