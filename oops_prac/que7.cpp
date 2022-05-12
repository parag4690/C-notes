#include <iostream>
using namespace std;
class add
{
  private:
  int a;
  public:
  add(int a=0){
      this->a=a;
      getadd(a);
  }
  int getadd(int p=0){
      return a;
  }
  add operator+(add x){
      add temp;
      temp=a+x.a; // a or x ka a
      return temp;
  }
};
class sub
{
    private:
    int s;
    public:
    sub(int s=0){
        this->s=s;
        getsub(s);
    }
    int getsub(int sub=0){
        return s;
    }
    sub subtract(sub x){
        sub temp;
        temp=s-x.s;
        return temp;
    }

};
int main(){
    add a1(5),a2(5),a3,a4;
    a3=a1+a2;
    cout<<a3.getadd()<<endl;
    sub s1(10),s2(3),s3,s4;
    s3=s1.subtract(s2);
    s4=s2.subtract(s1);
    cout<<"s3 "<<s3.getsub()<<endl;
    cout<<"s4 "<<s4.getsub()<<endl;
    return 0;
}