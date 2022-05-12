#include <iostream>
using namespace std;
void f(int start, int end, int step){
    int c;
    for(int i=start; i<=end; i=i+step){
        c=((i-32)*5)/9;
        cout<<i<<"\t"<<c<<endl;
    }
}
int main(){
    int start,end,step;
    cin>>start>>end>>step;
    f(start,end,step);
    return 0;
}