#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>v;
    v.insert(10);
    v.insert(20);
    set<int>::iterator s;
    for(s=v.begin(); s!=v.end(); s++){
        cout<<*s<<" ";
    }

}