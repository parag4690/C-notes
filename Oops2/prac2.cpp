#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int phy;
    int chem;
    int math;

public:
    student(int r, string n, int p, int c, int m)
    {
        roll=r;
        name=n;
        phy=p;
        chem=c;
        math=m;
    }
    int  rollno(){
      return roll; 
    }
    string names(){
        return name;
    }
    int total(){
        return phy+chem+math;
    }
    char grade(){
        int per=total()/3;
        if(per>=90){
            return 'A';
        }
        else if(per>=40 && per<90){
            return 'B';
        }
        else{
            return 'C';
        }

    }

};
int main(){
    int r,p,c,m;
    cin>>r>>p>>c>>m;
    
    string n;
    getline(cin,n);
    student s(r,n,p,c,m);
    cout<<s.names()<<endl;
    cout<<s.rollno()<<endl;
    cout<<s.total()<<endl;
    cout<<s.grade()<<endl;
}