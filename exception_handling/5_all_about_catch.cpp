#include <iostream>
using namespace std;
class parent{

};
class child:public parent{

};

int main(){
    try{
       // throw 1;
       // throw 1.5;
       // throw 'a'; // car
       throw parent();
    }
    catch(int e){
        cout<<"int catch"<<endl;
    }
    catch(double e){
        cout<<"double catch"<<endl;
    }
    catch(char e){
        cout<<"char catch"<<endl;
    }
    catch(child e){
        cout<<"always child should above parent "<<endl;
    }
    catch(parent e){
        cout<<"parent catch"<<endl;
    }
    catch(...) {  // ellipse always last
        cout<<"all catch"<<endl;
    }
}