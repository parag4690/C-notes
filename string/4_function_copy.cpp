#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[10]="good";
    char s2[20]="parag sharma";  // ye pura remove hojayga
    char s3[20]="";
   // char s2[20]
  
   strcpy(s2,s1);

   cout<<s2<<endl;
   strncpy(s3,s2,3);

   cout<<s3<<endl;
   
}