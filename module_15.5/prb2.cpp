#include<bits/stdc++.h>
using namespace std;


int main(){

    int n = 3;
    int A[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>A[i][j];
        }
    }

    int B[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>B[i][j];
        }
    }
    int sum;

    int C[n][n] = {0};
    int i, j;
    for(i = 0; i < n; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            sum += A[i][j]*B[j][i];
        }
        C[i][j] = sum;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
