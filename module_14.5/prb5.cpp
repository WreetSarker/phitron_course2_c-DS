#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    int frq[10000] = {0};


    int val;
    for(int i = 0; i <m; i++){
        for(int j = 0; j < n; j++){
            cin>>val;
            frq[val]++;
            if(frq[val]== 1){
                arr[i][j] = val;
            }else if(frq[val] > 1){
                arr[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
