#include <iostream>
#include <string>
using namespace std;
int main(){
  
    string s = "madam";
    string r="";

    //1st their capacity should be same

    int len=(int)s.length(); // int jruri hai
    r.resize(len);
    for(int i=0, j=len-1; i<len; i++, j--){  // dyan 
        r[i]=s[j];
    }
 /*   for(int i=0; i<len; i++){
        cout<<r[i];
    } */
    if(s.compare(r)==0){
        cout<<"palindrone"<<endl;
    }
    else{
        cout<<"nope"<<endl;
    }
 
}