#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void binarySearch(int arr[], int size, int val){
    sort(arr, arr+size);
    printArr(arr, size);
    int left = 0;
    int right = size-1;
    int mid = (right+left)/2;
    int flag  = 0;
    while(left < right){
        mid = (right+left)/2;
        if(arr[mid] == val){
            cout<<"Position: "<<mid<<endl;
            flag = 1;
            break;
        }else if(val < arr[mid]){
            right = mid;
        }else{
            left = mid+1;
        }
    }
    if(flag == 0)cout<<"Not found!"<<endl;
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
    binarySearch(arr, n, val);


    return 0;
}
