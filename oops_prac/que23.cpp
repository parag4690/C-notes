#include <iostream>
using namespace std;
class child;
class parent
{
    private:
    int key;
    public:
    parent(int key=0){
        this->key=key;
    }
    void checkkey(int d=0){
        if(d==key){
            cout<<"both are equal"<<endl;
            key=d;
        }
        else {
            cout<<"not equal"<<endl;
        }
       // return key;
    }
    int getkey(int g=0){
        key=g;
        return key;
    }
    int getk(){
        return key;
    }
   // friend child;

};
class child:public parent 

{ public:
    
 child(int c=0){
  
    getkey(c);
   }
   int get(){
       return getk();
   }
  
};
int main(){
    int n,r,q;
    cin>>n>>r>>q;
    parent p(n);
    p.checkkey(r);
    child c(q);
   cout<<c.get()<<endl;


}