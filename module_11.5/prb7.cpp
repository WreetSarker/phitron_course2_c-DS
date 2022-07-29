#include<bits/stdc++.h>
using namespace std;


int  main(){
    int n;
    cin>>n;

    int l = n%10;
    int f = n/100;
    if(l==f){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }




    return 0;
}
