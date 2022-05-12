#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int m=0; m<t; m++)
    {
        int a, b, c, min = INT_MAX, sum;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            for (int j = a + 1; j <= b; j++)
            {
                c = __gcd(i, j);
                if (c > 1 && i != j)
                {
                    //  cout<<i<<" "<<j<<" "<<c<<endl;
                    sum = i + j;
                cout<<i<<" "<<j<<"  "<<sum<<endl;
                    if (sum < min)
                    {
                        min = sum;
                    
                    }
                }
            }
        }
     
    }
   // return 0;
}
