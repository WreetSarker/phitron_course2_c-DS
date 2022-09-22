#include<bits/stdc++.h>
using namespace std;


int main(){

    map<char, int> M;
    M['b'] = 12;
    M['a'] = 21;

    for(auto it = M.begin(); it != M.end(); it++){
        cout<<(*it).second<<endl;
    }

    cout<<M['e']<<endl;




    return 0;
}
