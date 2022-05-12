#include <iostream>
using namespace std;
class factorial
{
    private:
    int num;
    
    public:
     int product=1;
    factorial(int n){
        num=n;
        for(int i=num; i>0; i--){
            product*=i;
        }
    }
    int fact(){
        return product;
    }

};
int main(){
    int p;
    cout<<"enter number="<<endl;
    cin>>p;
    factorial f(p);
    cout<<f.fact()<<endl;

}