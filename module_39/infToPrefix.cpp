#include<bits/stdc++.h>
#include"MY_STACK.h"

using namespace std;

int precedenceCalc(char c){
    if(c == '^'){
        return 3;
    }else if(c == '*' || c == '/'){
        return 2;
    }else if(c == '+' || c == '-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPrefix(string chk){
    reverse(chk.begin(), chk.end());
    Stack<char> st;
    string result = "";

    for(int i = 0; i < chk.size(); i++){

        if(chk[i] >= '0' && chk[i] <= '9'){
            result += chk[i];
        }else if(chk[i] == ')'){
            st.push(chk[i]);
        }else if(chk[i] == '('){
            while(!st.isEmpty() && st.getTop()!= ')'){
                result += st.pop();
            }
            if(!st.isEmpty()) st.pop();
        }else{
            while(!st.isEmpty() && precedenceCalc(st.getTop()) > precedenceCalc(chk[i])){
                result += st.pop();
            }
            st.push(chk[i]);
        }

    }

    while(!st.isEmpty()){
        result += st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}


int prefixEvaluation(string chk){
    Stack<int> st;

    for(int i = chk.length()-1; i>=0; i--){

        if(chk[i] >= '0' && chk[i] <= '9'){
            st.push(chk[i]-'0');
        }else{
            int a = st.pop();
            int b = st.pop();

            switch(chk[i]){
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }

    return st.getTop();
}


int main(){

    string s;
    cout<<"Enter string to evaluate: ";
    cin>>s;
    string res;
    res = infixToPrefix(s);
    cout<<"Prefix is: "<<res<<endl;
    cout<<"Result is: "<<prefixEvaluation(res)<<endl;




    return 0;
}
