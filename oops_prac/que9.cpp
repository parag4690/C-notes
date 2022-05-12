#include <iostream>
using namespace std;
class rational
{
    private:
    int p;
    int q;
    public:
    rational(int p=0,int q=0){
        this->p=p;
        this->q=q;
        getp(p);
        getq(q);
    }
    int getp(int n=0){
        return p;
    }
    int getq(int d=0){
        return q;
    }
    rational rat(rational x){
        rational temp;
        temp.p=p*x.q+q*x.p;
        temp.q=q*x.q;
        return temp;
        
    }
};
int main(){
    rational r(3,4),r1(2,5),r2;
    r2=r.rat(r1);
    cout<<r2.getp()<<"/"<<r2.getq()<<endl;
}