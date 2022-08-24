#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


int main(){

    Stack<int> st;
    Stack<int> min_st;

    int mn = INT_MAX;

    int n;
    cin>>n;

    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        st.push(val);
        if(val<= mn){
            mn = val;
            min_st.push(mn);
        }
    }

    while(!st.isEmpty()){
        if(st.getTop() != min_st.getTop()){
            st.pop();
            cout<<min_st.getTop()<<" ";
        }else{
            cout<<min_st.getTop()<<" ";
            st.pop();
            min_st.pop();
        }
    }



    return 0;
}
