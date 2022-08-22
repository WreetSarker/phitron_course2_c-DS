#include<bits/stdc++.h>
#include"MY_QUEUE.h"
using namespace std;


int main(){

    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<"Size: "<<q.getSize()<<endl;
    cout<<"Peek: "<<q.peek()<<endl;
    while(!q.isEmpty()){
        cout<<q.dequeue()<<" ";
    }




    return 0;
}
