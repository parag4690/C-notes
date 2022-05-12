#include <iostream>
using namespace std;
class p
{
    public:
    int c=20;
};
p fun(){
    p obj;
    obj.c=100;
    return obj;


}
int main(){

    p obj1=fun();
    cout<<obj1.c<<endl;
}