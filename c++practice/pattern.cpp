// *****
//   ***
//    **
//     *



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k=n;
    for(int i=0; i<n; i++){
       // int k=n; ye loop k bhar krna hoga
       
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        for(int j=0; j<k;j++){
            cout<<"*";
        }
       
        cout<<endl;
        k=k-1;
       // cout<<k;
    }

    return 0;
}