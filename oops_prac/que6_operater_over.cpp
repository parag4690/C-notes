#include <iostream>
using namespace std;
class complex 
{
  private:
  int img;
  int real;
  public:
  complex(int r=0, int i=0){ // default value dena jruri hai
      real=r;
      img=i;
      setreal(real);
      setimg(img);

  }
  int setreal(int re=0){
     // real=re; ye ni dena
     
      return real;
  }
  int setimg(int im=0){
      return img;
  }
  complex add(complex x){
    complex t;
    t.real=real+x.real;
    t.img=img+x.img;
                                             
    return t;
  }
};
int main(){
    complex c1(5,4),c2(4,5),c3;
    c3=c1.add(c2);
    cout<<c3.setreal()<<"+i"<<c3.setimg()<<endl;
}