#include <iostream>
using namespace std;
class test
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void fun1(){
        cout<<"test"<<endl;
    }
    friend void fun();
};
void fun(){
    test t;
    t.a=10;
    t.b=30;
    t.c=4;
    t.fun1();
    cout<<t.a<<endl;
}
int main(){
    fun();
    test t2;
    t2.fun1();
}
