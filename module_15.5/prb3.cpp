#include<bits/stdc++.h>
using namespace std;


int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j <n; j++){
            cin>>arr[i][j];
        }
    }

    int mx = INT_MIN;
    int mxRow, mxCol;
    for(int i = 0; i < m; i++){
        for(int j = 0; j <n; j++){
            if(arr[i][j] > mx){
                mx = arr[i][j];
                mxRow = i;
                mxCol = j;
            }
        }
    }

    cout<<"Max: "<<mx<<endl;
    cout<<"Location: "<<"["<<mxRow<<"]["<<mxCol<<"]"<<endl;



    return 0;
}
