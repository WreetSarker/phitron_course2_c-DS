#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class CircularLinkedList{
public:
    Node* head;
    int size;

    CircularLinkedList(){
        this->head = NULL;
        this->size = 0;
    }

    int getSize(){
        return this->size;
    }

    void insertAtTail(int data){
        Node* newNode = new Node(data);
        if(this->getSize() == 0){
            this->head = newNode;
            newNode->next = head;
            this->size++;
            return;
        }
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;
        this->size++;
        return;
    }

    void insertAtHead(int data){
        Node* newNode = new Node(data);
        if(this->getSize() == 0){
            this->head = newNode;
            newNode->next = head;
            this->size++;
            return;
        }
        Node * temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        newNode->next = head;
        head = newNode;
        temp->next = head;
        this->size++;
        return;
    }
    void printList(){
        if(this->getSize() == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node * temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }

    void deleteFromHead(){
        if(this->getSize() == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* delNode = head;
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        head = delNode->next;
        temp->next = head;
        delete delNode;
        this->size--;

    }
    void deleteFromTail(){
        if(this->getSize() == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp = head;
        Node* delNode;
        while(temp->next->next != head){
            temp = temp->next;
        }
        delNode = temp->next;
        temp->next = head;
        delete delNode;
        this->size--;
    }
};


int main(){

    CircularLinkedList lst;
    lst.insertAtTail(3);
    lst.insertAtTail(4);
    lst.insertAtTail(5);
    lst.insertAtHead(2);
    lst.insertAtHead(1);
    lst.printList();
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.deleteFromHead();
    lst.printList();
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.deleteFromTail();
    lst.printList();
    cout<<"Length: "<<lst.getSize()<<endl;




    return 0;
}
