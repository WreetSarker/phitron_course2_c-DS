#include<bits/stdc++.h>
using namespace std;

class Example{
public:
    int x;
    Example(int a){
        x = a;
    }

    Example operator +(Example obj){
        Example ans(0);
        ans.x = x+obj.x;
        return ans;
    }
};

int main(){
    Example a(20), b(30), c(50);

    Example res = a+b;
    cout<<(res+c).x<<endl;




    return 0;
}
