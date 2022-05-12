#include <iostream>
using namespace std;
class parent
{
    private: int a;
    protected: int b;
    public:
    int c;
    void funparent(){
        a=10;
        b=5;
        c=15;
    }
};
class child:public parent // next 2 more slide
{
    public:
    void funChild(){
        a=10; // not accesable
        b=5;
        c=15;
    }
};
class grandchild:public child
{
    public:
    void fungrandChild(){
        a=10; // not accesable
        b=3;
        c=3
    }
};
int main(){
    child c ;
    c.a=10;
    c.b=5;
    c.c=20;
}