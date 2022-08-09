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
    Node(int val){
        this->data = val;
        this->next = NULL;
    }

};

class LinkedList{
Node* head;
int size;
public:
    LinkedList(){
        this->head = NULL;
        this->size = 0;
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(this->head == NULL){
            this->head = newNode;
            this->size++;
            return;
        }else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            this->size++;
            return;
        }
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(this->head == NULL){
            this->head = newNode;
            this->size++;
            return;
        }else{
            Node* temp = head;
            newNode->next = temp;
            head = newNode;
            this->size++;
            return;
        }
    }

    int getSize(){
        return this->size;
    }

    int getPosition(int val){
        if(this->getSize() == 0){
            return -1;
        }
        Node* temp = head;
        int count = 1;
        while(temp != NULL){

        }
    }

    void displayList(){
        if(this->getSize() == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }

    void insertAtPosition(int pos, int val){
        if(pos < 1 || pos > this->getSize()){
            cout<<"Invalid position!"<<endl;
            return;
        }
        if(pos == 1){
            this->insertAtHead(val);
            return;
        }else if(pos == this->getSize()){
            this->insertAtTail(val);
            return;
        }else{
            Node* temp = head;
            int count = 1;
            while(count != pos-1){
                temp = temp->next;
                count++;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            this->size++;
        }
    }

    void insertAfterValue(int oldValue, int newValue){
        if(this->getSize() == 0){
            cout<<"Empty list!"<<endl;
            return;
        }

    }

    void searchValueUnique(int val){
        if(this->getSize() == 0){
            cout<<"Empty list!"<<endl;
            return;
        }
        Node* temp = head;
        int count = 1;
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Value found at position "<<count<<endl;
                return;
            }
            temp = temp->next;
            count++;
        }
        cout<<"Value not found!"<<endl;
    }

    void searchValueMultiple(int val){
        if(this->getSize() == 0){
            cout<<"Empty list!"<<endl;
            return;
        }
        Node* temp = head;
        int count = 1;
        int k = 0;
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Value found at position "<<count<<endl;
                k++;
            }
            temp = temp->next;
            count++;
        }
        if(k==0){
            cout<<"Value not found!"<<endl;
        }
    }

};


int main(){

    LinkedList lst;
    lst.displayList();
    lst.insertAtTail(1);
    lst.insertAtTail(2);
    lst.insertAtHead(0);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.displayList();
    lst.insertAtTail(5);
    lst.insertAtTail(7);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.displayList();
    lst.insertAtPosition(4, 4);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.displayList();
    lst.insertAtPosition(6, 8);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.displayList();
    lst.searchValueUnique(5);
    lst.insertAtTail(9);
    lst.insertAtTail(5);
    lst.insertAtTail(5);
    cout<<"Length: "<<lst.getSize()<<endl;
    lst.displayList();
    lst.searchValueMultiple(5);


    return 0;
}
