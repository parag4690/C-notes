#include <iostream>
using namespace std;
class tringle
{
    private:
    int base;
    int height;
    public:
    tringle(int b,int h){
        if(b>=0){
        base=b;
        }
        else{
            cout<<"base can't be negative "<<endl;
            base=0;
        }
        if(h>=0){
        height=h;
        }
        else{
            cout<<"height can't be negative "<<endl;
            height=0;
        }
    }
    int area(){
        return (base*height)/2;
    }
};
int main(){
    tringle r(2,4);
    cout<<r.area()<<endl;
}