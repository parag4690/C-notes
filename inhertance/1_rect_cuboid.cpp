#include <iostream>
using namespace std;
class base
{
    public:
    void display(){
        cout<<"display of base "<<endl;
    }
};
class derived:public base{};
int main(){
    derived d;
    d.display();
}