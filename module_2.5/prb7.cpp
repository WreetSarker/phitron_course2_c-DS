#include<iostream>
using namespace std;

int main(){
    int A, B, C, D;
    cin>>A>>B>>C>>D;

    int area1 = A*B;
    int area2 = C*D;
    area1 > area2 ? cout<<area1<<endl:cout<<area2<<endl;



    return 0;
}
