#include <iostream>
#include <string>
using namespace std;
int main(){
    int t=1;
    for(int i=0; i<t; i++){
        int c=0;
        string s="aaaaaaaaaaaaaaaaaaaa";
        int len=(int)s.length();
        cout<<len<<endl;
        if(len%2==0){
            string d=s.substr(0,len/2);
            string m=s.substr(len/2,len);
            cout<<d<<" "<<m<<endl;
            //cout<< d.compare(m)<<endl;
           for(int j=0; j<len/2; j++){
               for(int k=0; k<len/2; k++){
                   if(s[j]==m[k]){
                       c=c+1;
                   }
               }
           }
           cout<<c<<endl;
           if(c==len || c==len-1 || c==len/2 || c%2!=0 || c%len==0){
               cout<<"yes"<<endl;
           }
            
        
        }
    }
}