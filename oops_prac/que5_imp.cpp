#include <iostream>
#include <string>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    int phy;
    int maths;
    int chem;
    public:
    student(int roll , string name,int phy,int maths,int chem){
        this->roll=roll;
        this->name=name;
        this->phy=phy;
        this->maths=maths;
        this->chem=chem;
    }
    int getroll(){
        return roll;
    }
    void getname(){
        cout<<name<<endl;
    }
    void marks(){
        cout<<phy<<" "<<maths<<" "<<chem<<endl;
    }
    int total(){
        return (phy+maths+chem)/3;
    }
    char grade(){
       int t=total();
       if(t>=90 && t<=100){
           return 'A';
       }
       else if(t<=89 && t>=70){
           return 'B';
       }
       else {
           return 'C';
       }

    }

};
int main(){
    int roll;
    cout<<"enter roll ";
    cin>>roll;
    string name;
    cout<<"enter name ";
    cin>>name;
    int phy,maths,chem;
    cout<<"enter marks=";
    cin>>phy>>maths>>chem;
    student s(roll,name,phy,maths,chem);
    cout<<s.getroll()<<endl;
    s.getname();
    s.marks();
    s.total();
    cout<<s.grade()<<endl;

}