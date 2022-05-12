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
};
class car:public vehicle{
    public:
    car(int v=0){
        setv(v);
    }
    int setcar(int p=0){
        setv(p);
        return getvehicle();
    }
    
    int getv(){
        return getvehicle();
    }
};
class truck:public vehicle{
    public:
    truck(int c=0){
        setv(c);
    }
     int settruck(int p=0){
        setv(p);
        return getvehicle();
    }
    int gettruck(){
        return getvehicle();
    }
    
};
class sum:public car , public truck{
    public:
    sum(int v=0 , int d=0){
         setcar(v);
         settruck(d);
    }
    int final(){
        return getv()+gettruck();
    }
};
int main(){
    
    car c(3);
    cout<<c.getvehicle()<<endl;
    truck t(45);
    cout<<t.getvehicle()<<endl;
    sum s(4,6);
    cout<<s.final()<<endl;
}