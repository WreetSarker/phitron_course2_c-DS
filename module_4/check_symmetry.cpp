#include<bits/stdc++.h>
using namespace std;

int main(){

    int row, col;
    cin>>row>>col;
    if(row != col){
        cout<<"Not a square matrix!"<<endl;
        return 0;
    }
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0;j < col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0;j < col; j++){
            if(arr[i][j]!= arr[j][i]){
                cout<<"Not a symmetric matrix!"<<endl;
                return 0;
            }
        }
    }

    cout<<"Symmetric matrix!"<<endl;






    return 0;
}
