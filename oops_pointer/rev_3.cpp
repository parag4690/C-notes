#include <iostream>
using namespace std;
class basicCar
{
    public:
    void star(){
        cout<<"car started";
    }
};
class AdvanceCar:public basicCar
{
    public:
    void playmusic(){
        cout<<"music playing"<<endl;
    }
};
int main(){
    AdvanceCar a;
    basicCar *ptr=&a;
    ptr->star();
    ptr->playmusic();
}