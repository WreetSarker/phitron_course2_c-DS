#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    int sq = int(sqrt(x)) + 1;
    for(int i = 2; i< sq; i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cin>>n;

    for(int i = 2; i <=n; i++){
        if(isPrime(i) == 1){
            cout<<i<<" ";
        }
    }




    return 0;
}
