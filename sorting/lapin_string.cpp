#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--) {
	    string str;
	    cin>>str;
	    int len = str.length();
	    int c=0;
	    if (len%2!=0) {
	        for (int i=0; i<len/2; i++) {
	            for (int j=(len/2)+1; j<len; j++) {
	                if (str[i]==str[j]) {
	                    c++;
	                    str[j] = '0';
	                    break;
	                }
	            }
	        }
	        if (c==len/2)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	    }
	    else {
	        for (int i=0; i<len/2; i++) {
	            for (int j=len/2; j<len; j++) {
	                if (str[i]==str[j]) {
	                    c++;
	                    str[j] = '0';
	                    break;
	                }
	            }
	        }
	        if (c==len/2)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
            
        }
	}
	return 0;
}
