#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[27];
    cin>>str;

    int arr[26] = {0};
    int len = strlen(str);
    int ct = 0;
    for(int i = 0; i < len; i++){
        int val = str[i] - 'a';
        arr[val]++;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i]>1) ct++;

    }
    if(ct>0){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }


    return 0;
}
