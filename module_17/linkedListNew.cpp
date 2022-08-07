#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class LinkedList{
    Node* head;
    int length;
public:
    LinkedList(){
        head = NULL;
        length = 0;
    }

    void insertNode(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            this->length++;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        this->length++;
    }

    void insertAtHead(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            this->length++;
            return;
        }
        Node* temp = head;
        head =  newNode;
        head->next = temp;
        this->length++;
    }

    void printList(){
        Node* temp = head;
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int getLength(){
        return this->length;
    }

    void insertAtPosition(int pos, int val){
        if(pos> this->getLength() || pos< 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos == 1){
            this->insertAtHead(val);
            return;
        }else if(pos == this->getLength()){
            this->insertNode(val);
            return;
        }
        int count = 0;
        Node* newNode = new Node(val);
        Node *temp = head;
        while(count != pos-2){
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        this->length++;
    }

    int findPosition(int val){
        int count = 1;
        Node* temp = head;
        if(head ==NULL){
            cout<<"Value not found!"<<endl;
            return -1;
        }
        while(temp->data!= val){
            temp = temp->next;
            count++;
            if(temp == NULL){
                return -1;
            }
        }
        return count;
    }

    void findPositionDuplicate(int val){
        int count = 1;
        Node* temp = head;
        if(head == NULL){
            cout<<"No value in the list"<<endl;
            return;
        }
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Found at position: "<<count<<" ";
            }
            temp = temp->next;
            count++;
        }
        cout<<endl;
    }
};

int main(){

    LinkedList lst;
    lst.insertNode(1);
    lst.insertNode(2);
    lst.insertAtHead(0);
    lst.insertNode(5);
    lst.insertAtHead(-1);
    lst.printList();
    lst.insertAtPosition(1, 21);
    lst.insertAtPosition(1, 21);
    lst.insertAtPosition(4, 34);
    lst.printList();
    lst.insertAtPosition(7, 55);
    lst.printList();
    cout<<lst.getLength()<<endl;
    cout<<lst.findPosition(2)<<endl;
    cout<<lst.findPosition(20)<<endl;
    cout<<lst.findPosition(-1)<<endl;
    cout<<lst.findPosition(21)<<endl;
    lst.findPositionDuplicate(22);
    return 0;
}
