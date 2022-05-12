#include <iostream>
using namespace std;
class Bill{
    public:
    int a;
    Bill(int a=0){
       this->a=a; 
    }
    int showdata(int b=0){
         int ans = 4*b;
         a=ans;
         return a; 
    }
    void getdata(){
        cout<<a<<endl ;
    }
    int gdata(){
        return a;
    }
    Bill operator+(Bill x){
        Bill t;
        t.a=a+x.a;

        return t;
    }
    
    Bill operator++(){
        Bill temp;
        temp.a=(a+(a*20)/100);
        return temp;
    }
    Bill operator--(){
        Bill temp;
        temp.a=(a-(a*20)/100);
        return temp;
    }
};
int main(){
     int p,c;
     cin>>p>>c;
     Bill B1(p) , B2(c) , B3 , B4;
     B1.showdata(p);
     B2.showdata(c);
     B3=B1+B2;
     B3.getdata();
     int d=B3.gdata();
     if(d<=4*400){
         B4=--B3;
     }
     else{
     B4=++B3;
     }
     B4.getdata();

}