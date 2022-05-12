//   first method to display this 
// but i want to display this with cout
// next part


#include <iostream>
using namespace std;
class complex 
{
 private:
 int real;
 int img;
 public:
 complex (int r=0,int i=0){
   real=r;
   img=i;
 }
 void display(){
     cout<<real<<"+i"<<img<<endl;
 }
};
int main(){
    complex c1(3,4);
    c1.display();
}