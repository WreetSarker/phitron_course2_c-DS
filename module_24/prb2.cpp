#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    cin>>m;
    int arr[m];
    for(int i = 0; i <m; i++){
        cin>>arr[i];
    }


    cin>>n;
    int arr2[n];
    for(int i = 0; i <n; i++){
        cin>>arr2[i];
    }

    int mx = max(m, n);
    int fin[mx] = {0};


    int count;
    int val = 0;
    for(int i = 0; i <m; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr2[j]){
                count = 1;
            }
        }
        if(count == 0){
            fin[val] = arr[i];
            val++;
        }
    }

    for(int i = 0; i < val; i++){
        cout<<fin[i]<<" ";
    }


    return 0;
}
