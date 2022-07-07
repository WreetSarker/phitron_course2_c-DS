#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[100001];
    cin>>str;
    int arr[26] = {0};
    int ct = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        int val = str[i] - 'a';
        if (arr[val] == 0){
            arr[val]++;
            ct ++;
        }
    }

    char found;
    for(int i = 0; i < 26; i++){
        if((ct < 26) && (arr[i] == 0)){
            found = i + 'a';
            break;
        }
    }

    if(ct == 26){
        cout<<"None"<<endl;
    }else{
        cout<<found<<endl;
    }


    return 0;
}
