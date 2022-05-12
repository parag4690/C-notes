#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,c=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    while(1){
	        int c1=0;
          //  c=c-1;
	        for(int j=0; j<n; j++){
	            if(s[j]=='1'){
	                s[j]='0';
	                j=j+1;
	               // c++;
                    
	            }
	            else if(s[j]=='0'){
	                c1++;
	            }
	        }
         // c++;
         
	        if(c1==n){
               // cout<<c1<<endl;
	            break;
	        }
            c++;
	    }
        cout<<c<<" "<<s<<endl;
        if(c==0){
            cout<<0<<endl;
        }
        else if(c%2!=0){
            cout<<1<<endl;
        }
        else if(c%2==0){
            cout<<2<<endl;
        }
	    
	}
	return 0;
}
