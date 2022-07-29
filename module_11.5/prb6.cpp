#include<bits/stdc++.h>
using namespace std;


int  main(){

    int a, b, c;
    cin>>a>>b>>c;
    int ct;

    if(a==b && b==c){
        ct = 1;
    }else if(a != b && b != c && a!=c){
        ct = 3;
    }else{
        ct = 2;
    }

    cout<<ct<<endl;



    return 0;
}
