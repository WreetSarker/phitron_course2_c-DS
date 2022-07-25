#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int size, int val){
    int flag = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            cout<<i<<" ";
            flag = 1;
        }
    }
    if (flag == 0){
        cout<<"Not Found!"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array values: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int val;
    cout<<"Enter value to search: ";
    cin>>val;
    linear_search(arr, n, val);


    return 0;
}
