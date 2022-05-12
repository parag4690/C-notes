#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
        int d,n,r,sum=0;
        cin>>n;
        d=n;
        while(n>0){
             r=n%10;
               sum=sum+r;
               n=n/10;
        }
        if(sum%2==0){
            n=d+1;
          //  cout<<n<<endl;
            int k=0,y,e;
            e=n;
           // n=d+1;
            while(1){
             //  e=e+1;
             //  n=d+1;
           //   cout<<n<<endl;
          //    cout<<"e "<<e<<endl;
            //  cout<<"n "<<n<<endl;
              while(n>0){
                y=n%10;
                k=k+y;
                n=n/10;}
             //   cout<<k<<endl;
                if(k%2!=0){
                 // n=e;
                  cout<<"ans "<<e<<endl;
                  break;
                }
                else{
                  //  e=e-1;
                    n=e+1;
                    e=n;
                   // cout<<"D"<<n;
                }
            }
         //   cout<<n<<endl;
        }
      //  cout<<n<<endl;
      else if(sum%2!=0){
         n=d+1;
            int m,e;
            e=n;
            while(1){
              int k=0;
          //  cout<<"n "<<n<<endl;
            while(n>0){
                m=n%10;
                k=k+m;
                n=n/10;}
             //   cout<<"K "<<k<<endl;
                if(k%2==0){
               //  n=e+1;
                 cout<<e<<endl;
                  break;
                }
                else{
                  n=e+1;
                  e=n;
                  //  cout<<e<<endl;
                   // break;
                }
            }
      }
        
    }
	return 0;
    
}
