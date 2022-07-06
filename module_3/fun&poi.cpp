#include<bits/stdc++.h>
using namespace std;

void print(int *x){
    *x = 29;
}

int main(){
    int a = 20;
    print(&a);

    cout<<a<<endl;
    return 0;
}
