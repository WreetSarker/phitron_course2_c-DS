#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int mul = 0;
    for(int i = 1; i <=N; i++){
        if(i%15 == 0){
            mul++;
        }
    }
    int tot = (N*800) - (mul * 200);
    cout<<tot<<endl;

    return 0;
}
