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
       // string d;
      // cout<<s[1]<<endl;
      cout<<s<<endl;
        for(int j=0; j<n; j++){
            if(s[j]=='1'){
                if(s[j+1]=='0'){
                    count1++;
                //    cout<<j<<" "<<count1<<endl;
                }
                if(j!=0){
                    if(s[j-1]=='0'){
                        cout<<s[j-1]<<endl;
                        count2++;
                        cout<<j<<" "<<count2<<endl;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        cout<<s<<endl;
      //  cout<<"c2 "<<count1<<endl;
     //   cout<<"c "<<count2<<endl;
	    if(x*count1>=count2*y){
	        cout<<count2*y<<endl;
	    }
	    else{
	        cout<<count1*x<<endl;
	    }
	}
	return 0;
}
