#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j) sum += arr[i][j];
        }
    }

    cout<<"Sum of diagonals is "<<sum<<endl;

    return 0;
}
