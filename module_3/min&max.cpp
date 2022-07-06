#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 120, 321, -231, 400};
    int mx = arr[0];
    for(int i = 0; i < 5; i++){
        mx = max(mx, arr[i]);
    }
    cout<<mx<<endl;

    return 0;
}
