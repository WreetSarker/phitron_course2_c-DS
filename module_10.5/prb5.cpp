#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int checkVal;
    cin>>checkVal;

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == checkVal){
            cout<<"Found at index: "<<i<<endl;
            flag = 1;
        }
    }
    if(flag == 0) cout<<"Not Found!"<<endl;


    return 0;
}
