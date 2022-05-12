// syntx

//  map<key : value>pair
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string>m;
    m.insert(pair<int,string>(1,"parag"));

    m.insert(pair<int,string>(2,"sharma"));
    
    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++){
        cout<< itr->first << " " << itr->second<<endl;
    }



}