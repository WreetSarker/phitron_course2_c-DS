#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[100001];
    cin>>str;
    int len = strlen(str);
    for(int i = 0; i <len; i+=2){
        cout<<str[i];
    }


    return 0;
}
