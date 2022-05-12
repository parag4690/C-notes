#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x, y;
		cin >> x >> y;
		if(x<y){
			if(y%x==0){
				cout<<(y/x)-1<<endl;
			}
			else{
				cout<<y/x<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
	
	}
	return 0;
}
