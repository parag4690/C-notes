// fun have anytype of datatype.
// we can add two different type of data type

//#include <iostream>
//using namespace std;
//int main(){
  //  cout<<4+4.2<<endl;
//


//                               ********************************                           //




#include <iostream>
using namespace std;
template<class t , class f> // if i give this single class then it will take both wether intinger or float
void sum(t n , f r){
    cout<<n+r<<endl;
}
int main(){
    int n;
    cin>>n;
    float r;
    cin>>r;
    sum(n,r);

}