#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
public:
    Node* front;
    Node* rear;
    int size;

    Queue(){
        this->front = NULL;
        this->rear = NULL;
        this->size = 0;
    }
    int getSize(){
        return this->size;
    }

    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->size == 0){
            this->front = newNode;
            this->rear = newNode;
            this->size ++;
            return;
        }
        this->rear->next = newNode;
        this->rear = newNode;
        this->size++;
        return;
    }

    int peek(){
        if(this->size>0){
            return this->front->data;
        }else{
            return -1;
        }
    }

    int dequeue(){
        if(this->size == 0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        int retVal = this->peek();
        if(this->size == 1){
            this->front = NULL;
            this->rear = NULL;
            this->size --;
            return retVal;
        }
        Node* delNode = this->front;
        this->front = this->front->next;
        delete delNode;
        this->size--;
        return retVal;
    }

    bool isEmpty(){
        return this->size == 0;
    }
};

int main(){

    Queue q;
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
