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
    for(int i = 0; i < n; i++){
        mx = max(arr[i], mx);
    }



    int cnt[mx+1] = {0};
    int sz = sizeof(cnt)/sizeof(cnt[0]);
    for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
    }
//    cout<<"Frequency array: "<<endl;
//    for(int i = 0; i < sz; i++){
//        cout<<cnt[i]<<" ";
//    }
//
//
//    cout<<endl;
    int pre[sz] = {0};
    for(int i = 1; i < sz; i++){
        pre[i] = pre[i-1] + cnt[i];
    }

//    cout<<"Prefix array: "<<endl;
//    for(int i = 0; i < sz; i++){
//        cout<<pre[i]<<" ";
//    }
//
//    cout<<endl;
    int k;
    int fin[n];
    for(int i = n-1; i>= 0; i--){
        pre[arr[i]]--;
        k = pre[arr[i]];
        fin[k] = arr[i];
    }

    cout<<"Sorted array: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<fin[i]<<" ";
    }



    return 0;
}
