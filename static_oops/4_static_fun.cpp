#include <iostream>
using namespace std;
class test
{
    private:
    int a;
    int b;
    public:
    static int count;
    test()
    {
        a=10;
        b=10;
        count++;
    }
    static int getcount(){
        // we can return from class like a++
        return count;
    }
};
int test::count=0;
int main(){
    // we can directly acces no need to write class
    cout<<test::getcount();
    test t1;
    cout<<t1.getcount();
    test t2;
    cout<<t2.getcount(); // ye objects count kr ra h
    cout<<test::getcount();
}
