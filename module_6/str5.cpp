#include<bits/stdc++.h>
using namespace std;

int main(){

    string st = "aaaaaadbarerraa";
    cout<<st.find_first_not_of('a')<<endl;
    string sub = st.substr(3,3);
    cout<<sub<<endl;


    return 0;
}
