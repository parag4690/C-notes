#include <iostream>
using namespace std;
class rational
{
    private:
    int p;
    int q;
    public:
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
    void display(){
        cout<<p<<"/"<<q<<endl;
    }

};
int main(){
    rational r(3,4),r1(2,5),r2;
    r2=r+r1;
    r2.display();
    //cout<<r2.p<<"/"<<r2.q<<endl;
}