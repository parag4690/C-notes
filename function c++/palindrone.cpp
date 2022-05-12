
#include <iostream>
using namespace std;
int reverse(int n){  // yha bool krege to true or false print krega

    int rev=0,r,d;
    d=n;
    for(;n>0;){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
 /*   if(d==rev){
        return true;
    }
    else{
        return false;
    }*/
}
int main() {
 cout<<reverse(121);

    return 0;
}