#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, d;
        cin >> x;
        d = x;
        if (x % 5 == 0 && x % 10 == 0)
        {
            if (x / 5 < x / 10)
            {
                cout << x / 5 << endl;
            }
            else
            {
                cout << x / 10 << endl;
            }
        }
        else if (x % 5 == 0 || x % 10 == 0)
        {
            d = d - 5;
            cout << d / 10 + 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
