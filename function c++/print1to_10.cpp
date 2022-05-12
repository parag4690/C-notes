#include <iostream>
using namespace std;
 
/*int print(int n){
    for(int i=1; i<=n; i++){
        return i;    // return hmesa ek value print krega; to hm ye use nhi krstke 
    }
} 
int main(){
    cout<<print(4);
    return 0;
}*/

void print(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}
int main(){
    print(10);
    return 0;
}