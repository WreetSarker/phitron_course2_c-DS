#include<bits/stdc++.h>
using namespace std;

int main(){

    string st = "abdcde";
    string:: iterator it;
    for(it = st.begin(); it != st.end(); it ++){
        cout<<*it<<"--";
    }
    cout<<endl;


    for(auto rit = st.rbegin(); rit!= st.rend(); rit++){
        cout<<*rit<<"--";
    }
    cout<<endl;

    for(int i = 0; i < st.length(); i++){
        cout<<st[i]<<"--";
    }

    return 0;
}
