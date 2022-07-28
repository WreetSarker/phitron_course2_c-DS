#include<bits/stdc++.h>
using namespace std;


int  main(){

    int T;
    cin>>T;
    string str;
    for(int i = 0; i < T; i++){
        cin>>str;
        int countOne = 0;
        int countCont = 0;
        for(int j = 0; j < str.length(); j++){
            if(str[j] == '1') countOne++;
        }

        int firstIdx = str.find('1');
        if(firstIdx >= 0 && firstIdx < str.length()){
            while(str[firstIdx] != '0' && firstIdx < str.length()){
                countCont++;
                firstIdx++;
            }
        }

        if(countOne> 0 && countCont == countOne){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
