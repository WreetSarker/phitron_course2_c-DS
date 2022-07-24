#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[50];

    int size;
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    PrintArray(arr, size);

    // inserting element
    int pos;
    cout<<"Enter position: ";
    cin>>pos;
    int val;
    cout<<"Enter value: ";
    cin>>val;

    if(pos<0 || pos > size){
        cout<<"Invalid position!"<<endl;
    }else{
        for(int i = size - 1; i >= pos; i--){
            arr[i+1] = arr[i];
        }
        arr[pos] = val;
        size ++;
    }

    PrintArray(arr, size);
    cout<<endl;
    // Deletion of element
    int delPos;
    cout<<"Insert position from which to delete: ";
    cin>>delPos;
    if(delPos< 0 || delPos >> size-1){
        cout<<"Sorry index out of bound!"<<endl;
    }else{
        for(int i = delPos + 1; i < size; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }

    PrintArray(arr, size);
    return 0;
}

