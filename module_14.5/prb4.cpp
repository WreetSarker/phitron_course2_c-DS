#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i <m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n/2; j++){
            swap(arr[i][j], arr[i][n-1-j]);
        }
    }

    cout<<"Printed array: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
