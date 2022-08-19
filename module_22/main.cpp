#include<bits/stdc++.h>
#include"STACK1.h.cpp"
using namespace std;


int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(12);
    st.push(21);
    cout<<st.pop()<<endl;
    cout<<"Size: "<<st.getSize()<<endl;
    cout<<"Top: "<<st.getTop()<<endl;
    st.isEmpty() == 1 ? cout<<"Stack is empty!"<<endl:cout<<"Stack has value"<<endl;




    return 0;
}
