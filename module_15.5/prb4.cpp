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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==0 || i == (n-1)){
                sum += arr[i][j];
            }else if(i > 0 && i < n/2){
                if(j == i || j==(n-1-i)){
                    sum += arr[i][j];
                }
            }else if(i < (n-1) && i > n/2){
                if(j == i || j==(n-1-i)){
                    sum += arr[i][j];
                }
            }
        }
    }
    sum += arr[n/2][n/2];
    cout<<sum<<endl;




    return 0;
}
