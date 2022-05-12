// operators overloading = compiler polymorphism
#include <iostream>
using namespace std;
class person
{
    private:
    int a;
    public:
    person()
    {
        a=10;
    }
    void operator++(int){ // overload return operator++ // uniary // int lgage to obj++
        a=a+100;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    person obj;
    obj++; // obj++ nhi chlega  agr int nhi lgayge to
    obj.display();
}