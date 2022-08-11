#include<bits/stdc++.h>
using namespace std;

class Node{
public:
Node* prev;
int data;
Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int val){
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }

};


class DoublyLinkedList{
Node* head;
int size;
public:
    DoublyLinkedList(){
        this->size = 0;
        this->head = NULL;
    }
    int getSize(){
        return this->size;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(this->getSize() == 0){
            this->head = newNode;
            this->size++;
            return;
        }
        Node* temp = head;
        temp->prev = newNode;
        newNode->next = temp;
        head = newNode;
        this->size++;
        return;
    }


    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(this->getSize() == 0){
            this->head = newNode;
            this->size++;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
        this->size++;
        return;

    }

    void printList(){
        if(this->getSize() == 0){
            cout<<"Empty List"<<endl;
            return;
        }
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){

    DoublyLinkedList lst;
    lst.insertAtTail(2);
    lst.insertAtTail(3);
    lst.insertAtHead(1);
    lst.insertAtHead(0);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.printList();


    return 0;
}
