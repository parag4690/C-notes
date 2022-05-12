#include <iostream>
using namespace std;
class complex
{
    public:
    int img;
    int real;
    complex (int img=0,int real=0){
        this->real=real;
        this->img=img;
    }
    
    friend ostream & operator<<(ostream & out , complex & x);

};
ostream & operator<<(ostream & out , complex & x){
    out<<x.real<<"+i"<<x.img<<endl;
    return out; 
}
int main(){
    complex c(5,4);
    cout<<c<<endl;
}