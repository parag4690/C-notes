#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    static int admis;
    student(){
        admis++;
        rollno=admis;
    }
};
int student::admis = 0;

int main(){
    student s1,s2,s3,s4,s5,s99;
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;
    cout<<s4.rollno<<endl;
    cout<<s99.rollno<<endl;
}