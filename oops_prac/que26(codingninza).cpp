#include <iostream>
using namespace std;
class piggybank{
    public:
    int n;
    int c;
    piggybank(int n=0, int c=0){
        if(n==50 || n==100 || n==2000 || n==200 || n==500){
        this->n=n;
        }
        else{
        cout<<"invalid note"<<endl;
        this->n=0;
        }
        this->c=c;
    }
    int shownote(int d=0){
        if(d>=50){
            n=d;
        }
        else{
            cout<<"Invalid Note"<<endl;
            n=0;
        }
        return n;
    }
    int showcoin(int r=0){

        c=r;
        return c;
    }
    int getnote(){
        return n;
    }
    int getcoin(){
        return c;
    }
    int add(){
        return n+c;
    }

};
int main(){
    int notes,coins;
    cin>>notes>>coins;
    piggybank p(notes , coins );
    cout<<50+p.add()<<endl;
    
}