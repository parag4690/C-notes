#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0,d=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	      for(int i=0;i<n;i++)
	      {
	          if(a[i]%2==0)
	          c++;
	          else
	          d++;
	      }
	      if(c==0 || d==0)
	      cout<<0<<endl;

else if(d%2!=0)
cout<<c<<endl;
else {
    cout<<min(c,d/2)<<endl;
}


}
	return 0;
}