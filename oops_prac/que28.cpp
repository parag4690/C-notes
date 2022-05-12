#include <iostream>
using namespace std;
class vehicle{
    public:
    int a;
    vehicle(int b=0){
        a=b;
    }
    int setv(int c=0){
        a=c;
        return a;
    }
    int getvehicle(){
        return a;

    }
    void fuel(){
        cout<<"fuel is full"<<endl;
    }
};
class car:public vehicle{
    public:
    car(int v=0){
        setv(v);
    }
    int getv(){
        return getvehicle();
    }
};
int main(){
    
    car c(3);
    cout<<c.getv()<<endl;
    c.fuel();
}