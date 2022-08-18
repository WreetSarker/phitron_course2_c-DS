#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int l = 0; l < tc; l++){
        int d;
        cin>>d;

        int earn[d];
        for(int i = 0; i < d; i++){
            cin>>earn[i];
        }


        for(int i = 1; i < d; i++){
            earn[i] = earn[i]+earn[i-1];
        }

        int spent[d];
        for(int i = 0; i < d; i++){
            cin>>spent[i];
        }

        for(int i = 1; i < d; i++){
            spent[i] = spent[i] + spent[i-1];
        }


        int q;
        cin>>q;
        int toSearch;
        for(int i = 0; i < q; i++){
            cin>>toSearch;
            if(earn[toSearch] - spent[toSearch] >= 0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }




    return 0;
}
