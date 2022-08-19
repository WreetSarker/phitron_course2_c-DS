#include<bits/stdc++.h>
#include"MY_STACK.h"
using namespace std;


int globalID = 100;

class Person{
string name;
float salary;
int id;

public:
    Person(){
        this->name = "";
        this->salary = -1.0;
        this->id = -1;
    }

    void setName(string name){
        this->name = name;
    }

    void setSalary(float salary){
        this->salary = salary;
    }

    Person(string name, float salary){
        setName(name);
        setSalary(salary);
        id = globalID;
        globalID++;
    }

    int getId(){
        return this->id;
    }

    string getName(){
        return this->name;
    }

    float getSalary(){
        return this->salary;
    }

    void printPerson(){
        cout<<this->name<<" | "<<this->id<<" | "<<this->salary<<endl;
    }
};


int main(){

    Stack<Person> st;

    Person a ("Wreet Sarker", 100);
    Person b ("Mridul Ghosh", 500.5);
    Person c ("Shishir Roy", 300.4);
    st.push(a);
    st.push(b);
    st.push(c);

    while(!st.isEmpty()){
        Person val = st.pop();
        val.printPerson();
    }


    return 0;
}
