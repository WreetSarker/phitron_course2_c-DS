#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[101];
    cin>>str;
    int len = strlen(str);
    char f = str[0];
    char l = str[len-1];
    cout<<f<<len-2<<l<<endl;


    return 0;
}
