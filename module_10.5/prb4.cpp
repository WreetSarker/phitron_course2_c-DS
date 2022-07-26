#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mx = INT_MIN;
    int mn = INT_MAX;
    int mxIdx, mnIdx;

    for(int i = 0; i < n; i++){
        if(arr[i]>mx){
            mx = arr[i];
            mxIdx = i;
        }
        if(arr[i]<mn){
            mn = arr[i];
            mnIdx = i;
        }
    }

    cout<<"Max: "<<mx<<" Index: "<<mxIdx<<endl;
    cout<<"Min: "<<mn<<" Index: "<<mnIdx<<endl;

    return 0;
}
