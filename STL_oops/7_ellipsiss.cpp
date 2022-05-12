

#include<iostream>

#include<cstdarg>


using namespace std;

template<class T>


T sum(T n,...){

   

    va_list list;

    va_start(list, n);

   

    T x;

    T s=0;

   

    for(int i=0;i<n;i++){

       

        x=va_arg(list,T);

        s+=x;

    }

   

    return s;

   

}


int main(){

   

    cout<<sum(10,20)<<endl;

    cout<<sum(10,20,30)<<endl;

    cout<<sum(1.5f,18.4f,23.4f);

   

    return 0;

}