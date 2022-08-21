#include<bits/stdc++.h>
#include"MY_STACK.h"

using namespace std;


void reverseString(string s){
    string word = "";
    Stack<string> st;


    for(int i = 0; i < s.length(); i++){
        word+=s[i];
        if(s[i] == ' ' || i == s.length()-1){
            st.push(word);
            word = "";
        }
    }

    while(!st.isEmpty()){
        cout<<st.pop()<<" ";
    }
    cout<<endl;
}


int main(){

    Stack<string> st;
    string s;
    getline(cin, s);

    reverseString(s);




    return 0;
}
