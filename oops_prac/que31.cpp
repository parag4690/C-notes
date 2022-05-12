#include <iostream>
using namespace std;
class a{
    
    public:
    int c;
    a(int v=0){
      c=v;
    }
    int setc(int v=0){
        c=v;
        return c;
    }
    int getc(){
        return c;
    }
};
class b{
   public:
    int r;
    b(int v=0){
      r=v;
    }
    int setr(int v=0){
        r=v;
        return r;
    }
    int getr(){
        return r;
    }
};
class sum:public a , public b{
   public:
   sum(int g=0 , int h=0){
       setc(g);
       setr(h);
   }
   int final(){
       return getr()+getc();
   }
};
int main(){
    sum s(4,5);
    cout<<s.final()<<endl;
}