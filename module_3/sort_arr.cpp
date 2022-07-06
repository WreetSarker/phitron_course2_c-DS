#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {-100, 412, -165, 1, 231, -512};
    int *ptr = &arr[0];
    sort(ptr, ptr+6);

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
