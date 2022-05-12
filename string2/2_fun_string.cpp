#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="hello";
    cout<<str.length()<<endl; // error when str=nullptr and zero when string is empy
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl; // varies through capacity

    str.resize(50);
    cout<<str.capacity()<<endl;

    cout<<str.max_size()<<endl; // this many characters i can have
   // cout<<str.clear()<<endl;
   str.clear(); 
   cout<<str<<endl;
   cout<<str.length()<<endl;

 // now string has became empty
   if(str.empty()){
       cout<<"it is empty"<<endl;
   }
   else{
       cout<<"string is "<<str<<endl;
   }
    
    cout<<str<<endl;

    return 0;
}