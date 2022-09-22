#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    map<int, int> m;

    int val;
    for(int i = 0; i < n; i++){
        val = arr[i];
        if(m[val] == 0){
            m[val] = 1;
        }else{
            m[val]++;
        }
    }

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }





    return 0;
}
