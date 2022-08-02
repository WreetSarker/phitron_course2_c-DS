#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n][n];

    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    int majDia[n];
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                majDia[i] = arr[i][j];
            }
        }
    }

    int minDia[n];
    int k = n-1;
    for(int i = 0; i < n; i++){
        minDia[i] = arr[i][k];
        k--;
    }
    cout<<"Major Diagonal: ";
    for(int i = 0; i < n; i++){
        cout<<majDia[i]<<" ";
    }
    cout<<endl;
    cout<<"Minor Diagonal: ";
    for(int i = 0; i < n; i++){
        cout<<minDia[i]<<" ";
    }



    return 0;
}
