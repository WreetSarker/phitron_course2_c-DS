#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }

    set<int>::iterator it;

    for(it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}
