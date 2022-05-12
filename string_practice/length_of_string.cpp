#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	 int n,sum=2,m,d;
     cin>>n;
      d=n;

     while(1){
         cout<<sum<<endl;
         int sum=0;
         cout<<sum<<endl;
         while (n>0){
             m=n%10;
             sum=sum+m;
             n=n/10;
         }
         cout<<sum;
        // break;
         if(sum%2==0){
         n=d+1;}
     }
   //  cout<<n<<endl;
    
         
     
     
	    
	}
	return 0;
}
