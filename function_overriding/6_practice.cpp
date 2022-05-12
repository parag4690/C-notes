#include <iostream>
using namespace std;
class shape
{
    public:
    virtual float area()=0;
    virtual float parimeter()=0;
};
class rectangle:public shape
{
    public:
    float length;
    float breadth;
    rectangle(float l=1, float b=1){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
    float parimeter(){
        return 2*(length+breadth);
    }
};
class circle:public shape
{
    private:
    float radius;
    public:
   // int radius;
    circle(float r=1){
        radius=r;
    }
    float area(){
        return (3.14*radius*radius);
    }
    float parimeter(){
        return (2*3.14*radius); // 2pi * r*r
    }
};
int main(){
    shape *s=new circle(10);
    cout<<"area of circle "<<s->area()<<endl;
    cout<<"parimeter of circle "<<s->parimeter()<<endl;

    s=new rectangle(10,5);
    cout<<"area of reactangle "<<s->area()<<endl;
    cout<<"parimeter of reactangle "<<s->parimeter()<<endl;
}