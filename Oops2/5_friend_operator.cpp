#include <iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int img;
    public:
    complex (int r=0, int i=0){
          real=r;
          img=i;
    }
    void dsipley(){
        cout<<real<<"+i"<<img<<endl;
    }
    void dsipley1(){
        cout<<real<<endl;
    }
  friend complex operator+(complex x, complex x1);
   

};
 complex operator+(complex x, complex x1){
        complex temp;
        temp.real=x.real+x1.real;
        temp.img=x.img+x1.img;
        return temp;
    }
int main(){
    complex c(2,4),c1(4,5),c3;
    //c3=c1.add(c2);  take c2 as parameter 
    c3=c+c1;
   // cout<<temp.real<<"+i"<<temp.img<<endl;
  // essa ni krskta kyuki ye private hai
  c3.dsipley();
  c3.dsipley1();





}