#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, l = 0, p = 0;
        int a, b;
        cin >> a >> b;
        for (int i = 1; i <= 1000; i++)
        {
            if (i % 2 != 0)
            {
                l = l + i;
                if (l > a)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
            else
            {
                p = p + i;
                if (p > b)
                {
                    cout << "Limik" << endl;
                    break;
                }
            }
        }
    }
}