#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,k,sum=0,s2=0,c=0,dif,m=0;
	    cin>>n>>k;
	    int a[n];
	    for(int j=0; j<n; j++){
	        cin>>a[j];
	        s2++;
			
			
	    }
		for(int j=0; j<n; j++){
			
			if(a[j]>=k){
               sum+=a[j];
               dif=a[j]-k;
			 //  cout<<dif<<endl;
			   a[j+1]=a[j+1]+dif;
			 //  cout<<a[j+1]<<endl;

			   c++;
			  // cout<<a[j]<<" "<<c<<endl;
			}
			else{
				m++;
				break;
				
			}
		}
		for(int j=0; j<n; j++){
			cout<<a[j];
		}
	//	cout<<s2<<c<<endl;
		if(c==s2){
            cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<" "<<m+c<<endl;
		}
		
	}
	return 0;
}
