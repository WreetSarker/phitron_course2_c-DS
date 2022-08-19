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

    int getLength(){
        return this->length;
    }
    void insertAtTail(int data){
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

    void printList(){
        Node* temp = head;
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->data;
            if(temp->next != NULL){
                cout<<"->";
            }
            temp = temp->next;
        }
        cout<<endl;
    }




};

int main(){


    int n;
    cin>>n;

    LinkedList lst;


    int val;
    for(int i = 0; i < n; i++){
        cin>>val;
        if(val%2 == 0){
            lst.insertAtTail(-1);
        }else{
            lst.insertAtTail(val);
        }
    }

    lst.printList();

}
