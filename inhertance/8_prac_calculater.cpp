#include <iostream>
using namespace std;
class calculater
{
private:
    int a;
    // int b;
public:
    calculater(int a = 0)
    {
        this->a = a;
        //  this->b=b;
    }
    calculater operator+(calculater c)
    {
        calculater temp;
        temp.a = a + c.a;
        return temp;
    }
    calculater operator-(calculater d)
    {
        calculater temp;
        temp.a = a - d.a;
        return temp;
    }
    calculater operator*(calculater e)
    {
        calculater temp;
        temp.a = a * e.a;
        return temp;
    }
    friend ostream &operator<<(ostream &output, calculater x);
};
ostream &operator<<(ostream &output, calculater x)
{
    output << x.a << endl;
    return output;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, d;
        cout << "enter 2 numbers to perform operation =";
        cin >> p >> d;
        calculater c(p), c1(d), c3;
        cout << "chosse 1 for add , 2 for multiplication , 3 for subtraction= ";
        int n;
        cin >> n;
        if (n == 1)
        {
            c3 = c + c1;
            cout << c3;
        }
        else if (n == 2)
        {
            c3 = c * c1;
            cout << c3;
        }
        else if (n == 3)
        {
            c3 = c - c1;
            cout << c3;
        }
        else
        {
            cout << "no operators"<<endl;
        }
    }
}