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
            if(i%2 == 0){
                if(j%2!=0){
                    sum+= arr[i][j];
                }
            }else{
                sum += arr[i][j];
            }
        }
    }

    cout<<sum<<endl;



    return 0;
}
