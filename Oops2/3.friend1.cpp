#include <iostream>
using namespace std;
class a
{
    private:
    int var = 5;
    
    friend class b; // ye private me hi likhna hai
};
class b
{
    public:
    
     
    a obj;
    int fun(){
        return obj.var;
    }
    
};
int main(){
   b obj1;
   cout<<obj1.fun()<<endl;

    return 0;
}
