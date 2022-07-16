#include<bits/stdc++.h>
using namespace std;

class Example{

private:
    int x, pass;

public:
    Example(int p){
        pass = p;
    }
    void setX(int a, int p){
        if(pass == p) x = a;
    }

};

int main(){

    Example a(10, 20, 30);
    cout<<"x: "<<a.x<<" "<<"y: "<<a.y<<" "<<"z: "<<a.z<<endl;


    return 0;
}
