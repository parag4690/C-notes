#include <iostream>
using namespace std;
class base
{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};
class derived:public base
{
    public:
    int y;
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    base b;
    b.x=10;
    b.show();
    // derived 
    derived d;
    d.y=20;
    d.display(); // phle muje value assign krne prege x ki 
    d.show(); //  jse niche kiya hai
    d.x=30;
    d.display();

}