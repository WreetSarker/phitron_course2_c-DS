#include<bits/stdc++.h>
using namespace std;

class Example{
public:
    int add(int x, int y){
        return x+y;
    }
    double add(double x, double y){
        return x+y;
    }

};


int main(){

    Example ex;
    cout<<ex.add(2, 3)<<endl;



    return 0;
}
