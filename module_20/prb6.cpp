#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, q;
    cin>>n>>q;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = (hi+lo)/2;
        if(arr[mid] == q){
            cout<<mid+1<<endl;
            break;
        }else if(arr[mid] > q){
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }





    return 0;
}


