#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    int mid = n/2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == mid){
                sum += arr[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == mid){
                sum += arr[i][j];
            }
        }
    }
    sum -= arr[mid][mid];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j < mid){
                sum += arr[i][j];
            }

            if(i == n-1 && j > mid){
                sum += arr[i][j];
            }

            if(i < mid && j == n-1){
                sum += arr[i][j];
            }
            if(i > mid && j == 0){
                sum += arr[i][j];
            }
        }
    }

    cout<<sum<<endl;


    return 0;
}
