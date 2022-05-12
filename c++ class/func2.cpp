#include <iostream>
using namespace std;

void fuc(int x,int y){   // float ko auto maticaly int me change krdega

        int z=x+y;
        cout<<z;
}
int main(){
        int a=10; 
        float b=5.2;
        fuc(a,b);
}
