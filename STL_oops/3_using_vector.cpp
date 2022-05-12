#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    
    // 1st method to access this 

    for(int x:v){  // mean x in v
        cout<<x<<" ";
    }

    v.pop_back();
     
     cout<<endl;
    // 2nd method to acces this which is avaible for every container
    
    vector<int>::iterator itr;
    for(itr=v.begin() ; itr!=v.end(); itr++){
        cout<<*itr<<" "<<endl; // v bhi ni chlega itr bhi nhi chlega kyuki here vector works as pointer
    }
}

// vector <int> ==> datatype 
// vector <int> p={1,2,3} ==> mean it will fix array it will start after 3 element