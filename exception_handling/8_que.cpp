#include <iostream>
using namespace std;
class person
{
 public:
 int a;
 person(){
     a=20;
 }
 void display(){
     cout<<"value of a "<<a;
 }
 void operator++(){
     a=a+100;
 }
};
int main(){
    person obj; // constuctor call hoga
    ++obj; // operator++ call krega 
    obj.display();
}