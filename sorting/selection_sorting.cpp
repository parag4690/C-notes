// swap min element with begginer elent

#include <iostream>
using namespace std;
int main(){
    int a[6]={12,45,23,51,19,8};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<6; j++ ){
            if(a[j]<a[i]){
               int temp=a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }
    }
    for(int i=0;i<6; i++){
        cout<<a[i]<<endl;
    }
}