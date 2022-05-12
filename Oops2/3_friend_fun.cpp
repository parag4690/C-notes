#include <iostream>
using namespace std;
class A
{
    private:
    int var=10;
    public:
    friend void fun();
};
void fun(){
    A obj;
    int d=obj.var;
    for(int i=1; i<=d; i++){
        cout<<i<<endl;
    }
}
int main(){
    fun();
}