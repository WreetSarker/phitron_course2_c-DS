#include<bits/stdc++.h>
using namespace std;

class Parent{
private:
    int taka;
public:
    Parent(int x){
        taka = x;
    }
    friend class Friend;
};

class Friend{
public:
    void printTk(Parent *ptr){
        cout<<ptr->taka<<endl;
    }
};


int main(){
    Parent pt(1500);
    Friend fr;
    fr.printTk(&pt);




    return 0;
}
