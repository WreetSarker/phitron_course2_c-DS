#include<iostream>
using namespace std;

int main(){
    int N,K,X,Y;
    cin>>N;
    cin>>K;
    cin>>X;
    cin>>Y;
    int sum1, sum;

    if(K<=N){
        sum1 = (K*X);
        sum = sum1 + ((N-K)*Y);
    }else{
        sum = (N*X);
    }

    cout<<sum<<endl;



    return 0;
}
