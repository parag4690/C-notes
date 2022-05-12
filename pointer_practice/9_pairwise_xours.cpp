#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    for (int i = 0; i <= x; i++)
    {

        for (int j = 0; i <= x; j++)
        {

            for (int k = 0; i <= x; k++)
            {
                if((i^j+j^k+k^i)==x && i!=j!=k){
                    cout<<i<<" "<<j<<' '<<k<<endl;
                }
            }
        }
    }
}