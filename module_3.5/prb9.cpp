#include<bits/stdc++.h>
using namespace std;


int main(){
    char A[11], B[11], C[11];
    cin>>A>>B>>C;

    int lenA = strlen(A);
    int lenB = strlen(B);

    if((A[lenA-1] == B[0]) && (B[lenB-1] == C[0])){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}
