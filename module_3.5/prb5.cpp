#include<bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin>>N;
    int mx = 1;
    for(int i = 1; i <=6; i++){
        int val = pow(2, i);
        if(val <=N){
            mx = val;
        }
    }
    cout<<mx<<endl;


    return 0;
}
