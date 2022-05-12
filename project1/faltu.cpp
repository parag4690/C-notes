#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, c = 0;
	int max = n / 2;
	cin >> n;
	char s[n];
	string s2, s3;

	cin >> s;
	s3 = s;

	sort(s, s + n);
	s2 = s;
	c = 0;

	for (int i = 0; i < n/2; i++)
	{
	//	int temp = s3[i];
	//	s3[i] = s3[n - 1 - i];
	//	s3[n - 1 - i] = temp;
	//	if (s3 == s2)

	// glti ye h ki hme vhi swap krna h jo bda hoga niche dekh 
	// ye jruri nhi h ki hme phle element swap krna hai


	if(s3[i]>s3[n-1-i]){
		swap(s[i],s[n-1-i]);
	}
	
	}
	if(s3==s){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	

	// cout<<s2<<endl;
}