#include<bits/stdc++.h>
using namespace std;


int  main(){
    int T;
    cin>>T;

    for(int q = 0; q < T; q++){
        int n;
        cin>>n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int mx = INT_MIN;

        for(int i = 0; i < n; i++){
            mx = max(arr[i], mx);
        }

        int ar[mx+1] = {0};
        for(int i = 0; i <n; i++){
            ar[arr[i]]++;
        }

        int sz = sizeof(ar)/sizeof(arr[0]);


        int ct = INT_MIN;
        for(int i = 0; i < sz; i++){
            ct = max(ct, ar[i]);
        }

        cout<<n-ct<<endl;
    }




    return 0;
}
