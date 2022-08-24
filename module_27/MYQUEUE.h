#include<bits/stdc++.h>
using namespace std;

template<typename N>
class Node{
public:
    N data;
    Node<N> *next;

    Node(N data){
        this->data = data;
        this->next = NULL;
    }
};


template<typename Q>
class Queue{
public:
    Node<Q>* front;
    Node<Q>* rear;
    int size;

    Queue(){
        this->front = NULL;
        this->rear = NULL;
        this->size = 0;
    }
    Q getSize(){
        return this->size;
    }

    void enqueue(Q data){
        Node<Q>* newNode = new Node<Q>(data);
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

    Q peek(){
        Q topVal;
        if(this->size>0){
            topVal = this->front->data;
            return topVal;
        }else{
            return topVal;
        }
    }

    Q dequeue(){
        Q retVal;
        if(this->size == 0){
            cout<<"Queue is empty!"<<endl;
            return retVal;
        }
        retVal = this->peek();
        if(this->size == 1){
            this->front = NULL;
            this->rear = NULL;
            this->size --;
            return retVal;
        }
        Node<Q>* delNode = this->front;
        this->front = this->front->next;
        delete delNode;
        this->size--;
        return retVal;
    }

    bool isEmpty(){
        return this->size == 0;
    }
};

