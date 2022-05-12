#include <iostream>
using namespace std;
class outer
{
    public:
    int a=10;
    static int b;
    void fun(){
        i.show();
      //  cout<<i.x;
    }
    class inner
    {
        public:
        int x=15;
        void show(){
            cout<<b<<"inner"<<endl;
        }
    };
    // must declare after this
    inner i;
};
int outer::b = 20;
int main(){
  outer o;
  o.fun();
 // inner i2; we can not use inner


}
