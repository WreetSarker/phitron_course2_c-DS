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
    int fin[mx+1] = {0};
    int count = 0;
    for(int i = 0; i < n; i++){
        if(fin[arr[i]] == 0){
           fin[arr[i]] = 1;
           count++;
        }

    }

    cout<<count<<endl;





    return 0;
}
