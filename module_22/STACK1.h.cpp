#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


class Stack{
public:
Node* head;
Node* top;
int size;

    Stack(){
        this->head = NULL;
        this->top = NULL;
        this->size = 0;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            top = newNode;
            this->size++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        this->size++;
    }

    int pop(){
        if(head == NULL){
            cout<<"Empty stack!"<<endl;
            return -1;
        }
        if(this->size == 1){
            int retVal = top->data;
            this->head = NULL;
            this->top = NULL;
            this->size--;
            return retVal;
        }
        Node* delNode = top;
        top = delNode->prev;
        top->next = NULL;
        int returnVal = delNode->data;
        this->size--;
        delete delNode;
        return returnVal;
    }

    bool isEmpty(){
        return this->size == 0;
    }

    int getSize(){
        return this->size;
    }

    int getTop(){
        int topVal = top->data;
        return topVal;
    }


};


