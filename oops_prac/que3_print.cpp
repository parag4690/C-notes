#include <iostream>
using namespace std;
class print
{
    private:
    int n;
    public:
    print (int num=0){
        n=num;
        print_n(n);
    }
    void print_n(int p=0){
        for(int i=1 ; i<=p; i++){
            cout<<i<<" ";
        }
    }

};
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    print pri(n);
    pri.print_n();
}