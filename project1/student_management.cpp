#include <iostream>
using namespace std;

// array store detail  we declare the string 

string arr1[20] , arr2[20] , arr3[20] , arr4[20] , arr5[20];
int total=0;

void enter(){
    int choice;
    cout<<"How many students do you want to enter: ";
    cin>>choice;
     // data enter 
    if(total==0){
        total=total+choice; //  student pr dyan 
    for(int i=0; i<choice;  i++){
        cout<<"Enter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter rollno: ";
        cin>>arr2[i];
        cout<<"Enter cource: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
    }
    }
    else{

        // dyan

        for(int i=total; i<total+choice;  i++){
        cout<<"Enter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter rollno: ";
        cin>>arr2[i];
        cout<<"Enter cource: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
    }
    total=total+choice;

    }
}
void show(){
    if(total==0){
        cout<<"No data available"<<endl;
    }
    else{
    for(int i=0; i<total; i++){
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"cource: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
    }
    }
}
void search(){
    string roll;
    cout<<"enter rollno of student u want to search: ";
    cin>>roll;
    for(int i=0; i<total; i++){
        if( roll==arr2[i] ){ // rollno ka data sara array2 me store hai eslye
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"cource: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
        }
    }

}
void update(){

    string roll;
    cout<<"enter rollno of student u want to search: ";
    cin>>roll;
    for(int i=0; i<total; i++){
        if( roll==arr2[i] ){ // rollno ka data sara array2 me store hai eslye
        // 
        cout<<"Previous Data"<<endl<<endl;
        cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"cource: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;

        cout<<"\nEnter newdata";
        cin>>arr1[i];
        cout<<"Enter rollno: ";
        cin>>arr2[i];
        cout<<"Enter cource: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
        }
    }

}
void deleterecord(){

    int a;
    cout<<"Press 1 to delete full record"<<endl;
    cout<<"Press 2 to delete the specific record"<<endl;
    cin>>a;
    if(a==1){
        total=0;
        cout<<"All record is deleted"<<endl;
    }
    else if (a==2){
        string rollno;
        cout<<"Enter rollno which u want to delete"<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++){
            if(rollno==arr2[i]){
                 // dyan uske age ki value ko udana hai
                 for(int j=i; j<total; j++){
                     arr1[j]=arr1[j+1];   // agle vali array ko 
                     arr2[j]=arr2[j+1];
                     arr3[j]=arr3[j+1];
                     arr4[j]=arr4[j+1];
                     arr5[j]=arr5[j+1];
                     
                 }
                 // 
                 total--;
                 cout<<"Your required record is deleted"<<endl<<endl;
            }
        }
    }

}
void exit(){

}

int main(){
    int value;
  while(true){
    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show data"<<endl;
    cout<<"press 3 to search data"<<endl;
    cout<<"press 4 to update data"<<endl;
    cout<<"press 5 to delete data"<<endl;
    cout<<"press 6 to exit"<<endl;
    cin>>value;
    switch(value){
        case 1:
           enter();
           break;
        case 2:
           show();
           break;
        case 3:
           search();
           break;
        case 4:
           update();
           break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default:
          cout<<"Invalid input"<<endl;
          break;               
    }

  }

}