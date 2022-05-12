#include <iostream>
using namespace std;
class your ; // it is for declaration
class my
{
    private:
    int a=10;
    friend your;
};
class your
{
    public:
    my m;
    void fun()
    {
        cout<<m.a;
    }
};
int main(){
    my p;
   // p.fun(); no
   your y;
   
   y.fun(); 
}