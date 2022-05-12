#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        for(int j=0; j<y; j++){
            if(x<=2){
                x=x+1;
            }
            else if(x>2){
                x=x-1;
            }
        }
        if(x%2==0){
            cout<<"janmesh"<<endl;
        }
        else{
            cout<<"jay"<<endl;
        }
    }
}