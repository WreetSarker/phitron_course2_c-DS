#include<bits/stdc++.h>
using namespace std;


int main(){
    char O[51], E[51];
    cin>>O;
    cin>>E;
    int lenO = strlen(O);
    int lenE = strlen(E);

    int oStart, eStart = 0;
    while(oStart < lenO || eStart<lenE){
        if(oStart< lenO){
            cout<<O[oStart];
            oStart++;
        }
        if(eStart<lenE){
            cout<<E[eStart];
            eStart++;
        }
    }


    return 0;
}
