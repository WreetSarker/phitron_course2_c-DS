#include<bits/stdc++.h>
#include"MYQUEUE.h"

using namespace std;

int main(){

    stack<int> st;
    Queue<int> q;

    int n, k;
    cin>>n>>k;

    int x = n/k;
    int y = n%k;

    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        q.enqueue(val);
    }


    int retVal;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < k; j++){
            st.push(q.dequeue());
        }
        for(int j = 0; j < k; j++){
            retVal = st.top();
            q.enqueue(retVal);
            st.pop();
        }
    }
    for(int j = 0; j < y; j++){
            st.push(q.dequeue());
        }
        for(int j = 0; j < y; j++){
            retVal = st.top();
            q.enqueue(retVal);
            st.pop();
        }




    while(!q.isEmpty()){
        cout<<q.dequeue()<<" ";
    }






    return 0;
}
