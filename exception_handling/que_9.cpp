#include <iostream>
using namespace std;
class person
{
 public:
 bool a; // esse true  1 ayga
 person(bool a=0){
    this-> a=a;
 }
 void display(){
     cout<<"value of a "<<a;
 }
 void operator!(){
     a=~a;
 }
};
int main(){
    int n;
    cin>>n;
    person obj(n); // constuctor call hoga
    !obj; // operator++ call krega 
    obj.display();
}