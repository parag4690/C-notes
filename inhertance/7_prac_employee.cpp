#include <iostream>
using namespace std;
class employee
{
    private:
    string name;
    int id;
    public:
    employee(string name="parag",int id=0){
        this->name=name;
        this->id=id;
        setname(name);
        setid(id);
    }
    string setname(string n){
        name=n;
        return name;
    }
    int setid(int i=0){
        id=i;
        return id;
    }
    string getname(){
        return name;
    }
    int getid(){
        return id;
    }

};
class fulltime_employe:public employee
{
    private:
    int salary;
    public:
    fulltime_employe(string n="parag",int id=0,int slary=0){
        setsalary(slary);
        setname(n);
        setid(id);
    }
    int setsalary(int s=0){
        salary=s;
        return salary;
    }
    int getsalary(){
        return salary;
    }


};
class part_time:public employee
{   private:
    int salary;
    public:
    part_time(string n="parag",int id=0,int slary=0){
       // salary=slary;
        setsalary(slary);
        setname(n);
        setid(id);
    }
    int setsalary(int s=0){
        salary=s;
        return salary;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    fulltime_employe f("parag sharma",12,120000);
    cout<<f.getname()<<endl;
    cout<<f.getid()<<endl;
    cout<<f.getsalary()<<endl;
    return 0;

}