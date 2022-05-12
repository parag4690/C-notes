#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=x;
    int b=x/2;
    int c=0; 
    if(x%2==0 && a!=b!=c){
    cout<<a<<" "<<b<<" "<<c<<" "<<(a^b+b^c+c^a)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}