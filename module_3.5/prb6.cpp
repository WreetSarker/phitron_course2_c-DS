#include<bits/stdc++.h>
using namespace std;


int main(){

    int N, k;
    cin>>N>>k;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }

    sort(arr, arr+N);
    int sum = 0;

    for(int i = N-1; i>= (N-k); i--){
        sum += arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
