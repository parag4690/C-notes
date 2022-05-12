#include <iostream>
using namespace std;
class fact
{
    private:
    int num;
    public:
    int product=1;
    fact(int n=0){
        num=n;
        factorial(num);
    }
    int factorial(int number=0){
        
        for(int i=1; i<=number; i++){
            product=product*i;
        }
        return product;
        

    }
};
int main(){
    int n;
    cout<<"enter number=";
    cin>>n;
    fact f1(n);
    cout<<f1.factorial()<<endl;
    return 0;

}