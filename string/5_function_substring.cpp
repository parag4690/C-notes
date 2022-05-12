#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[20]="programming";
    char s2[10]="ram"; // if i write it will start from m
    // if the charactrs not in ram then it will be error

    if(strstr(s1,s2)!=NULL){
           
    cout<<strstr(s1,s2)<<endl; } // print from ram up to soon
    
    else{
        cout<<"not found";
    }



    return 0;
}