#include<bits/stdc++.h>
using namespace std;


int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Row or Column? (r/c)"<<endl;
    char rc;
    cin>>rc;
    int val;
    if (rc == 'r'){
        cout<<"Enter row number: "<<endl;
        cin>>val;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == (val-1) ){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }else if(rc == 'c'){
        cout<<"Enter column number: "<<endl;
        cin>>val;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(j == (val-1) ){
                    cout<<arr[i][j]<<endl;
                }
            }
        }
    }



    return 0;
}
