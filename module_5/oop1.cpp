#include<bits/stdc++.h>
using namespace std;

class Student{

public:
    char name[100];
    int roll;
};


int main(){
    Student wreet;
    strcpy(wreet.name, "Wreet Sarker");
    wreet.roll = 01;
    cout<<"Name: "<<wreet.name<<endl;
    cout<<"Roll: "<<wreet.roll<<endl;



    return 0;
}
