#include<bits/stdc++.h>
using namespace std;


int  main(){

    string str;
    cin>>str;

    int f = str.find('A');
    int l = str.find_last_of('Z');
    cout<<(l-f+1)<<endl;



    return 0;
}
