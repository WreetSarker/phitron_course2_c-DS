#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


bool balancedParenthesis(string s){

    Stack<char> st;
    bool isBalanced = true;

    if(s[0] == ')' || s[0] == '}' || s[0] == ']' ){
        return false;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }else if(s[i] == ')'){
            if(st.getTop() == '('){
                st.pop();
            }else{
                isBalanced = false;
                break;
            }
        }else if(s[i] == ']'){
            if(st.getTop() == '['){
                st.pop();
            }else{
                isBalanced = false;
                break;
            }
        }else if(s[i] == '}'){
            if(st.getTop() == '{'){
                st.pop();
            }else{
                isBalanced = false;
                break;
            }
        }
    }

    if(!st.isEmpty()){
        isBalanced = false;
    }
    return isBalanced;

}


int main(){

    string s;
    cin>>s;
    bool res = balancedParenthesis(s);
    if(res){
        cout<<"Valid parenthesis"<<endl;
    }else{
        cout<<"Invalid parenthesis!"<<endl;
    }




    return 0;
}
