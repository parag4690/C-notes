#include <iostream>
using namespace std;
class complexs
{
    // ye sari chj public me hoti hai
public:
int real;
int img;


complexs(int r=0 , int i=0){
    real=r;
    img=i;
}
// to operators use it as datatype
complexs add(complexs x){
    complexs temp;
    temp.real=real+x.real;
   
    temp.img=img+x.img;
   
    return temp; 
} 

 

};
int main(){
    complexs c1(3,7),c2(5,4),c3;
    c3=c1.add(c2);

    cout<<c3.real<<"+i"<<c3.img<<endl;
}