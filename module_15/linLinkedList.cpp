#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};

void insertAtTail(Node* &head, int val){
    Node* newNode =new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;

}

void display(Node* node){
    while(node!= NULL){
        cout<<node->value<<" ";
        node = node->next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;

    char choice = 'Y';
    char headTail = 'h';
    while(choice == 'Y'){
        int n;
        cout<<"Do you want to insert at head or tail? (h/t): ";
        cin>>headTail;
        if(headTail == 'h'){
            insertAtHead(head, n);
        }else if(headTail == 't'){
            insertAtTail(head, n);
        }else{
            continue;
        }
        cout<<"Enter value: ";
        cin>>n;
        insertAtHead(head, n);
        cout<<"Do you want to continue? (Y/N): ";
        cin>>choice;

    }


    display(head);

    return 0;
}
