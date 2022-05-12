#include <iostream>
using namespace std;
class rational
{
    public:
    int p;
    int q;
    
    rational (int n=0, int d=0){
        p=n;
        q=d;
    }
    rational operator+(rational x){
        rational temp;
        temp.p=(p*x.q)+(q*x.p);
        temp.q=(q*x.q);
        return temp;
    }

};
int main(){
    rational r(3,4),r1(2,5),r2;
    r2=r+r1;
    cout<<r2.p<<"/"<<r2.q<<endl;
}