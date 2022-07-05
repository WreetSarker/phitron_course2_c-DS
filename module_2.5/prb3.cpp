#include<iostream>
using namespace std;

int main(){

    int A, B;
    char op;
    cin>>A>>op>>B;
    if(op == '+'){
        cout<<int(A)+int(B)<<endl;
    }else{
        cout<<int(A)-int(B)<<endl;
    }



    return 0;
}
