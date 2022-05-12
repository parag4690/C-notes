#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,x,y,count1=0,count2=0;
	    cin>>n>>x>>y;
   
	    string s;
	    cin>>s;
        string d;
        d=s[1]+s[2];
        cout<<d<<endl;
       // cout<<s[1]+s[2]<<endl;
	    for(int j=0; j<n; j++){
	        if(s[j]+s[j+1]=='01'){
	            count1++;
	        }
	        else if(s[j]+s[j+1]=='10'){
	            count2++;
	        }
	    }
        cout<<"c "<<count2<<endl;
	    if(count1>=count2){
	        cout<<count2*y<<endl;
	    }
	    else{
	        cout<<count1*x<<endl;
	    }
	}
	return 0;
}
