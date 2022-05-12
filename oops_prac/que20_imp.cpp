#include <iostream>
using namespace std;
class employe
{
  int day;

public:
  employe(int emp = 0)
  {
    day = emp;
    // cout<<"e"<<day<<endl;
    setday(day);
  }
  int setday(int d = 0)
  {
    day = d; // set krne se zero ayga
    return day;
  }
  int getday()
  {

    return day;
  }
  employe operator*(employe y)
  {
    employe temp;
    temp = y.day * 12 * 13;
    return temp;
  }
};
int main()
{

  int year;
  //  cout<<"enter years ";
  cin >> year;
  employe obj(year), obj1;
  obj1 = obj * obj; // dyan obj me obj dalna hai
  cout << obj1.getday() << endl;
  obj.setday(44);
  obj1 = obj * obj; // dubara likhna prega
  cout << obj1.getday() << endl;

  // obj.display();
}