#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;

public:

    void set_marks(int marks){
        english_marks = marks;
    }
    void set_password(string pass){
        password = pass;
    }
    Student(){
    }
    Student(string nm, char sec, int rl, int marks, string pass){
        name = nm;
        section = sec;
        roll = rl;
        set_marks(marks);
        set_password(pass);
    }
    int get_marks(){
        return english_marks;
    }
    void update_marks(string pass, int marks){
        if(pass == password){
            set_marks(marks);
        }else{
            cout<<"Password does not match";
        }
    }
};


int main(){

    int N;
    cin>>N;
    Student students[N];
    int rl, eng_mark;
    string nm, pass;
    char sec;
    for(int i = 0; i < N; i++){
        cin>>nm>>sec>>rl>>eng_mark>>pass;
        Student st(nm, sec, rl, eng_mark, pass);
        students[i] = st;
    }

    cout<<"Enter roll, marks and password to view!"<<endl;
    int view_roll, view_marks;
    string view_pass;
    cin>>view_roll>>view_marks>>view_pass;
    for(int i = 0; i < N; i++){
        if(students[i].roll == view_roll){
            cout<<"Student Name: "<<students[i].name<<endl<<"Roll: "<<students[i].roll<<endl<<"Section: "<<students[i].section<<endl;
        }else if(i == N){
            cout<<"Student not found!"<<endl;
        }
    }


    return 0;
}
