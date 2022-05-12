#include <iostream>
using namespace std;

void func(int a) {
    int b = 10;
    cout<<a<<endl;
    a = b + 10;
    cout << a << " ";
   // cout<<b<<" ";
}

int main() {  // gloabal variable hm khi bhi use krskte hai 
    int a = 10;
    func(a);
    cout << a << " ";
 //   cout<<b<<" ";  ye nhi 
}
