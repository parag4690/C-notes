#include <iostream>
using namespace std;
class car
{
    public:
    static int price;
    car(){
        price=price+200;
    }
    static int getprice(){
        return price;
    }
};
int car::price=20;
int main(){
    cout<<car::price<<endl; // agr muje bina khride price janan ho to ye use krte hai
    car c;
    cout<<c.price<<endl;
    cout<<car::getprice()<<endl;
    cout<<c.getprice()<<endl;
    car c1;
    cout<<c1.price<<endl;
}
