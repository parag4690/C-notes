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
    friend ostream & operator<<(ostream & out , rational & r2);

};
ostream & operator<<(ostream & out , rational & r2){
   out<<r2.p<<"/"<<r2.q; // yha pe dot jruri h kyuki hm fun ko
   return out;

}
int main(){
    rational r(3,4),r1(2,5),r2;
    r2=r+r1;
    cout<<"sum of "<<r<<" and "<<r1<<" is "<<r2<<endl;
   
    //cout<<r2.p<<"/"<<r2.q<<endl;
}