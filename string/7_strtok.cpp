#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[20]="x=10;y=20;z=35";

  // cout<<strtok(s1,"=;")<<endl;  // i want 10 ,y ,20

    // repeat uper vala ko stop kro

    char *token=strtok(s1,"=;");
    while(token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}