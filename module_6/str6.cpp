#include<bits/stdc++.h>
using namespace std;

int main(){

    string st = "aa ah ae db ar er ra ae";
    stringstream stream(st);

    string w;
    while(stream >> w){
        cout<<w<<"--";
    }


    return 0;
}
