#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int pcount = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            for (int k = 0; k < n; k++)
            {
                if (count > 1)
                {
                    count--;
                    break;
                }
                else
                {
                    pcount++;
                    break;
                }
            }
        }
        cout << pcount << endl;
    }
    return 0;
}