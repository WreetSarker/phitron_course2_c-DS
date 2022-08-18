#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mx = arr[0];
    for(int i = 0; i <n; i++){
        mx = max(arr[i], mx);
    }
    int fin[mx+1] = {0};
    for(int i = 0; i <n; i++){
        fin[arr[i]]++;
    }

    for(int i = 0; i < mx+1; i++){
        if(fin[i]>0){
            cout<<i<<" => "<<fin[i]<<endl;
        }
    }



    return 0;
}
