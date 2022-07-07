#include<bits/stdc++.h>
using namespace std;


int main(){
    int mx, mn;
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    mx = arr[0];
    mn = arr[0];

    for(int i = 0; i < N; i++){
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    cout<<mx-mn<<endl;


    return 0;
}
