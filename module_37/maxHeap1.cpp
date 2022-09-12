#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int size, int idx){
    int largest = idx;
    int leftChild = (2*idx) + 1;
    int rightChild = (2*idx) + 2;

    if(leftChild<size && arr[leftChild] > arr[largest]){
        largest = leftChild;
    }

    if(rightChild<size && arr[rightChild] > arr[largest]){
        largest = rightChild;
    }

    if(largest != idx){
        swap(arr[largest], arr[idx]);
        heapify(arr, size, largest);
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int nonLeafStart = (n/2)-1;

    for(int i = nonLeafStart; i>= 0; i--){
        heapify(arr, n, i);
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
