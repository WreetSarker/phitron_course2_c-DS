#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, q;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i = 1; i < n; i++){
        if(arr[i]>=0){
            arr[i] = arr[i-1] + arr[i];
        }else{
            arr[i] = arr[i-1] + 0;
        }
    }

    int j, k;
    for(int i = 0; i < q; i++){
        cin>>j>>k;
        if(j == 1){
            cout<<arr[k-1];
        }else{
            cout<<arr[k-1]-arr[j-2];
        }
    }




    return 0;
}

