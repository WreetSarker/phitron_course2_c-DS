#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, k;
    cin>>n>>k;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int mn = arr[k-1];
    int mx = arr[n-k];
    cout<<mn<<" "<<mx;





    return 0;
}
