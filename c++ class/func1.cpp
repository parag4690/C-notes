#include <iostream>
using namespace std;

  //  int main(){
    // compiler sirf usi folder m chlta hai jisme me vo hota h
    // esliye path ko
    // two types of func == user func ,  predefined(standerd func library)
    // void fun (parameters)

   // will this run   we write main above  
   int fun(int ,int );  // hme bs data type bta na 
    int main(){
      int a=10 , b=20;
      cout<<fun(a,b);
    }
    int fun(int a,int b){
        return a+b;
    }

    // no phle hme func ko declare krna prega ki ye fun ko ki vo uper hai
    // func is not declared

    // how to declare

    // int fun(int a,int b) declare krdo main se uper
//}