// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void prime(int n){
    for(int i=2; i<=n; i++){
       int  count=0;
        for(int k=2; k<=i; k++){
            if(i%k==0){
                count++;
            }
        }
        if(count==1){
            cout<<i<<endl;
        }
    }
}
int main() {
 int x;
 cin>>x;
 prime(x);
    return 0;
}