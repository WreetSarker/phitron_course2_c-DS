#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;

    int arr1[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }

    cin>>m;
    int arr2[m];
    for(int i = 0; i <m; i++){
        cin>>arr2[i];
    }

    int ct = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                ct++;
            }
        }
    }

    if(ct == 0) cout<<"Empty Set"<<endl;

    return 0;
}
