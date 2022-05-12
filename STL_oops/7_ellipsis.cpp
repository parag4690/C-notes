// we dont need to give parameters in fun 

// int sum( int n , . . . )   n=> no. of arguments

#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int n,...){

    // access 
    int x;
    va_list list; // object list
    va_start(list,n); // list is taking arguments
    int s=0;
    for(int i=0; i<n; i++){
        x=va_arg(list,int); // int data type
        s+=x;
    }
    return s;
}

int main(){
   cout<<sum(3,10,20,30)<<endl; // here 3 is no. of argument;

}