#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,count=0;
        float d,e;
        cin>>n;
        char s[n];
        cin>>s;
        for(int j=0; j<n; j++){
            if(s[j]=='0'){
                count++;
            }
        }
        d=120-count;
        cout<<120-n+count<<endl;
        e=float(d/120)*100;
        cout<<e<<endl;
        if(e>=75){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

}