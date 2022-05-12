#include <iostream>
using namespace std;
class cont
{
    public:
    string name;
    cont(string name="parag"){
        this->name=name;
    }
    
    friend cont operator+(cont x , cont y) ;

};
cont operator+(cont x, cont y){
        cont temp;
        temp.name=x.name+y.name;
        return temp;
    }
int main(){
    cont n("parag") , n1(" sharma"),n2;
    n2=n+n1;
    cout<<n2.name<<endl;
}