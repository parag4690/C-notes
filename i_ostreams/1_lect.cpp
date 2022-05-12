#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream outfile("my.txt");


  //  ofstream outf("test.txt");

  // if i write i like this then all content in file will be remove by this 
  // solution

  ofstream outf( "test.txt" , ios::app);

  outf<<"hello"<<endl;
  outf<<92<<endl;

  // close a file

  outf.close();
  
}